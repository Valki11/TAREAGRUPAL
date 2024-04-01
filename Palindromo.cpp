#include <iostream>
using namespace std;
int main() {
	
 int Longitud = 0;
 string Palabra;
 int Contador;
 int Iterador=0;
 string PalabraInv="";
 
 cout<<"Ingrese la palabra por favor: ";
 cin>>Palabra;
 
 Longitud = Palabra.length();
 char Invertido[Longitud]; 

 for(Contador = (Longitud - 1); Contador >= 0 ; Contador--){
     Invertido[Iterador]=Palabra[Contador];
     Iterador++;
 }

 for(int E = 0; E <= (Longitud - 1); E++){
 	PalabraInv+=Invertido[E];
 }
 
 if(Palabra==PalabraInv){
    cout << "Es un palindromo ";
 }else{
 	cout << "No es un palindromo";
 }
 
 return 0;
}
