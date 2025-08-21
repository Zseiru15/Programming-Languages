

#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main (){


int m=0,men=0, num, n, i, v[5], j, k;

cout<<"INGRESE TAMAÑO DEL VECTOR \n";
cin>>n;

for(i=1;i<=n;i++)

{
	cin>>num;
	v[i]=num;
	
}


for(j=1;j<=n;j++)
{
	if(v[j]>m)
	{
		
		m=v[j];
		men=m;
		
	}
}


for(k=1;k<=n;k++)
{
	if(v[k]<men)
	{
		
		men=v[k];
		
	}	
	
}

cout<<"\n EL MAYOR ES:"<<m;
cout<<"\n EL MENOR ES:"<<men;

}



















































