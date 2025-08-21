#include <iostream>
using namespace std;

int sumaNaturales(int n) {
    int suma = 0;
    for (int i = 1; i <= n; ++i) {
        suma += i;
    }
    return suma;
}
int main() {
    int N;
    cout << "Ingrese el valor de N: ";
    cin >> N;
    int resultado = sumaNaturales(N);
    cout << "La suma de los primeros " << N << " numeros naturales es: " << resultado << endl;
    return 0;
}
