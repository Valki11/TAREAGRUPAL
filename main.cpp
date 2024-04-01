#include <iostream>
#include "Calculadora.cpp"

using namespace std;
int main() {
    int opc;
    do {
        cout<<("Menu  \n");
        cout<<("      #     |     Opcion" ); 
        cout<<("-----------------------------" ); 
        cout<<("      1     |   Problema 1" ); 
        cout<<("      2     |   Problema 2" );     
        cout<<("      3     |   Problema 3" );     
        cout<<("      4     |   Problema 4" );
        cout<<("      5     |   Problema 5" );
        cout<<("      6     |   Problema 6 " );  
        cout<<("      7     |   Problema 7 " );   
        cout<<("      8     |   Problema 8 " );   
        cout<<("      9     |   Problema 9 " );   
        cout<<("      10    |   Problema 10 " );   
        cout<<("      11    |   Salir " );  
        cout<<"\n Ingrese Opcion: "; 
    	cin>>opc;
    	switch(opc) {
    	case 1:
    		cout<<"\nIngreso a la opcion 1\n";
                	Calculadora.calculadora();
    		break;
    	/*case 2:
    		cout<<("\nIngreso a la opcion 2\n");
                Problema2.ejrcicio2();
    		break;
    	case 3:
    		cout<<("\nIngreso a la opcion 3\n");
                Problema3.ejrcicio3();
    		break;
    	case 4:
    		cout<<("\nIngreso a la opcion 4\n");
                Problema4.ejrcicio4();
    		break;
    	case 5:
    		cout<<("\nIngreso a la opcion 5\n");
                Problema5.ejrcicio5();
    		break;
    	case 6:
    		cout<<("\nIngreso a la opcion 6\n");
                Problema6.ejrcicio6();
                //SubMenu6 sm6 = new SubMenu6 ();
                //SubMenu6.ejrcicio6();
    		break;
    	case 7:
    		cout<<("\nIngreso a la opcion 7\n");
                Problema7.ejrcicio7();
    		break;
    	case 8:
    		cout<<("\nIngreso a la opcion 8\n");
                Problema8.ejrcicio8();
    		break;
    	case 9:
    		cout<<("\nIngreso a la opcion 9\n");
                Problema9.ejrcicio9();
    		break;
    	case 10:
    		cout<<("\nIngreso a la opcion 10\n");
                Problema10.ejrcicio10();
    		break;
    	}*/
    	cout<<"\nDesea salir o continuar (salir 11)\n";
    	cout<<"Continuar opcion 1 al 10 \n";
    }while (opc !=11);
      
    };

