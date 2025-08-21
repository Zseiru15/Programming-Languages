#include <iostream>
using namespace std;

int sumaNaturales(int n)
{
    return n * (n + 1) / 2;
}
int main()
{
    int N;
    cout << "Ingrese el valor de N: ";
    cin >> N;
    int resultado = sumaNaturales(N);
    cout << "La suma de los primeros " << N << " numeros naturales es: " << resultado << endl;
}
