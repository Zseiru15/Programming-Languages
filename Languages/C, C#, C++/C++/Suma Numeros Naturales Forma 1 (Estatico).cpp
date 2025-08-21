#include <iostream>
using namespace std;

int sumaIterativa(int numero) {
    int res = 0, vres;
    for (int i = 1; i <= numero; i++) {
        res += i;
    }
    return res;
}

int main() {
    int n = 10;
    int resultado = sumaIterativa(n);
    cout << "Resultado: " << resultado << endl;
    return 0;
}

