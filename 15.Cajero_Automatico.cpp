//Cajero
#include<iostream>
using namespace std;
int main(){
	int transacciones=0, pin=1234, pintc=0, totalMone=1500, totalAho=1750, cantidad=0, opcion=0, e=0;
	char insertar, insertaar;
	do{
	system("cls");
	cout<<"                     Cajero B5                  "<<endl;
	cout<<"Insertar tarjeta (S/N): "; cin>>insertar;
	if (insertar == 'S' || insertar == 's'){
		system("cls");
	   cout<<"Ingrese Pin: "; cin>>pintc;
	   if(pin == pintc){
	   	system("cls");
	   	cout<<"1 - Retiro de Dinero                    2 - Consulta de saldo"<<endl;
	    cout<<"3 - Cambio de Pin                       4 - Activacion de Tarjeta"<<endl;
	    cout<<"5 - Pago de servicios                                            "<<endl;
	    cout<<"Que transacción desea realizar usted: "; cin>>transacciones;
	    system("cls");
	    switch(transacciones){
	    	case 1:  
			cout<<" 1 - Cuenta Monetaria       2 - Cuenta de Ahorro "<<endl;
			cout<<" De que cuenta desea retirar: ";
	    	cin>>opcion;
	    	system("cls");
	    	switch(opcion){
	    		case 1: 
				        cout<<" 1 - Q100.00       2 - Q200.00"<<endl;
	    		        cout<<" 3 - Q500.00       4 - Q1000.00"<<endl;
	    		        cout<<" 5 - Q2000.00      6 - otra cantidad"<<endl;
	    		        cout<<" Elija una opción: ";
	    		        cin>>cantidad;
	    		        system("cls");
	    		        switch(cantidad){
	    		        case 1:	cout<<"Retiro con exito, cuente su dinero: ";
	    		        	    totalMone=totalMone-100;
	    		        	    break;
	    		        case 2:	cout<<"Retiro con exito, cuente su dinero: ";
	    		        	    totalMone=totalMone-200;
	    		        	    break;
	    		        case 3:	cout<<"Retiro con exito, cuente su dinero: ";
	    		        	    totalMone=totalMone-500;
	    		        	    break;
						case 4:	cout<<"Retiro con exito, cuente su dinero: ";
	    		        	    totalMone=totalMone-1000;
	    		        	    break;
						case 5:	cout<<"Saldo Insuficiente ";
						        break;
						case 6: int i=0;
						        cout<<"Ingrese el saldo a retirar: "; cin>>i;
								if(i<=1500){
									cout<<"Retiro con exito, cuente su dinero"<<endl;
									totalMone=totalMone-i;
								}if(i>1500){
									cout<<" Saldo Insuficiente ";
								}
						}
						break;
	    		case 2:      
				        cout<<" 1 - Q100.00       2 - Q200.00"<<endl;
	    		        cout<<" 3 - Q500.00       4 - Q1000.00"<<endl;
	    		        cout<<" 5 - Q2000.00      6 - otra cantidad"<<endl;
	    		        cout<<" Elija una opción: ";
	    		        cin>>cantidad;
	    		        system("cls");
	    		        switch(cantidad){
	    		        case 1:	cout<<"Retiro con exito, cuente su dinero: ";
	    		        	    totalAho=totalAho-100;
	    		        	    break;
	    		        case 2:	cout<<"Retiro con exito, cuente su dinero: ";
	    		        	    totalAho=totalAho-200;
	    		        	    break;
	    		        case 3:	cout<<"Retiro con exito, cuente su dinero: ";
	    		        	    totalAho=totalAho-500;
	    		        	    break;
						case 4:	cout<<"Retiro con exito, cuente su dinero: ";
	    		        	    totalAho=totalAho-1000;
	    		        	    break;
						case 5:	cout<<"Saldo Insuficiente ";
						        break;
						case 6: int i=0;
						        cout<<"Ingrese el saldo a retirar: "; cin>>i;
								if(i<=1750){
									cout<<"Retiro con exito, cuente su dinero"<<endl;
									totalAho=totalAho-i;
								}if(i>1750){
									cout<<" Saldo Insuficiente ";
								}   
								break;
			                    }
			       
					        }
				break;	        
				case 2: 
				    cout<<"1 - Monetaria                 2 - Ahorro"<<endl;
				    cout<<"Que cuenta desea verificar ";
			        cin>>e;
					switch(e){
						case 1: cout<<"Q"<<totalMone<<endl; 
						break;
						case 2: cout<<"Q"<<totalAho<<endl;
						break;	        
					    }
					    break;
				case 3: cout<<"Ingrese el nuevo pin para su Tarjeta de Credito"<<endl;
				        cin>>pin;
						break;
				
				case 4: cout<<" Para activación de su tarjeta debe colocar el pin entregado: ";
				        cin>>pintc;
						if(pin==pintc){
							cout<<"Realice el cambio de pin para activación de su Tarjeta de Credito: ";
							cin>>pin;
						}if(pin!=pintc){
							cout<<"Tarjeta bloqueada";
						}			    
						break;
				case 5: cout<<"Aun no cuenta con facturas pendientes";	
				        break;	
				    }
				         
				}
	   
	   else{
	   	cout<<"Pin incorrecto"<<endl;
	   	break;
	   }
	}else{
		system("cls");
		cout<<"No puede realizar ninguna transaccion ";
		break;
	}
	  system("cls");
      cout<<"Desea realizar otra transacción(S/N): ";
	  cin>>insertaar;	}
		 while(insertaar == 's'|| insertaar == 'S');
       
       system("cls");
       cout<<"Gracias por el uso";
	}
	 

