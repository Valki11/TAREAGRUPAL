#include <iostream>

using namespace std;
int main()
{
int Multiplicacion, Numero, a=1;

cout<<"Ingresa el numero de la tabla: ";

cin>>Numero;

cout<<"La tabla del "<<Numero<<" es:"<<endl;
 do{
 	
Multiplicacion=Numero*a;

cout<<Numero <<" x "<< a<<" "<< multiplicacion <<endl;

a++;

}

while(a<=12);

}
