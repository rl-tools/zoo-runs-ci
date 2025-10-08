
export async function init(canvas, options){
    // Simply saving the context for 2D environments
    return {
        ctx: canvas.getContext('2d')
    }
}
export async function render(ui_state, parameters, state, action) {
    const ctx = ui_state.ctx
    ctx.clearRect(0, 0, ctx.canvas.width, ctx.canvas.height);

    const centerX = ctx.canvas.width / 2;
    const centerY = ctx.canvas.height / 2;
    const canvasWidth = ctx.canvas.width/5;

    const pendulumLength1 = canvasWidth * parameters.PENDULUM_LENGTH_1;
    const pendulumLength2 = canvasWidth * parameters.PENDULUM_LENGTH_2;
    const bobRadius = canvasWidth * parameters.BOB_RADIUS;
    const pivotRadius = canvasWidth * parameters.PIVOT_RADIUS;

    // First pendulum (base to joint)
    const pendulumX1 = centerX + pendulumLength1 * Math.sin(state.theta1);
    const pendulumY1 = centerY + pendulumLength1 * Math.cos(state.theta1);

    ctx.beginPath();
    ctx.moveTo(centerX, centerY);
    ctx.lineTo(pendulumX1, pendulumY1);
    ctx.lineWidth = canvasWidth * parameters.ROD_WIDTH;
    ctx.strokeStyle = 'black';
    ctx.stroke();

    ctx.beginPath();
    ctx.arc(centerX, centerY, pivotRadius, 0, 2 * Math.PI);
    ctx.fillStyle = 'black';
    ctx.fill();
    ctx.stroke();

    // Second pendulum (joint to end)
    const pendulumX2 = pendulumX1 + pendulumLength2 * Math.sin(state.theta1 + state.theta2);
    const pendulumY2 = pendulumY1 + pendulumLength2 * Math.cos(state.theta1 + state.theta2);

    ctx.beginPath();
    ctx.moveTo(pendulumX1, pendulumY1);
    ctx.lineTo(pendulumX2, pendulumY2);
    ctx.lineWidth = canvasWidth * parameters.ROD_WIDTH;
    ctx.strokeStyle = 'black';
    ctx.stroke();

    ctx.lineWidth = 0.04 * canvasWidth
    ctx.beginPath();
    ctx.arc(pendulumX1, pendulumY1, pivotRadius, 0, 2 * Math.PI);
    ctx.fillStyle = 'black';
    ctx.fill();
    ctx.stroke();

    ctx.beginPath();
    ctx.arc(pendulumX2, pendulumY2, bobRadius, 0, 2 * Math.PI);
    ctx.fillStyle = '#7DB9B6';
    ctx.fill();
    ctx.stroke();

    // Draw torque arc
    const torqueMagnitude = -action[0];
    const arrowRadius = canvasWidth * 0.4;
    const magnitudeRadians = (Math.PI * 2 / 3 * torqueMagnitude);
    const startAngle =-Math.PI/2 + (torqueMagnitude > 0 ? 0 : magnitudeRadians) - state.theta1;
    const endAngle = -Math.PI/2 + (torqueMagnitude < 0 ? 0 : magnitudeRadians) - state.theta1;

    ctx.beginPath();
    ctx.arc(pendulumX1, pendulumY1, arrowRadius, startAngle, endAngle);
    ctx.strokeStyle = 'black';
    ctx.lineWidth = canvasWidth * 0.04;
    ctx.stroke();

    // Draw arrowhead
    const arrowAngle = torqueMagnitude > 0 ? endAngle : startAngle;
    const arrowHeadAngularOffset = torqueMagnitude * Math.PI / 180 * 20;
    const arrowX = pendulumX1 + arrowRadius * Math.cos(arrowAngle + arrowHeadAngularOffset);
    const arrowY = pendulumY1 + arrowRadius * Math.sin(arrowAngle + arrowHeadAngularOffset);

    const headlen = canvasWidth * 0.20 * Math.min(Math.abs(torqueMagnitude) * 2, 1);
    const angleOffset = Math.PI / 6;
    const rotationAngle = Math.PI / 2 + (torqueMagnitude > 0 ? 0 : Math.PI);

    ctx.beginPath();
    ctx.moveTo(arrowX, arrowY);
    ctx.lineTo(
        arrowX - headlen * Math.cos(arrowAngle + arrowHeadAngularOffset / 2 - angleOffset + rotationAngle),
        arrowY - headlen * Math.sin(arrowAngle + arrowHeadAngularOffset / 2 - angleOffset + rotationAngle)
    );
    ctx.lineTo(
        arrowX - headlen * Math.cos(arrowAngle + arrowHeadAngularOffset / 2 + angleOffset + rotationAngle),
        arrowY - headlen * Math.sin(arrowAngle + arrowHeadAngularOffset / 2 + angleOffset + rotationAngle)
    );
    ctx.lineTo(arrowX, arrowY);
    ctx.fillStyle = 'black';
    ctx.fill();
}
        