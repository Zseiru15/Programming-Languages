#include <iostream>
#include <vector>
using namespace std;

//#1 Función auxiliar para imprimir el estado del arreglo con un mensaje
void imprimirEstado(const vector<int>& arreglo, const string& mensaje) {
    cout << mensaje << ": ";
    for (size_t i = 0; i < arreglo.size(); ++i) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

//#3 
void merge(vector<int>& arreglo, int inicio, int mitad, int final) {
	//Se inicializan las variables i, j, y k las cuales nos ayudaran en los ciclos
	int i, j, k;
	//Almacena el numero de elementos en la parte izquierda
    int elementosIzq = mitad - inicio + 1;
    //Almacena el numero de elementos en la parte derecha
    int elementosDer = final - mitad;

	//Se crean los 2 vectores que almacenaran el lado Izq y el Der, y se le indica
	//La cantidad de elementos que tendra antes de asignarle los valores
    vector<int> izquierda(elementosIzq);
    vector<int> derecha(elementosDer);

	//Estos 2 ciclos "For" recorren ambos ciclo Izq y Der, para asignar los valores
	//Que le corresponde al vector que se quiere ordenar
    for (int i = 0; i < elementosIzq; ++i) {
        izquierda[i] = arreglo[inicio + i];
    }
    for (int j = 0; j < elementosDer; ++j) {
        derecha[j] = arreglo[mitad + 1 + j];
    }
	
	//Se igualan las variables (k = inicio es por el parametro que se pasa en la funcion)
    i = 0; j = 0; k = inicio;

	//El "while" se encargara de mezclar los valores en los vectores Izq y Der en el
	//Vector que se pasa como referencia en la funcion
    while (i < elementosIzq && j < elementosDer) {
    	//Para que se cumpla este ciclo, la variable j, e i deben ser menores al vector Izq
    	//De forma respectiva, en caso de que el elemento del vector Izq sea menor que el Der
    	//La posicion "K" le correspondera al vector Izq en la posicion i
        if (izquierda[i] <= derecha[j]) {
            arreglo[k] = izquierda[i];
            ++i;
        } //en caso contrario el arreglo en la posicion "K" le correspondera al vector Der
        //En la posicion j, aumentan los valores j, e i en ambos casos
		else {
            arreglo[k] = derecha[j];
            ++j;
        }
        //Al final del bloque se le aumenta el valor a "K"
        ++k;
    }
	//Estos 2 ciclos "while" vaciaran los arreglos Izq y Der en caso de ser necesario
	//Estos se ejecutaran siempre y cuando los indices de i o j sean menores que el numero
	//De los elementos en los vectores, entre estos ciclos tambien se le aumentan los valores
	//a los indices i, j, y a la variable k
    while (i < elementosIzq) {
        arreglo[k] = izquierda[i];
        ++i;
        ++k;
    }

    while (j < elementosDer) {
        arreglo[k] = derecha[j];
        ++j;
        ++k;
    }
    imprimirEstado(arreglo, "Despues de MergeSort");
    cout << endl;
}

//#2 Recibe como referencia el inicio y el final, siendo una funcion recursiva
void mergeSort(vector<int>& arreglo, int inicio, int final) {
	//Se considera si el inicio es igual que el final (de ser haci
	//se seguira haciendo llamadas recursivas)
    if (inicio < final) {
    	//la variable mitad indica hasta don de debera ir el arreglo
        int mitad = inicio + (final - inicio) / 2;
        //Se llama a esa funcion "mitad" para dividir las partes izquierdas recursivamente
        mergeSort(arreglo, inicio, mitad);
        imprimirEstado(arreglo, "Antes de ordenar mitad izquierda");
        //Se llama a esa funcion "mitad" para dividir las partes derechas recursivamente
        mergeSort(arreglo, mitad + 1, final);
        imprimirEstado(arreglo, "Antes de ordenar mitad derecha");
        //Se llama la funcion "marge" la cual mostrara el arreglo antes del SergeSort
        merge(arreglo, inicio, mitad, final);
        imprimirEstado(arreglo, "Antes de MergeSort");
    }
}

//#4 Se imprime en pantalla la posicion del vector
void imprimirArreglo(const vector<int>& arreglo) {
	//Se muestran los elementos antes y despues de llamar la funcion "MergeSort"
	//La cual se compone de un solo "For" que se detendra hasta que el indice "i"
	//Alcance el tamaño del vector
    for (size_t i = 0; i < arreglo.size(); ++i) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

//#5 Se crea el vector el cual se va ordenar 
int main() {
    int n;
    cout << "Ingrese el número de elementos del arreglo: ";
    cin >> n;
    //Este arreglo se compone de x valores enteros
    vector<int> prueba(n);
    for (int i = 0; i < n; ++i) {
    	cout << "Ingrese el elemento "<<i+1<<" del arreglo: ";
        cin >> prueba[i];
    }
	//Indice de inicio
	cout << "Estado inicial del arreglo: ";
    
	//Imprecion del arreglo original
    imprimirArreglo(prueba);
    cout << endl;

    //Indice final
    mergeSort(prueba, 0, prueba.size() - 1);
    cout << endl;
    cout << "Arreglo final ordenado: ";
    //Imprecion del arreglo ya ordenado
    imprimirArreglo(prueba);
    return 0;
}
