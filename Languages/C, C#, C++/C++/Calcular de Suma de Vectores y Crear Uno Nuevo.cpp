#include <iostream>
#include <vector>

using namespace std;

int main() {
	system("Color 0A");
    int M; // Tamaño de los arreglos A, B y C
    cout << "Ingrese el tamano de los arreglos: ";
    cin >> M;

    vector<int> A(M);
    vector<int> B(M);
    vector<int> C(M);
    vector<int> NUEVO(3);

    // Leer los elementos de los arreglos A, B y C desde el teclado
    cout << "Ingrese los elementos del arreglo A:" << std::endl;
    for (int i = 0; i < M; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> A[i];
    }

    cout << "Ingrese los elementos del arreglo B:" << std::endl;
    for (int i = 0; i < M; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> B[i];
    }

    cout << "Ingrese los elementos del arreglo C:" << std::endl;
    for (int i = 0; i < M; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> C[i];
    }

    // Calcular la suma de los elementos y almacenarla en el arreglo NUEVO
    for (int i = 0; i < M; i++) {
        NUEVO[0] += A[i];
        NUEVO[1] += B[i];
        NUEVO[2] += C[i];
    }

    // Mostrar el arreglo NUEVO
    cout << "El arreglo NUEVO es: ";
    for (int i = 0; i < 3; i++) {
        cout << NUEVO[i] << " ";
    }
    cout << std::endl;

    return 0;
}
