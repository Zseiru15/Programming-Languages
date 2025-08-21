#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

int main()
{

int n, i, l, s, m=0, M=0, Num, v[5];

cout<<"ingrese el tamaño del vector "<<endl;
cin>>n;
cout<<endl;

	for(i=1;i<=n;i++)
	{
		cout<<"ingrese la variable "<<i<<endl;
		cin>>Num;
		v[i]=Num;
	}

	for(l=1;l<=n;l++)
	{
		if(v[l]>M)
		{
		M=v[l];
		m=M;
		}
	}
	
	for(s=1;s<=n;s++)
	{
		if(v[s]<m)
		{
		m=v[s];
		}
	}
	
	cout<<"El mayor es: "<<M<<endl;
	cout<<"El menor es: "<<m<<endl;

}
