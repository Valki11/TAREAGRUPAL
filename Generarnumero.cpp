 /*generamos un número aleatorio entre el 1 al 100. Que muestre el siguiente un  mensaje cuando
el número generado esté entre el 25 al 50 mostrar mensaje "Felicidades has ganado,
generaste el número (muestra el numero que se genero)
*/
#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;
int main()
{
srand(time(NULL));
////////////////////////////////////////////////////////
int number = (rand() %50) + 1;
cout << "el numero aleatorio es : " << number << endl;
if (number >= 25 && number <=50)
{
cout << "Felicidades has ganado, generaste el numero: "<< number << endl;
}
//////////////////////////////////////////////////////////////////////////
else
{
cout << "Lo siento, vuelve a intentar, generaste el numero: "<< number << endl;
}
return 0;
}
