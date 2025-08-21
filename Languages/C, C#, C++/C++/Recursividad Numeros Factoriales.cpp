#include <iostream>
using namespace std;

long factorial(int n) {
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Introduce un numero entero: ";
    cin >> num;
    cout << "El factorial de " << num << " es: " << factorial(num) << endl;
    return 0;
}

