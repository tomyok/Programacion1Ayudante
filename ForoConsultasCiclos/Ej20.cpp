#include <iostream>
using namespace std;

/*Una Universidad dispone de diez aulas para acomodar a una cantidad de
asistentes a una charla. Cada aula tiene una capacidad total de 60 personas. Se
necesita un programa que solicite la cantidad de asistentes a la charla y
determine la cantidad total de aulas necesarias para acomodarlos a todos.*/

// Maximo 600 personas.

int main (){

int asistentes, aula = 0;

cout << "Ingrese asistentes: ";
cin >> asistentes;
if(asistentes > 0){
    while(asistentes > 0){

        asistentes = asistentes - 60;

        aula++;

    }
} else {
cout << "Dale tonto, como van a ir asistentes negativos." << endl;
}
cout << "Aulas necesarias: " << aula << endl;

return 0;
}
