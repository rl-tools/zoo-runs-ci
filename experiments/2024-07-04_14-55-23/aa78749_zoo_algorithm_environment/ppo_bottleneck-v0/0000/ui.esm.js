
export async function init(canvas, parameters, options){
    // Simply saving the context for 2D environments
    return {
        ctx: canvas.getContext('2d')
    }
}
export async function render(ui_state, parameters, state, action) {
    const ctx = ui_state.ctx
    ctx.clearRect(0, 0, ctx.canvas.width, ctx.canvas.height);
    const canvasWidth = ctx.canvas.width;
    const canvasHeight = ctx.canvas.height;
    const scaleX = canvasWidth / parameters.ARENA_WIDTH;
    const scaleY = canvasHeight / parameters.ARENA_HEIGHT;
    console.assert(scaleX == scaleY);


    // Draw large, gray arrow in the background
    const arrowStartX = canvasWidth / 5;
    const arrowEndX = 4 * canvasWidth / 5;
    const arrowY = canvasHeight / 2;
    const arrowThickness = canvasHeight / 10;
    const arrowHeadLength = arrowThickness * 2.0;
    const arrowHeadWidth = arrowThickness * 3;
    const arrowColor = '#f3f3f3'
    ctx.beginPath();
    ctx.moveTo(arrowStartX, arrowY);
    ctx.lineTo(arrowEndX - arrowHeadLength, arrowY);
    ctx.strokeStyle = arrowColor;
    ctx.lineWidth = arrowThickness;
    ctx.stroke();
    ctx.beginPath();
    ctx.moveTo(arrowEndX, arrowY);
    ctx.lineTo(arrowEndX - arrowHeadLength, arrowY - arrowHeadWidth / 2);
    ctx.lineTo(arrowEndX - arrowHeadLength, arrowY + arrowHeadWidth / 2);
    ctx.closePath();
    ctx.fillStyle = arrowColor;
    ctx.fill();


    // Draw the bottleneck barrier
    const barrierX = (parameters.ARENA_WIDTH / 2 - parameters.BARRIER_WIDTH / 2) * scaleX;
    const barrierWidth = parameters.BARRIER_WIDTH * scaleX;
    const bottleneckTopY = (parameters.BOTTLENECK_POSITION - parameters.BOTTLENECK_WIDTH / 2) * scaleY;
    const bottleneckBottomY = (parameters.BOTTLENECK_POSITION + parameters.BOTTLENECK_WIDTH / 2) * scaleY;
    ctx.fillStyle = 'gray';
    ctx.fillRect(barrierX, 0, barrierWidth, bottleneckTopY);
    ctx.fillRect(barrierX, bottleneckBottomY, barrierWidth, canvasHeight - bottleneckBottomY);

    const agentRadius = parameters.AGENT_DIAMETER * scaleX / 2;

    // Draw agents and their actions
    for (let i = 0; i < parameters.N_AGENTS; i++) {
        const agent = state.agent_states[i];
        const posX = agent.position[0] * scaleX;
        const posY = agent.position[1] * scaleY;
        const orientation = agent.orientation;

        // Draw lidar
        if(!agent.dead){
            for (let lidar_i = 0; lidar_i < agent.lidar.length; lidar_i++) {
                const lidar = agent.lidar[lidar_i];
                if (lidar.intersects) {
                    ctx.beginPath();
                    ctx.moveTo(posX, posY);
                    const lidarEndX = lidar.point[0] * scaleX;
                    const lidarEndY = lidar.point[1] * scaleY;
                    ctx.lineTo(lidarEndX, lidarEndY);
                    ctx.strokeStyle = 'orange';
                    ctx.lineWidth = 1/25*scaleX;
                    ctx.stroke();
                    ctx.beginPath();
                    const intersectionDotRadius = 3/25*scaleX;
                    ctx.arc(lidarEndX, lidarEndY, intersectionDotRadius, 0, 2 * Math.PI);
                    ctx.fillStyle = 'orange';
                    ctx.fill();
                }
            }
        }

        // Draw agent body
        ctx.beginPath();
        ctx.arc(posX, posY, agentRadius, 0, 2 * Math.PI);
        const primaryColor = '#7DB9B6';
        ctx.fillStyle = agent.dead ? 'grey' : primaryColor;
        ctx.fill();

        // Draw the agent ID
        const labelPosX = posX - agentRadius / 2 * Math.cos(orientation);
        const labelPosY = posY - agentRadius / 2 * Math.sin(orientation);
        ctx.save();
        ctx.translate(labelPosX, labelPosY);
        ctx.rotate(orientation + Math.PI / 2);
        const agentID = i.toString();
        const fontSize = 0.5 * agentRadius;
        ctx.font = `${fontSize}px Arial`;
        const textMetrics = ctx.measureText(agentID);
        const textWidth = textMetrics.width;
        const textHeight = fontSize;
        const circleRadius = Math.max(textWidth, textHeight) * 0.70;
        ctx.beginPath();
        ctx.arc(0, 0, circleRadius, 0, 2 * Math.PI);
        ctx.fillStyle = 'white';
        ctx.fill();
        ctx.strokeStyle = 'black';
        ctx.lineWidth = 0.5/25*scaleX;
        ctx.stroke();
        ctx.fillStyle = 'black';
        ctx.textAlign = 'center';
        ctx.textBaseline = 'middle';
        const textYOffset = fontSize * 0.1;
        ctx.fillText(agentID, 0, textYOffset);
        ctx.restore();

        // Draw agent orientation
        const endX = posX + agentRadius * Math.cos(orientation);
        const endY = posY + agentRadius * Math.sin(orientation);
        ctx.beginPath();
        ctx.moveTo(posX, posY);
        ctx.lineTo(endX, endY);
        ctx.strokeStyle = 'white';
        ctx.lineWidth = 2/25*scaleX;
        ctx.stroke();

        // Draw actions (acceleration vectors)
        const agent_action = [action[i*2 + 0], action[i*2 + 1]].map(action => Math.max(-1, Math.min(1, action)));

        // Linear acceleration in the direction of orientation
        const accelerationArrowColor = '#dc143c';
        if(!agent.dead){
            const accelMagnitude = agent_action[0]/2 * agentRadius;
            const accelX = accelMagnitude * Math.cos(orientation);
            const accelY = accelMagnitude * Math.sin(orientation);
            const offsetX = posX + agentRadius * 0.5 * Math.cos(orientation);
            const offsetY = posY + agentRadius * 0.5 * Math.sin(orientation);
            ctx.beginPath();
            ctx.moveTo(offsetX, offsetY);
            ctx.lineTo(offsetX + accelX, offsetY + accelY);

            ctx.strokeStyle = accelerationArrowColor;
            ctx.lineWidth = 2/25*scaleX;
            ctx.stroke();

            // Draw arrowhead for linear acceleration
            const angle = Math.atan2(accelY, accelX);
            const headlen = 0.5 * Math.min(0.5, Math.abs(agent_action[0])) * scaleX;
            ctx.beginPath();
            const prolong = 1.1
            ctx.moveTo(offsetX + accelX*prolong, offsetY + accelY*prolong);
            ctx.lineTo(offsetX + accelX*prolong - headlen * Math.cos(angle - Math.PI / 6), offsetY + accelY*prolong - headlen * Math.sin(angle - Math.PI / 6));
            ctx.moveTo(offsetX + accelX*prolong, offsetY + accelY*prolong);
            ctx.lineTo(offsetX + accelX*prolong - headlen * Math.cos(angle + Math.PI / 6), offsetY + accelY*prolong - headlen * Math.sin(angle + Math.PI / 6));
            ctx.lineWidth = 1/25*scaleX;
            ctx.stroke();
        }

        // Draw circular arrow for angular acceleration
        if(!agent.dead){
            const angularAccel = agent_action[1]; // Negative sign to match the canvas coordinate system
            const direction = Math.sign(angularAccel);
            const arrowRadius = agentRadius * 1.5;
            const arrowAngle = Math.PI / 3;
            const startAngle = orientation;
            const endAngle = orientation + arrowAngle * angularAccel;
            const arrowHeadSize = 10 * Math.abs(angularAccel);

            ctx.beginPath();
            ctx.arc(posX, posY, arrowRadius, startAngle, endAngle, angularAccel < 0);
            const torqueArrowColor = '#007bff'
            ctx.strokeStyle = torqueArrowColor;
            ctx.lineWidth = 2/25*scaleX;
            ctx.stroke();

            // Draw arrowhead for angular acceleration
            const arrowHeadAngle = endAngle - direction * arrowAngle * 0.10 - Math.PI / 2;
            const arrowHeadX = posX + arrowRadius * Math.cos(endAngle);
            const arrowHeadY = posY + arrowRadius * Math.sin(endAngle);

            ctx.beginPath();
            ctx.moveTo(arrowHeadX, arrowHeadY);
            ctx.lineTo(
                arrowHeadX + direction * arrowHeadSize * Math.cos(arrowHeadAngle - Math.PI / 6),
                arrowHeadY + direction * arrowHeadSize * Math.sin(arrowHeadAngle - Math.PI / 6)
            );
            ctx.moveTo(arrowHeadX, arrowHeadY);
            ctx.lineTo(
                arrowHeadX + direction * arrowHeadSize * Math.cos(arrowHeadAngle + Math.PI / 6),
                arrowHeadY + direction * arrowHeadSize * Math.sin(arrowHeadAngle + Math.PI / 6)
            );
            ctx.strokeStyle = torqueArrowColor;
            ctx.lineWidth = 2/25*scaleX;
            ctx.stroke();
        }

    }
}
        