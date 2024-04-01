#include <iostream>
#include <windows.h>
using namespace std;
//utilizamos la estructura repetitiva FOR, donde solicitamos un número no mayor a 60 y no menor a uno,donde realice un conteo regresivo.
int main()
{
int number;
int i;
cout << "BIENVENID@, SALUDOS" << endl;
cout << "ingrese un numero del 1 al 60: " <<"\n";
cin >> number;
Sleep(2000);
for(i=number-1; i>=0; i--)
if (number >= 1 && number <=60)
{ cout<<i<< endl;}
cout << "HASTA LA PROXIMAAA" << endl;
return 0;
}
