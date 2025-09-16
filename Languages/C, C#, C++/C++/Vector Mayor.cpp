#include <stdio.h>
#include <conio.h>
#include <iostream> 

using namespace std;

int main(){

    int n;
    cout<< "ingrese la cantidad del vector: ";
    cin>>n;
    
    int v[n];
    int mayor=0;
    
    for (int i = 0; i < n; i++)
    {
    	cout<< "ingrese el numero en la posicion "<<i+1<<": ";
        cin>> v[i];
        if (v[i]>mayor){
        	mayor=v[i];
		}
    }
    cout<< "esta es el valor total: "<<mayor;

}
