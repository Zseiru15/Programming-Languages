#include <iostream>
using namespace std;

int sumaNaturales(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sumaNaturales(n - 1);
    }
}

int main() {
    int N;
    cout << "Ingrese el valor de N: ";
    cin >> N;
    int resultado = sumaNaturales(N);
    cout << "La suma de los primeros " << N << " números naturales es: " << resultado << endl;
    return 0;
}
