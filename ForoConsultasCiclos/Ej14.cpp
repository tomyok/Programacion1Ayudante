#include <iostream>

using namespace std;

int main (){

int legajo, legajoMin, codigoMat, contNotas = 0;
float nota, notaProm = 0, notaMin ;

cout << "Ingrese Legajo: ";
cin >> legajo;

while(legajo>0&&legajo<=30000){

cout << "Ingrese codigoMateria: ";
cin >> codigoMat;
cout << "Ingrese Nota del alumno: ";
cin >> nota;

//Promedio de notas
contNotas++;
notaProm += nota;

//Legajo nota minima
if(contNotas==1){
    notaMin = nota;
    legajoMin = legajo;
} else {
    if(notaMin > nota){
        notaMin = nota;
        legajoMin = legajo;
    }
}



cout << "Ingrese Legajo: ";
cin >> legajo;
}

notaProm = notaProm / contNotas;

cout << endl << "El promedio de notas de los alumnos es: " << notaProm << endl << endl;
cout << "El legajo del alumno con menor nota es: " << legajoMin << endl;


return 0;
}
