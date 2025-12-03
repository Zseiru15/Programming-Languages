#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main() {
    Nodo* cabeza = NULL;
    Nodo* nuevo;
    int valor;

    // Insertar 3 elementos al inicio
    for(int i=0; i<3; i++){
        cout << "Ingrese un valor: ";
        cin >> valor;

        nuevo = new Nodo();
        nuevo->dato = valor;
        nuevo->siguiente = cabeza;
        cabeza = nuevo;
    }

    // Mostrar lista
    cout << "\nContenido de la lista: ";
    Nodo* actual = cabeza;
    while(actual != NULL){
        cout << actual->dato << " -> ";
        actual = actual->siguiente;
    }
    cout << "NULL";
    return 0;
}

