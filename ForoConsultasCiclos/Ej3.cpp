#include <iostream>
using namespace std;

// A) El número de día que mayor cantidad de minutos de show haya registrado en total. Informar también los minutos de dicho día.
// B)Por cada día, el promedio de minutos de show por artista.
// C)El número de artista con mayor cantidad de integrantes. Informar también la cantidad de integrantes y qué día del festival participó. Si hay más de un artista que cumpla esta condición mostrar el primero de ellos.


int main (){

int dia, numArtista, cantInte, minShow, auxMinutos = 0, auxDia, inteMax = 0;
float minShowArt1, minShowArt2;
//DIAS
for(int i = 0; i < 2; i++){
int acuMin = 0, acuMinShow = 0;

    //ARTISTAS POR DIA
    for(int j = 0; j < 2 ; j++){
    cout << "Dia: " << i+1 << endl;
    cout << "Numero de artista: ";
    cin >> numArtista;
    cout << "Cantidad de integrantes: ";
    cin >> cantInte;
    cout << "Minutos de show: ";
    cin >> minShow;

    //Punto A
    acuMin += minShow;

    if(acuMin > auxMinutos){
    auxMinutos = acuMin;
    auxDia = i+1;
    }

    // Punto B
    if(j==0){
        minShowArt1 = minShow / 2;
    }
    if(j==1){
        minShowArt2 = minShow / 2;
    }

    //Punto C
    if(cantInte > inteMax){
        inteMax = cantInte;
    }


    }

    cout << "Dia: " << i+1 << endl;
    cout << "El promedio de minutos del artista 1: " << minShowArt1 << "." << endl;
    cout << "El promedio de minutos del artista 2: " << minShowArt2 << "." << endl;

}

cout << "Dia: " << auxDia << ", minutos show: " << auxMinutos << endl;

return 0;
}
