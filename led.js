var jf = require("johnny-five")
var circuito = new jf.Board({ port: "COM7" });

circuito.on("ready", prender);

function prender() {
    // var led_amarillo = new jf.Led(13);
    var led_azul = new jf.Led(13);
    // led_amarillo.blink(25);
    led_azul.blink(5);
    console.log("Hola, bienvenido a Platzi")
}
