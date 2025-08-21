#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    int v1[5], v2[5], suma[5];
    int menor = 0, mayor = 0, iguales = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el numero " << i + 1 << " del primer vector: ";
        cin >> v1[i];
        cout << endl;
        cout << "Ingrese el numero " << i + 1 << " del segundo vector: ";
        cin >> v2[i];
        cout << endl;
        suma[i] = v1[i] + v2[i];
        if (i == 0)
        { // Primer elemento
            menor = suma[i];
            mayor = suma[i];
        }
        else
        {
            if (suma[i] < menor)
                menor = suma[i];
            if (suma[i] > mayor)
                mayor = suma[i];
        }
        for (int j = 0; j < i; j++)
            if (suma[i] == suma[j])
                iguales++;
    }
    cout << "\nNumeros del primer vector: ";
    for (int i = 0; i < n; i++)
    {
        cout << v1[i] << " ";
    }
    cout << "\nNumeros del segundo vector: ";
    for (int i = 0; i < n; i++)
    {
        cout << v2[i] << " ";
    }
    cout << "\nLa suma de los vectores es: ";
    for (int i = 0; i < n; i++)
    {
        cout << suma[i] << " ";
    }
    cout << "\nEl menor es: " << menor;
    cout << "\nEl mayor es: " << mayor;
    cout << "\nCantidad de repetidos: " << iguales;
}
