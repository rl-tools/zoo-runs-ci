#!/usr/bin/env python3

"""
Script to strip all steps except the last one from all runs.
Recursively finds all directories containing a 'steps/' subdirectory
and removes all but the highest numbered step.
"""

import os
import shutil
from pathlib import Path


def clean_last_step(step_dir: Path) -> tuple[int, int]:
    """
    Clean the last step directory, keeping only trajectories.json.gz and checkpoint.h5.
    
    Args:
        step_dir: Path to the last step directory
        
    Returns:
        Tuple of (files_removed: int, files_kept: int)
    """
    files_to_keep = {'trajectories.json.gz', 'checkpoint.h5'}
    files_removed = 0
    files_kept = 0
    
    for file_path in step_dir.iterdir():
        if file_path.is_file():
            if file_path.name in files_to_keep:
                files_kept += 1
            else:
                try:
                    file_path.unlink()
                    files_removed += 1
                except Exception as e:
                    print(f"    Warning: Could not remove {file_path.name}: {e}")
        elif file_path.is_dir():
            # Remove any subdirectories
            try:
                shutil.rmtree(file_path)
                files_removed += 1
            except Exception as e:
                print(f"    Warning: Could not remove directory {file_path.name}: {e}")
    
    return files_removed, files_kept


def clean_git_folder(run_path: Path) -> bool:
    """
    Remove the entire git folder from the run directory.
    
    Args:
        run_path: Path to the run directory
        
    Returns:
        True if git folder was removed, False otherwise
    """
    git_dir = run_path / "git"
    
    if not git_dir.exists():
        return False
    
    try:
        shutil.rmtree(git_dir)
        return True
    except Exception as e:
        print(f"    Warning: Could not remove git folder: {e}")
        return False


def strip_run(run_path: Path) -> tuple[bool, str]:
    """
    Strip all steps except the last one from a run.
    In the last step, keep only trajectories.json.gz and checkpoint.h5.
    Also remove logs.tfevents and git folder from the run directory.
    
    Args:
        run_path: Path to the run directory containing a 'steps' subdirectory
        
    Returns:
        Tuple of (success: bool, message: str)
    """
    steps_dir = run_path / "steps"
    
    if not steps_dir.exists() or not steps_dir.is_dir():
        return False, f"No steps directory found in {run_path}"
    
    # Remove logs.tfevents if it exists
    logs_file = run_path / "logs.tfevents"
    logs_removed = False
    if logs_file.exists():
        try:
            logs_file.unlink()
            logs_removed = True
        except Exception as e:
            print(f"    Warning: Could not remove logs.tfevents: {e}")
    
    # Remove git folder
    git_removed = clean_git_folder(run_path)
    
    # Get all step directories and sort them numerically
    try:
        step_dirs = [d for d in steps_dir.iterdir() if d.is_dir()]
        if not step_dirs:
            return True, f"No step directories found in {steps_dir}"
        
        # Sort by directory name (numeric)
        step_dirs.sort(key=lambda x: x.name)
        
        if len(step_dirs) == 1:
            # Only one step, just clean it
            last_step = step_dirs[0]
            files_removed, files_kept = clean_last_step(last_step)
            extras = []
            if logs_removed:
                extras.append("removed logs.tfevents")
            if git_removed:
                extras.append("removed git folder")
            extras_msg = ", " + ", ".join(extras) if extras else ""
            return True, f"Only one step ({last_step.name}), cleaned {files_removed} files, kept {files_kept}{extras_msg}"
        
        # Keep the last step, remove all others
        last_step = step_dirs[-1]
        removed_count = 0
        
        for step_dir in step_dirs[:-1]:  # All except the last
            try:
                shutil.rmtree(step_dir)
                removed_count += 1
            except Exception as e:
                return False, f"Error removing {step_dir}: {e}"
        
        # Clean the last step
        files_removed, files_kept = clean_last_step(last_step)
        extras = []
        if logs_removed:
            extras.append("removed logs.tfevents")
        if git_removed:
            extras.append("removed git folder")
        extras_msg = ", " + ", ".join(extras) if extras else ""
        
        return True, f"Removed {removed_count} steps, kept {last_step.name} (cleaned {files_removed} files, kept {files_kept}{extras_msg})"
        
    except Exception as e:
        return False, f"Error processing {run_path}: {e}"


def find_and_strip_all_runs(base_path: Path) -> None:
    """
    Recursively find all runs and strip them.
    
    Args:
        base_path: Base directory to search for runs
    """
    runs_found = 0
    runs_processed = 0
    runs_failed = 0
    
    print(f"Searching for runs in: {base_path}")
    print("=" * 80)
    
    # Walk through all directories
    for root, dirs, files in os.walk(base_path):
        root_path = Path(root)
        
        # Check if this directory contains a 'steps' subdirectory
        if 'steps' in dirs:
            runs_found += 1
            print(f"\nProcessing run: {root_path.relative_to(base_path)}")
            
            success, message = strip_run(root_path)
            print(f"  → {message}")
            
            if success:
                runs_processed += 1
            else:
                runs_failed += 1
            
            # Don't descend into 'steps' directories
            dirs.remove('steps')
    
    print("\n" + "=" * 80)
    print(f"Summary:")
    print(f"  Total runs found: {runs_found}")
    print(f"  Successfully processed: {runs_processed}")
    print(f"  Failed: {runs_failed}")


if __name__ == "__main__":
    import sys
    
    # Get the base path from command line or use current directory's 'experiments'
    if len(sys.argv) > 1:
        base_path = Path(sys.argv[1])
    else:
        # Default to 'experiments' subdirectory
        base_path = Path(__file__).parent / "experiments"
    
    if not base_path.exists():
        print(f"Error: Path '{base_path}' does not exist")
        sys.exit(1)
    
    if not base_path.is_dir():
        print(f"Error: Path '{base_path}' is not a directory")
        sys.exit(1)
    
    print(f"Strip Script - Removing all steps except the last one from each run")
    print(f"Base path: {base_path.absolute()}")
    print()
    
    find_and_strip_all_runs(base_path)

