#include"login.h"
bool esCapicua(int num)
{
	int original = num;
	int invertido = 0;
	while (num > 0)
	{
		invertido = invertido * 10 + num % 10;
		num /= 10;
	}
	return original == invertido;
}
int passwordgenerada(int user)
{
	int N, ultimosTres;
	N = user;
	N = (user % 10) + ((user / 100) % 10) * 10 + (user / 10000) * 100;
	int capicua = N + 1;
	while (!esCapicua(capicua))
	{
		capicua++;
	}
	
	ultimosTres = (user % 1000);
	
	int year = 2024;             // Año actual
	return (year * capicua) + ultimosTres; // Fórmula para generar la contraseña
}
void login(int& contIntentosLogin){
	
	int user, passwordUser;
	bool user_valido = false;
	system("color 60");
	
	
	cout << "-----------------------------------" << endl;
	cout << "             LOGIN                 " << endl;
	cout << "-----------------------------------" << endl;
	// Usuario
	do
	{
		cout << "Ingrese su Numero de Legajo: (5 digitos): ";
		cin >> user;
		
		if(user<10000){
			cout<<"ID invalida. Pruebe con un numero mayor a 10000."<<endl;
			Sleep(1000);
			system("cls");
		}else if(user>99999){
			cout<<"ID invalida. Pruebe con un numero menor a 99999."<<endl;
			Sleep(1000);
			system("cls");
		}
		
		user_valido = (user >= 10000 && user <= 99999);
	} while (user_valido == false);
	
	cout << "-----------------------------------" << endl;
	int password = passwordgenerada(user);
	//MOSTRAR CONTRASEÑA UNICA GENERADA   cout<<password<<endl;
	do
	{
		cout << "Ingrese su password unica generada: ";
		cin >> passwordUser;
		
			if (passwordUser != password)
			{
				cout << "Password incorrecta, intente nuevamente" << endl;
				contIntentosLogin++;
				Sleep(1000);
				system("cls");
			}
	} while ((passwordUser != password) && (contIntentosLogin<3));
	
	if(contIntentosLogin<3){
		// INGRESADO AL SISTEMA CORRECTAMENTE
		if (passwordUser == password)
		{
			cout << "-----------------------------------" << endl;
			cout << "Bienvenido al sistema" << endl;
			cout << "-----------------------------------" << endl;
			
			//IR A MENYU PRINCIPAL
			Sleep(3000);
		}
	}else if(contIntentosLogin==3){
		cout<<"Limite de ingresos erroneos alcanzado. Por favor, reinicie el programa para reintentar."<<endl;
	}
}
