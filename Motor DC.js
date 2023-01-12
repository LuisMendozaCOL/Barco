var jf = require("johnny-five")
var board = new jf.Board({ port: "COM7" });
document.addEventListener("keyup", dibujarTeclado);

node

board.on("ready", prender);

var teclas = {
    UP: 38,
    DOWN: 40,
    LEFT: 37,
    RIGHT: 39
};

function prender() {
    var motor = new jf.Motor([11, 12, 13])
    // Forward at half speed
    console.log("Iniciando")
    motor.start(255);
}

function ctrlVelocidad(evento) {
    movimiento = 10
    switch (evento.keyCode) {
        case teclas.LEFT:
            dibujarLinea(color, x, y, x - movimiento, y, lienzo)
            x -= movimiento
            break;
        case teclas.UP:
            dibujarLinea(color, x, y, x, y - movimiento, lienzo)
            y -= movimiento
            break;
        case teclas.DOWN:
            dibujarLinea(color, x, y, x, y + movimiento, lienzo)
            y += movimiento
            break;
        case teclas.RIGHT:
            dibujarLinea(color, x, y, x + movimiento, y, lienzo)
            x += movimiento
            break;
        default:
            console.log("Otra tecla")
    }
}