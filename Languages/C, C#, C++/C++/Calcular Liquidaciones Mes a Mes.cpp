#include <iostream>

const int MAX_REGISTROS = 100; // Máximo número de registros diarios
const int NUM_DIAS = 30;       // Número de días en un mes
const int NUM_MESES = 12;      // Número de meses en un año
const int VALOR_HORA = 15000;  // Valor de la hora de un docente cátedra

struct RegistroDiario {
    int codigoDocente;
    std::string nombreDocente;
    int horasDiarias;
    int dia;
    int mes;
};

void realizarLiquidacion(RegistroDiario registros[], int numRegistros) {
    int liquidacion[NUM_MESES][MAX_REGISTROS] = {0}; // Matriz para la liquidación
    
    // Calcular la liquidación mes a mes
    for (int i = 0; i < numRegistros; i++) {
        int mes = registros[i].mes;
        int horasTrabajadas = registros[i].horasDiarias * registros[i].dia;
        int pago = horasTrabajadas * VALOR_HORA;
        
        liquidacion[mes - 1][registros[i].codigoDocente] += pago;
    }
    
    // Mostrar la liquidación de cada docente por mes
    for (int mes = 0; mes < NUM_MESES; mes++) {
        std::cout << "Liquidación para el mes " << mes + 1 << ":" << std::endl;
        for (int i = 0; i < MAX_REGISTROS; i++) {
            if (liquidacion[mes][i] > 0) {
                std::cout << "Docente " << i << ": $" << liquidacion[mes][i] << std::endl;
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    RegistroDiario registros[MAX_REGISTROS];
    int numRegistros;

    // Obtener los registros diarios del usuario
    std::cout << "Ingrese el número de registros diarios: ";
    std::cin >> numRegistros;

    for (int i = 0; i < numRegistros; i++) {
        std::cout << "Registro " << i + 1 << ":" << std::endl;
        std::cout << "Código del docente: ";
        std::cin >> registros[i].codigoDocente;
        std::cout << "Nombre del docente: ";
        std::cin >> registros[i].nombreDocente;
        std::cout << "Horas diarias: ";
        std::cin >> registros[i].horasDiarias;
        std::cout << "Día: ";
        std::cin >> registros[i].dia;
        std::cout << "Mes: ";
        std::cin >> registros[i].mes;
    }

    realizarLiquidacion(registros, numRegistros);

}

