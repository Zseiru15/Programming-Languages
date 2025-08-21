#include <iostream>
#include <vector>

using namespace std;

int main() {
	system("Color 0A");
    vector<double> numeros(10);
    double suma = 0.0;

    // Leer los números desde el teclado y calcular la suma
    for (int i = 0; i < numeros.size(); i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    // Calcular el promedio
    double promedio = suma / numeros.size();

    // Contadores para los elementos mayores y menores/iguales al promedio
    int mayores = 0;
    int menores_o_iguales = 0;

    // Verificar cada elemento del vector y contar los mayores/menores
    for (int i = 0; i < numeros.size(); i++) {
        if (numeros[i] > promedio) {
            mayores++;
        } else {
            menores_o_iguales++;
        }
    }

    // Mostrar resultados
    cout << "El promedio es: " << promedio << std::endl;
    cout << "Cantidad de elementos mayores al promedio: " << mayores << std::endl;
    cout << "Cantidad de elementos menores o iguales al promedio: " << menores_o_iguales << std::endl;

    return 0;
}
