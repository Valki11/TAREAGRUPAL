//conversión de distancias y masas
#include<iostream>
using namespace std;
main(){
	int opcion;
	float km=0, mts=0, lb=0, mll=0, plg=0, kg=0, total=0;
	
	cout<<"1 - Kilometros a Millas"<<endl;
	cout<<"2 - Metros a Pulgadas"<<endl;
	cout<<"3 - Libras a Kilogramos"<<endl;
	cout<<"4 - Millas a Kilometros"<<endl;
	cout<<"5 - Pulgadas a Metros"<<endl;
	cout<<"6 - Kilogramos a Libras"<<endl;
	cout<<"Ingresa la opción que desea realizar: "; cin>>opcion;
	cout<<"-----------------------------------------"<<endl;
	
	switch(opcion){
        case 1: cout<<"Digita el total de kilometros a convertir: "; cin>>km;
                total=km*0.6214;
                cout<<km<<" kilometros equivalen a: "<<total<<" millas "<<endl;
                break;
        case 2: cout<<"Digital el total de metros a convertir: "; cin>>mts;
                total=mts*39.3701;
                cout<<mts<<" metros equivalen a: "<<total<<" pulgadas "<<endl;
                break;
        case 3: cout<<"Digita el total de libras a convertir "; cin>>lb;
                total=lb*0.4536;
                cout<<lb<<" libras equivalen a: "<<total<<" kilogramos "<<endl;
                break;
        case 4: cout<<"Digita el total de millas a convertir: "; cin>>mll;
                total=mll*1.60934;
                cout<<mll<<" millas equivalen a: "<<total<<" kilometros "<<endl;
                break; 
        case 5: cout<<"Digita el total de pulgadas a convertir: "; cin>>plg;
                total=plg*0.0254;
                cout<<plg<<" pulgadas equivalen a: "<<total<<" metros "<<endl;
                break;
        case 6: cout<<"Digita el total de kilogramos a convertir: "; cin>>kg;
                total=kg*2.20462;
                cout<<kg<<" kilogramos equivalen a: "<<total<<" libras "<<endl;
                break;

    }
}