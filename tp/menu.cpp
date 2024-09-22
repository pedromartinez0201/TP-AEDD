#include "menu.h"
#include"carga_medallas.h"
#include "mostrar_medalleros.h"
void menu_principal(){
	system("color 60");
	bool validacion1=false;
	char opcion;
	char salir;
	do{
		//Visualizacion de menu 
		cout << "Menu Principal"<<endl;
		cout << "================" << endl;
		cout << "1. Cargar Medallas" << endl;
		cout << "2. Mostrar Medallero" << endl;
		cout << "X. Salir" << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcion;
		cout<<endl;
		
		switch(opcion){
		case '1':{
			//Cargar Medallas
			cout<<"Carga de Medallas..."<<endl;
			cout<<endl;
			Sleep(1000);
			system("cls");
			cargar_medallas();
			
		}
		break;
		
		case '2':{
			// Mostrar Medallero
			cout<<"Mostrar Medalleros..."<<endl;
			cout<<endl;
			Sleep(1000);
			system("cls");
			mostrar_medalleros();
		}
		break;
		
		case 'X':{
			//Salida del Programa
			cout<<"Estas Seguro? (Y:Salir del programa N: Quedarse)"<<endl;
			cin>>salir;
			if(salir=='Y' or salir=='y'){
				validacion1=true;
				cout<<"NOS VEMOS PRONTO......."<<endl;
			}else if(salir=='N' or salir=='n'){
				system("cls");
			}
		}
		break;
		
		case 'x':{
			//Salida del Programa
			cout<<"Estas Seguro? (Y:Salir del programa N: Quedarse)"<<endl;
			cin>>salir;
			if(salir=='Y' or salir=='y'){
				validacion1=true;
				cout<<"NOS VEMOS PRONTO......."<<endl;
			}else if(salir=='N' or salir=='n'){
				system("cls");
			}
		}
		break;
			
		default:{
			//Invalido
			cout<<"Opcion invalida. Intente de nuevo"<<endl;
			cout<<endl;
			Sleep(1000);
			system("cls");
		}
		break;
		}
	} while(validacion1==false);
}

