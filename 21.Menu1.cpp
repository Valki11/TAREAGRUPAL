//Menu
#include<iostream>
#include<fstream>
using namespace std;

	
	void abrircodigo(int opcion){
		ifstream archivo;
		switch (opcion){
			case 1:
				archivo.open("1.Calculadora.cpp");
				break;
		    case 3:
				archivo.open("3.Conversion_masas_y_distancias.cpp");
				break;
			case 5:
				archivo.open("5.Arabigos_a_romanos.cpp");
				break;
			case 7:
				archivo.open("7.Numeros_con_decimal_a_letras.cpp");
				break;
			case 9:
				archivo.open("9.Tablas_de_multiplicar.cpp");
				break;
			case 11:
				archivo.open("11.Decimales_a_binarios.cpp");
				break;
			case 13:
				archivo.open("13.Figuras_Geometricas.cpp");
				break;
			case 15:
				archivo.open("15.Cajero_Automatico.cpp");
				break;
						
		}
		if (!archivo){
			cout<<" No se pudo abrir archivo "<<endl;
			return;
		}
		string linea;
		while (getline(archivo, linea)){
			cout<< linea<< endl;
		}
		archivo.close();
	}
	int main(){
		int opcion;
		cout<<" Seleccione una opción: ";
		cin>>opcion;
			abrircodigo(opcion);
			return 0;
	}
	
	
	
	
	
	
