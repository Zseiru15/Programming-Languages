#include <iostream>
using namespace std;

void hanoi(int n, char source, char auxiliar, char target) {
    if (n == 1) {
        cout << "Mover disco " << n << " de " << source << " a " << target << endl;
    } else {
        hanoi(n - 1, source, target, auxiliar);
        cout << "Mover disco " << n << " de " << source << " a " << target << endl;
        hanoi(n - 1, auxiliar, source, target);
    }
}

int main() {
    int n = 4; // Número de discos
    hanoi(n, 'A', 'C', 'B'); // Inicialización A, B y C son los nombres de los postes
}

