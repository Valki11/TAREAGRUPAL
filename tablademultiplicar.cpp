#include <iostream>
#include <sstream>
using namespace std;
int main() {
int num1, num2;
cout << "\n*Ingrese numeros no mayores a 3 decimales*\n ";
std::cout << "Ingrese el primer numero: "; 
std::cin >> num1;
std::cout << "Ingrese el segundo numero: ";
std::cin >> num2;
cout << "\t"<<num1<<"\n";
cout << "\t"<<num2<<"\n";
cout <<"X --------------\n";
 int unidad = num2 % 10;
 int decena = (num2 / 10) % 10;
 int centena = (num2 / 100) % 10;
 if(unidad>0){
 	cout << "\t"<<unidad*num1<<"\n";
 }
 if(decena>0){
 	cout << "\t"<<decena*num1<<"\n";
	 }
 if(centena>0){
 	cout << "\t"<<centena*num1<<"\n";
}
 	cout << "+ ------------------\n";
    cout << num1*num2;
return 0;
}

