#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<cmath>

using namespace std;

int main() 
{
    system("Color 0A");
    int n, num, i, j, k, l;
    double v[n];
    
    cout<<"Escriba el tamaño del vector: ";
    cin>>n;
    cout<<endl;
    
    cout<<"Escriba los numeros de vector: "<<endl;
    for (i=0;i<n;i++)
    {
        cin>>num;
        v[i]=num;
    }
    
    int aux=0;
        for (j=0;j<n;j++)
    {
        
        for (k=0;k<n;k++)
        {
            if (v[k]<v[k+1])
            {
               aux=v[k];
               v[k]=v[k+1];
               v[k+1]=aux;
            }
        }
    }

    cout<<"Los numeros de mayor a menor son: ";
    for (l=0;l<n;l++)
    {
        cout<<v[l]<<" ";
    }
    
}

