#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float Cateto1,Cateto2,Hipotenusa=0;
	cout<<"Ingrese cateto 1: "; 
	cin>>Cateto1;
	cout<<"Ingrese cateto 2: ";
	cin>>Cateto2;
	
	Hipotenusa=sqrt((Cateto1*Cateto1)+(Cateto2*Cateto2));
	
	cout<<"\nla hipotenusa es: "<<Hipotenusa;
	
return 0;
}
