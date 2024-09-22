#include "carga_medallas.h"
#include"menu.h"
void cargar_medallas(){
	char opcion;
	bool validacion=false;
	system("color 60");
	do {
		// Visualización del submenu
		cout << "Menu Cargar Medallas" << endl;
		cout << "========================" << endl;
		cout << "1. Carga por Pais" << endl;
		cout << "2. Carga por Deporte" << endl;
		cout << "3. Carga por Deporte Individual" << endl;
		cout << "4. Carga por Deporte Colectivo" << endl;
		cout << "5. Carga por Categoria Deportiva" << endl;
		cout << "X. Volver al Menu Principal" << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcion;
		cout<<endl;
		
		switch(opcion) {
		case '1': {
			cout<<"Funcionalidad en desarrollo"<<endl;
			cout<<endl;
			Sleep(1000);
			system("cls");
			break;
		}
		case '2': {
			cout<<"Funcionalidad en desarrollo"<<endl;
			cout<<endl;
			Sleep(1000);
			system("cls");
			break;
		}
		case '3': {
			cout<<"Funcionalidad en desarrollo"<<endl;
			cout<<endl;
			Sleep(1000);
			system("cls");
			break;
		}
		case '4': {
			cout<<"Funcionalidad en desarrollo"<<endl;
			cout<<endl;
			Sleep(1000);
			system("cls");
			break;
		}
		case '5': {
			cout<<"Funcionalidad en desarrollo"<<endl;
			cout<<endl;
			Sleep(1000);
			system("cls");
			break;
		}
		case 'X':{
			cout << "Volviendo al Menu Principal..." << endl;
			cout<<endl;
			system("cls");
			validacion=true;
			break;
		}
		case 'x':{
			cout << "Volviendo al Menu Principal..." << endl;
			cout<<endl;
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
