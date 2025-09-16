// |================================|
// |SNEYDER CAMILO ORDOÑEZ USCATEGUI|
// |================================|

// app.js
import funcionesDeTareas from "./funcionesDeTareas.js";

const accion = process.argv[2]; // argumento desde la terminal

switch (accion) {
  case "listar":
    funcionesDeTareas.listar();
    break;
  case "agregar":
    funcionesDeTareas.agregar();
    break;
  case "actualizar":
    funcionesDeTareas.actualizar();
    break;
  case "eliminar":
    funcionesDeTareas.eliminar();
    break;
  default:
    console.log(
      "Acción no válida. Usa 'node app.js listar', 'node app.js agregar', 'node app.js actualizar' o 'node app.js eliminar'."
    );
    break;
}

// import fs from "fs";
// import readline from "readline"; // Importa el modulo readline para leer entradas del usuario en la consola
// const data = fs.readFileSync("./tareas.json", "utf-8"); // Lee el archivo como texto
// const tareas = JSON.parse(data); // Convierte el texto a un objeto JavaScript

// // Crea una interfaz de lectura para la entrada y salida estándar
// const rl = readline.createInterface({
//   input: process.stdin,
//   output: process.stdout,
// });

// const accion = process.argv[2]; // Obtiene el tercer argumento de la línea de comandos

// switch (accion) {
//   case "listar":
//     // Muestra un mensaje de bienvenida y las tareas actuales
//     console.log("|============================================|");
//     console.log("|Bienvenido a tu aplicacion gestora de tareas|");
//     console.log("|============================================|\n");
//     tareas.forEach((tarea, i) => {
//       console.log(`${i + 1}. ${tarea.titulo} - Estado: ${tarea.estado}`);
//     });
//     break;

//   case "agregar":
//     rl.question("Escribe la titulo de la tarea: ", (titulo) => {
//       const nuevaTarea = { titulo, estado: "pendiente" };
//       tareas.push(nuevaTarea);
//       fs.writeFileSync("./tareas.json", JSON.stringify(tareas, null, 2));
//       console.log("Tarea agregada exitosamente.");
//       rl.close();
//     });
//     break;

//   case "actualizar":
//     rl.question(
//       "Escribe la titulo de la tarea a actualizar: ",
//       (titulo) => {
//         const tarea = tareas.find((t) => t.titulo === titulo);
//         if (tarea) {
//           rl.question(
//             "Escribe el nuevo estado (pendiente/en progreso/terminada): ",
//             (estado) => {
//               const estadosValidos = ["pendiente", "en progreso", "terminada"];
//               if (!estadosValidos.includes(estado)) {
//                 console.log(
//                   "Estado no válido. Usa: pendiente, en progreso o terminada."
//                 );
//               } else {
//                 tarea.estado = estado;
//                 fs.writeFileSync(
//                   "./tareas.json",
//                   JSON.stringify(tareas, null, 2)
//                 );
//                 console.log("Tarea actualizada exitosamente.");
//               }
//               rl.close();
//             }
//           );
//         } else {
//           console.log("Tarea no encontrada.");
//           rl.close();
//         }
//       }
//     );
//     break;

//   case "eliminar":
//     rl.question(
//       "Escribe la titulo de la tarea a eliminar: ",
//       (titulo) => {
//         const index = tareas.findIndex((t) => t.titulo === titulo);
//         if (index !== -1) {
//           tareas.splice(index, 1);
//           fs.writeFileSync("./tareas.json", JSON.stringify(tareas, null, 2));
//           console.log("Tarea eliminada exitosamente.");
//           rl.close();
//         } else {
//           console.log("Tarea no encontrada.");
//           rl.close();
//         }
//       }
//     );
//     break;

//   default:
//     console.log(
//       "Accion no valida. Usa 'node app.js listar', 'node app.js agregar', 'node app.js actualizar' o 'node app.js eliminar'."
//     );
//     rl.close();
//     break;
// }
// // Cierra la interfaz de lectura si no se ha cerrado ya
// rl.on("close", () => {
//   process.exit(0);
// });

// |================================|
// |SNEYDER CAMILO ORDOÑEZ USCATEGUI|
// |================================|