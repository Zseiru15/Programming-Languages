#include <stdio.h> 
#include <conio.h> 
#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Ingrese el tamaño del vector: ";
    cin >> n;

    int numeros[n];  
    for (int i = 0; i < n; i++) {
    	cout << "Ingrese el numero " << i+1 << ":";
        cin >> numeros[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    
    cout << "Arreglo ordenado (menor a mayor): ";
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
