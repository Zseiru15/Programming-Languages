// |================================|
// |SNEYDER CAMILO ORDOÑEZ USCATEGUI|
// |================================|

// funcionesDeTareas.js
import fs from "fs";
import readline from "readline";

const RUTA_TAREAS = "./tareas.json";

// Función auxiliar para leer tareas
function leerTareas() {
  const data = fs.readFileSync(RUTA_TAREAS, "utf-8");
  return JSON.parse(data);
}

// Función auxiliar para guardar tareas
function guardarTareas(tareas) {
  fs.writeFileSync(RUTA_TAREAS, JSON.stringify(tareas, null, 2));
}

// === FUNCIONES PRINCIPALES ===

// Listar
function listar() {
  const tareas = leerTareas();
  console.log("|============================================|");
  console.log("|Bienvenido a tu aplicacion gestora de tareas|");
  console.log("|============================================|\n");
  tareas.forEach((tarea, i) => {
    console.log(`${i + 1}. ${tarea.titulo} - Estado: ${tarea.estado}`);
  });
}

// Agregar
function agregar() {
  const rl = readline.createInterface({ input: process.stdin, output: process.stdout });
  const tareas = leerTareas();
  rl.question("Escribe el título de la tarea: ", (titulo) => {
    const nuevaTarea = { titulo, estado: "pendiente" };
    tareas.push(nuevaTarea);
    guardarTareas(tareas);
    console.log("Tarea agregada exitosamente.");
    rl.close();
  });
}

// Actualizar
function actualizar() {
  const rl = readline.createInterface({ input: process.stdin, output: process.stdout });
  const tareas = leerTareas();

  rl.question("Escribe el título de la tarea a actualizar: ", (titulo) => {
    const tarea = tareas.find((t) => t.titulo === titulo);
    if (tarea) {
      rl.question("Escribe el nuevo estado (pendiente/en progreso/terminada): ", (estado) => {
        const estadosValidos = ["pendiente", "en progreso", "terminada"];
        if (!estadosValidos.includes(estado)) {
          console.log("Estado no válido. Usa: pendiente, en progreso o terminada.");
        } else {
          tarea.estado = estado;
          guardarTareas(tareas);
          console.log("Tarea actualizada exitosamente.");
        }
        rl.close();
      });
    } else {
      console.log("Tarea no encontrada.");
      rl.close();
    }
  });
}

// Eliminar
function eliminar() {
  const rl = readline.createInterface({ input: process.stdin, output: process.stdout });
  const tareas = leerTareas();

  rl.question("Escribe el título de la tarea a eliminar: ", (titulo) => {
    const index = tareas.findIndex((t) => t.titulo === titulo);
    if (index !== -1) {
      tareas.splice(index, 1);
      guardarTareas(tareas);
      console.log("Tarea eliminada exitosamente.");
    } else {
      console.log("Tarea no encontrada.");
    }
    rl.close();
  });
}

export default { listar, agregar, actualizar, eliminar };

// |================================|
// |SNEYDER CAMILO ORDOÑEZ USCATEGUI|
// |================================|