#include <iostream>
using namespace std;
/*Código que muestre los tamaños de cada tipo de dato*/
int main()
{
int
arr[] = { 6, 9, 2, 7, 3, 88,1, 19, 69, 22, 17,15,29,30,56,98,90,4,1};
cout <<
"NUMEROS DE ELEMENTOS DEL CONJUNTO: "
<<(sizeof(arr) / sizeof(arr[0]));
return
0;
}

