#include <stdio.h>
#include <conio.h>
#include <iostream> 

using namespace std;

int main(){

    int n;
    cout<< "ingrese la cantidad del vector: ";
    cin>>n;
    
    int v[n];
    int sum=0;
    
    for (int i = 0; i < n; i++)
    {
    	cout<< "ingrese el numero en la posicion "<<i+1<<": ";
        cin>> v[i];
        sum+=v[i];
    }
    cout<< "esta es el valor total: "<<sum;

}
