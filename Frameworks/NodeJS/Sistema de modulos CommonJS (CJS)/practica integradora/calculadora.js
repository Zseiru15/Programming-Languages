import readline from "readline"; // Importa el modulo readline para leer entradas del usuario en la consola
import sumar from "./suma.js"; // Importa la funcion sumar desde el archivo suma.js
import resta from "./resta.js"; // Importa la funcion resta desde el archivo resta.js
import multi from "./multi.js"; // Importa la funcion multiplicacion desde el archivo multiplicacion.js
import dividir from "./division.js"; // Importa la funcion dividir desde el archivo division.js

// Crea una interfaz de lectura para la entrada y salida estándar
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

// Pregunta al usuario por la operación y los números, luego realiza el cálculo y muestra el resultado
rl.question(
  "Ingrese la operación (suma, resta, multi, division): ",
  (operacion) => {
    rl.question("Ingrese el primer número: ", (num1) => {
      rl.question("Ingrese el segundo número: ", (num2) => {
        num1 = parseFloat(num1); // Convierte la entrada del usuario a un número de punto flotante
        num2 = parseFloat(num2); // Convierte la entrada del usuario a un número de punto flotante
        let resultado;
        switch (operacion) { // Determina qué operación realizar según la entrada del usuario
          case "suma":
            resultado = sumar(num1, num2);
            break;
          case "resta":
            resultado = resta(num1, num2);
            break;
          case "multi":
            resultado = multi(num1, num2);
            break;
          case "division":
            resultado = dividir(num1, num2);
            break;
          default:
            resultado = "Operacion no valida";
        }
        console.log(`El resultado de la ${operacion} es: ${resultado}`); // Muestra el resultado en la consola
        rl.close(); // Cierra la interfaz de lectura
      });
    });
  }
);
