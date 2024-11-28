#include <iostream>
using namespace std;

/*
Dadas dos listas de 10 números cada una y sin números repetidos, cargarlas en
dos vectores. Generar un tercer vector que contenga solamente aquellos
elementos que están repetidos en ambos vectores. Mostrar en pantalla el nuevo
vector.
Vector 1: [8, 10, -3, 5, 7]
Vector 2: [10, -8, 5, 9, -3]
Vector 3: [10, -3, 5]
*/
/*
int main (){

int vec[5]={-4,0,4,5,6};
int vec2[5]={4,0,6,-4,5};
int vec3[5]={};
bool vecBool[5]={false};

for(int i = 0; i < 5; i++){

    for(int j = 0; j < 5; j++){

        if(vec[i]==vec2[j]){
            vec3[i] = vec2[j];
            vecBool[i]=true;
        }

    }
}

cout << endl << endl;

for(int i = 0; i < 5; i++){
    if(vecBool[i]){
    cout << vec3[i] << ", ";
    }
}

return 0;
}
*/
/*
22. Una empresa comercializa 20 tipos de artículos y por cada venta realizada
genera un registro con los siguientes datos:
● Número de Artículo (1 a 20)
● Cantidad Vendida
Puede haber varios registros para el mismo artículo y el último registro se indica
cuando se ingresa un número de artículo igual a 0. Se pide determinar e informar:
a) El número de artículo que más se vendió en total.
b) Los números de artículos que no registraron ventas.
c) Cuántas unidades se vendieron del número de artículo 10.
*/

int main(){

int vecArticulos[20]={};

int numArt, cantVen;
cout << "Ingrese nro articulo: ";
cin >> numArt;

while(numArt != 0){

cout << "Ingrese cantidad vendida: ";
cin >> cantVen;

vecArticulos[numArt-1] = cantVen;

cout << "Ingrese nro articulo: ";
cin >> numArt;
}

return 0;
}


