#include <iostream>

using namespace std;

int main (){

int saldo = 0, compra, cantidadCompras = 0, cantidadGaseosas = 0, cantidadSandwich = 0;

cout << "Ingrese un saldo: ";
cin >> saldo;
//gaseosa = 60:
//gaseosa = 120:

while(saldo > 0){
cout << endl << "Comprar:" << endl;
cout << "1. Gaseosa $100" << endl;
cout << "2. Sandwich $200" << endl;
cout << "0. Salir del kiosco" << endl;
cout << "Opcion: ";
cin >> compra;

if(compra==0){
saldo = 0;
}else{
    if(compra==1){
        saldo = saldo - 100;
        cantidadCompras++;
        cantidadGaseosas++;
        cout << endl << "Compraste una GASEOSA!" << endl;
        cout << "Tu saldo restante es: "<< saldo << endl;
    } else {
        saldo = saldo - 200;
        cantidadCompras++;
        cantidadSandwich++;
        cout << endl << "Compraste una SANDWICH!" << endl;
        cout << "Tu saldo restante es: "<< saldo << endl;
    }
}
}
if(cantidadGaseosas%2==0){
    cout << endl << "La cantidad de gaseosas compradas es: " << cantidadGaseosas << ", y tambien es par." << endl;
} else {
    cout << endl << "La cantidad de gaseosas compradas es: " << cantidadGaseosas << ", y tambien es impar." << endl;
}
int auxSandwich;
if(cantidadSandwich%2==0){
    cout << endl << "La cantidad de sandwich compradas es: " << cantidadSandwich << ", y tambien es par." << endl;
    auxSandwich = cantidadSandwich;
    for(int i = 1; i <= auxSandwich; i++){
        if(auxSandwich%i==0){
        cout << endl <<"Los divisores del numero " << auxSandwich << ", es:" << i << endl;
        }
    }
} else {
cout << endl << "La cantidad de sandwich compradas es: " << cantidadSandwich << ", y tambien es impar." << endl;
}


cout << "Cantidad de compras hechas:" << cantidadCompras << endl;

cout << "Gane $" << cantidadGaseosas * 40 << " De gaseosas." << endl;
cout << "Gane $" << cantidadSandwich * 80 << " De Sandwiches." << endl;
cout << "Gane $" << (cantidadSandwich * 80) + (cantidadGaseosas * 40) << " TOTAL." << endl;

cout << "GANANCIA PROMEDIO: $" << (cantidadSandwich * 80) + (cantidadGaseosas * 40) / cantidadCompras << endl;

return 0;
}
