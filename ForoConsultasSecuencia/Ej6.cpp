#include<iostream>
#include<cstdlib>
using namespace std;
/*
Hacer un programa para que un comercio ingrese por teclado la recaudación en
pesos para cada una de las cuatro semanas del mes. El programa debe listar la
recaudación promedio por semana y el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación
promedio $2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.
*/
int main() {

int ingreso, acumulador=0, semana1, semana2, semana3, semana4;

cout << "Ingrese la recaudacion de la primera semana del mes: $";
cin >> ingreso;
semana1 = ingreso;
acumulador += semana1;

cout << "Ingrese la recaudacion de la segunda semana del mes: $";
cin >> ingreso;
semana2 = ingreso;
acumulador += semana2;

cout << "Ingrese la recaudacion de la tercera semana del mes: $";
cin >> ingreso;
semana3 = ingreso;
acumulador += semana3;

cout << "Ingrese la recaudacion de la cuarta semana del mes: $";
cin >> ingreso;
semana4 = ingreso;
acumulador += semana4;

cout << "Recaudacion promedio del mes: $" << acumulador / 4.0 << endl;
cout << "Porcentaje semana 1: " << (semana1 * 100) / acumulador << "%" << endl;
cout << "Porcentaje semana 2: " << (semana2 * 100) / acumulador << "%" << endl;
cout << "Porcentaje semana 3: " << (semana3 * 100) / acumulador << "%" << endl;
cout << "Porcentaje semana 4: " << (semana4 * 100) / acumulador << "%" << endl;

return 0;
}
