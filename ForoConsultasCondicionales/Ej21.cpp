#include<iostream>

#include<cstdlib>

using namespace std;
/*
Una marroquinería dispone de 45 carteras blancas, 50 negras, 40
marrones y 49 grises. Se pide hacer un programa donde se ingresen tres
ventas. Cada venta está compuesta por:
- Cantidad de carteras
- Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)
Calcular e informar:
- Cantidad total de carteras vendidas en total.
- Cuántas carteras quedaron de cada tipo.
- Los colores de carteras que no se vendieron.
NOTA: Ninguna venta superará las 10 carteras.
*/

int main() {

int cantCarteras;
int blancas = 45, negras = 50, marrones = 40, grises = 49;
int totalVendidas=0;

int eleccion;

cout << "Ingrese cuantas carteras se vendieron: ";
cin >> cantCarteras;
cout << "Ingrese el color de la carteras vendidas: Blanca(1) - Negra(2) - Marron(3) - Gris(4): ";
cin >> eleccion;

switch(eleccion){
    case 1:
        totalVendidas += cantCarteras;
        blancas -= cantCarteras;
        break;
    case 2:
        totalVendidas += cantCarteras;
        negras -= cantCarteras;
        break;
    case 3:
        totalVendidas += cantCarteras;
        marrones -= cantCarteras;
        break;
    case 4:
        totalVendidas += cantCarteras;
        grises -= cantCarteras;
        break;
    default:
        cout << "Te equivocaste de Numero." << endl;
        break;
}

cout << "Ingrese cuantas carteras se vendieron: ";
cin >> cantCarteras;
cout << "Ingrese el color de la carteras vendidas: Blanca(1) - Negra(2) - Marron(3) - Gris(4): ";
cin >> eleccion;

switch(eleccion){
    case 1:
        totalVendidas += cantCarteras;
        blancas -= cantCarteras;
        break;
    case 2:
        totalVendidas += cantCarteras;
        negras -= cantCarteras;
        break;
    case 3:
        totalVendidas += cantCarteras;
        marrones -= cantCarteras;
        break;
    case 4:
        totalVendidas += cantCarteras;
        grises -= cantCarteras;
        break;
    default:
        cout << "Te equivocaste de Numero." << endl;
        break;
}

cout << "Ingrese cuantas carteras se vendieron: ";
cin >> cantCarteras;
cout << "Ingrese el color de la carteras vendidas: Blanca(1) - Negra(2) - Marron(3) - Gris(4): ";
cin >> eleccion;

switch(eleccion){
    case 1:
        totalVendidas += cantCarteras;
        blancas -= cantCarteras;
        break;
    case 2:
        totalVendidas += cantCarteras;
        negras -= cantCarteras;
        break;
    case 3:
        totalVendidas += cantCarteras;
        marrones -= cantCarteras;
        break;
    case 4:
        totalVendidas += cantCarteras;
        grises -= cantCarteras;
        break;
    default:
        cout << "Te equivocaste de Numero." << endl;
        break;
}

cout << "Total de carteras vendidas: " << totalVendidas << endl;

cout << "Cantidad de carteras blancas que quedaron sin vender: " << blancas << endl;
cout << "Cantidad de carteras negras que quedaron sin vender: " << negras << endl;
cout << "Cantidad de carteras marrones que quedaron sin vender: " << marrones << endl;
cout << "Cantidad de carteras grises que quedaron sin vender: " << grises << endl;

if(blancas==45){
    cout << "Las carteras blancas no se vendieron." << endl;
}
if(negras==50){
    cout << "Las carteras negras no se vendieron." << endl;
}
if(marrones==40){
    cout << "Las carteras marrones no se vendieron." << endl;
}
if(grises==49){
    cout << "Las carteras grises no se vendieron." << endl;
}

return 0;
}
