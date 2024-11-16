#include <iostream>
using namespace std;

// Ejercicio 4
/*
bool EsPrimoSophieGermain (int num);

int main (){

	int num;

	cout << "Ingrese un numero: ";
	cin >> num;

	if(EsPrimoSophieGermain(num)){
		cout << "El numero es primoSophie ";
	}
	else{
		cout << "El numero no es primoSophie ";
	}

return 0;
}

bool EsPrimoSophieGermain (int num){
        int valor, divisoresnum = 0, divisoresSophie = 0;
        bool ban;
        valor = 2*num+1;

    for(int i=1; i <= num; i++){
		if(num % i ==0){
			divisoresnum ++;
		}
	}
	if(divisoresnum == 2){
            for(int j = 1; j <= valor; j++){
                if(valor % j == 0){
                    divisoresSophie++;
                }
            }
            if(divisoresSophie == 2){
                ban = true;
            } else {
                ban = false;
            }
	}
	else{
		ban=false;
	}

    return ban;
}
*/


// Ejercicio 5

void AsigneDiayMes(int dia, string &nombre, int numMes , string &mes);

int main(){

int dia, numMes;
string nombre, mes;

cin >> dia;
cin >> numMes;

AsigneDiayMes(dia, nombre, numMes, mes);

cout << endl <<"Dia: " << nombre << ", nro dia ingresado: " << dia << endl;
cout << endl <<"Mes: " << mes << ", nro mes ingresado: " << numMes << endl;

return 0;
}

void AsigneDiayMes(int dia, string &nombre, int numMes, string &mes){

switch(dia){
    case 0:
        nombre = "domingo";
        break;
    case 1:
        nombre = "lunes";
        break;
    case 2:
        nombre = "martes";
        break;
    case 3:
        nombre = "miercoles";
        break;
    case 4:
        nombre = "jueves";
        break;
    case 5:
        nombre = "viernes";
        break;
    case 6:
        nombre = "sabado";
        break;

    default:
        break;
}

switch(numMes){
    case 0:
        mes = "Enero";
        break;
    case 1:
        mes = "Febrero";
        break;
    case 2:
        mes = "Marzo";
        break;
    case 3:
        mes = "Abril";
        break;
    case 4:
        mes = "Mayo";
        break;
    case 5:
        mes = "Junio";
        break;
    case 6:
        mes = "Julio";
        break;
    case 7:
        mes = "Agosto";
        break;
    case 8:
        mes = "Septiembre";
        break;
    case 9:
        mes = "Octubre";
        break;
    case 10:
        mes = "Noviembre";
        break;
    case 11:
        mes = "Diciembre";
        break;
    default:
        break;
}

}
