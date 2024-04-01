#include <iostream>
#include <cmath>
using namespace std;
int main(){
	char hexa[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int decimal;
	string Resultado = "";
    cout << "Ingrese un numero decimal porfavor: "; 
    cin>>decimal;
while (decimal>0){
	int Residuo=decimal%16;
	Resultado=hexa[Residuo]+Resultado;
	decimal/=16;
	}
	if (Resultado.empty()){
	 Resultado="0";
	}
	cout <<Resultado; 
  return 0;
}
