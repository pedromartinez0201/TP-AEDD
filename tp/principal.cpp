#include<iostream>
#include <stdlib.h>
#include "login.h"
#include"menu.h"
#include "bienvenida.h"
using namespace std;

int main(){
	int contIntentosLogin=0;
	//MENSAJE DE BIENVENIDA
	bienvenida();
	system("cls");
	//INICIAR SESION
	login(contIntentosLogin);
	if(contIntentosLogin<3){
		system("cls");
		//MENU PRINCIPAL JUNTO CON LOS SUBMENUS
		menu_principal();
	}else{
		return 0;
	}
	
}
