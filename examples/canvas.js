export function canvasEnv(ctx) {
    return (memory) => ({
        fillRect: ctx.fillRect.bind(ctx),
        clearRect: ctx.clearRect.bind(ctx),
        strokeRect: ctx.strokeRect.bind(ctx),
        beginPath: ctx.beginPath.bind(ctx),
        closePath: ctx.closePath.bind(ctx),
        moveTo: ctx.moveTo.bind(ctx),
        lineTo: ctx.lineTo.bind(ctx),
        stroke: ctx.stroke.bind(ctx),
        fill: ctx.fill.bind(ctx),
        arc: ctx.arc.bind(ctx),
        arcTo: ctx.arcTo.bind(ctx),
        bezierCurveTo: ctx.bezierCurveTo.bind(ctx),
        quadraticCurveTo: ctx.quadraticCurveTo.bind(ctx),
        drawImage: ctx.drawImage.bind(ctx),
        createLinearGradient: ctx.createLinearGradient.bind(ctx),
        createRadialGradient: ctx.createRadialGradient.bind(ctx),
        createPattern: ctx.createPattern.bind(ctx),
        setLineWidth: (lineWidth) => {
            ctx.lineWidth = lineWidth;
        },
        setLineJoin: (lineJoin) => {
            ctx.lineJoin = memory.readCString(lineJoin);
        },
        setLineCap: (lineCap) => {
            ctx.lineCap = memory.readCString(lineCap);
        },
        setStrokeStyle: (strokeStyle) => {
            ctx.strokeStyle = memory.readCString(strokeStyle);
        },
        setFillStyle: (fillStyle) => {
            ctx.fillStyle = memory.readCString(fillStyle);
        },
        setGlobalAlpha: (alpha) => {
            ctx.globalAlpha = alpha;
        },
        setTransform: (a, b, c, d, e, f) => {
            ctx.setTransform(a, b, c, d, e, f);
        },
    });
}
