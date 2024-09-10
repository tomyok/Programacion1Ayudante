#include<iostream>
#include<cstdlib>
using namespace std;
/*
Hacer un programa para ingresar el importe de una compra y el descuento a
aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el
importe total a cobrar.
Ejemplo: se ingresa importe 4500, descuento 40; se deberá mostrar
Importe: 4500, Descuento: 1800, total: 2700.
*/
int main() {

int importe, porcentaje;

cout << "Ingrese el importe de la compra: $";
cin >> importe;
cout << "Ingrese el descuento a aplicar al importe: %";
cin >> porcentaje;

cout << "Importe: $" << importe << endl;
cout << "Descuento: $" << (porcentaje * importe) / 100 << endl;
cout << "Total: $" << importe - ((porcentaje * importe) / 100);

return 0;
}
