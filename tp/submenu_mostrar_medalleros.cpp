#include "mostrar_medalleros.h"
#include "menu.h"
void mostrar_medalleros(){
	char opcion;
	bool validacion=false;
	system("color 60");
	do {
		// Visualización de menú
		cout << "Menu Juegos" << endl;
		cout << "================" << endl;
		cout << "1. Medallero por Pais" << endl;
		cout << "2. Medallero por Deporte" << endl;
		cout << "3. Top Medallero"<<endl;
		cout << "X. Volver al menu principal" << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcion;
		cout<<endl;
		
		switch(opcion) {
		case '1': {
			cout<<"Funcionalidad en Desarrollo"<<endl;
			cout<<endl;
			Sleep(1000);
			system("cls");
			break;
		}
		case '2': {
			cout<<"Funcionalidad en Desarrollo"<<endl;
			cout<<endl;
			Sleep(1000);
			system("cls");
			break;
		}
		case '3':{
			cout<<"Funcionalidad en Desarrollo"<<endl;
			cout<<endl;
			Sleep(1000);
			system("cls");
			break;
		}
		case 'X':{
			cout << "Volviendo al Menu..." << endl;
			cout<<endl;
			Sleep(1000);
			system("cls");
			validacion=true;
			break;
		}
		case 'x':{
			cout << "Volviendo al Menu..." << endl;
			cout<<endl;
			Sleep(1000);
			system("cls");
			validacion=true;
			break;
		}
		default: {
			cout << "Opcion no valida. Intente de nuevo." << endl;
			cout<<endl;
			Sleep(1000);
			system("cls");
			break;
		}
		}
	} while(validacion==false);
	
}
