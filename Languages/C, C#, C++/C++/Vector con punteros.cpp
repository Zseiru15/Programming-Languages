#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{int x[2], i ;
x[0]=3;
x[1]=4;
for (i = 0; i<2; i++)
{
cout<<"x[i]= "<<x[i]<<"\n";
cout<<"*(x+i)= "<<*(x+i)<<"\n";
cout<<"&x[i]= "<<&x[i] <<"\n" ;
cout<<"(x+i)= "<< (x+i) <<"\n";
}
getch();
} 
