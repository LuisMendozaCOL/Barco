var jf = require("johnny-five")
var circuito = new jf.Board({ port: "COM7" });

circuito.on("ready", prender);

var led_azul, motor, celda;
var turno = 0;

function prender() {
    // var led_amarillo = new jf.Led(13);

    var celda_config = { pin: "A8", freq: 50 };
    celda = new jf.Sensor(celda_config)

    led_azul = new jf.Led(13);
    led_azul.blink(1000)

    motor = new jf.Servo(9);
    motor.to(20);

    ondear()
}

function ondear() {
    console.log("Luz: " + celda.value);
    var luz = celda.value
    if (luz > 800) {
        if (turno) {
            turno = 0;
            motor.to(180)
        }
        else {
            turno = 1
            motor.to(150)
        }

    }

    else if (luz < 300) {
        motor.to(60)
    }
    else {
        motor.to(0)
    }
    setTimeout(ondear, 1000)
}
