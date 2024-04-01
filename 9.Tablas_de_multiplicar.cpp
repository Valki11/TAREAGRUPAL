//tablas de multiplicar del 1 al 10
#include<iostream>
using namespace std;
main(){
	int tabla=0;
	
	cout<<"Ingrese que tabla desea visualizar: "; cin>>tabla;
	
	cout<<"Tabla del "<<tabla<<endl;
	cout<<"------------------"<<endl;
	
	for (int i; i<=10; i++){
	    int total=i*tabla;
		 cout<<tabla<<" x "<<i<<" = "<<total<<endl;	
	}
	
	
}