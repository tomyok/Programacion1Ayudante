#include <iostream>
#include <iomanip>
using namespace std;

// PUNTO 1 IMPRIMIR IMAGEN

void imprimir_imagen(double imagen[3][3], double umbral);

void imprimir_imagen(double imagen[3][3], double umbral){

for(int i = 0; i< 3 ; i++){

    cout << "p";
    for(int j = 0 ; j < 3; j++ ){

        if(imagen[i][j]>umbral){
        cout << setw(8) << "x";
        } else {
        cout << setw(8) << fixed << setprecision(2) << imagen[i][j];
        }

    }
    cout << " p" <<endl;
}

}


// PUNTO 2 NORMALIZAR IMAGEN

void normalizar_imagen(double imagen[3][3], double &minn, double &maxx);

void normalizar_imagen(double imagen[3][3], double &minn, double &maxx){

double maximo, minimo;

for(int i = 0; i< 3 ; i++){

    for(int j = 0 ; j < 3; j++ ){

        if(i == 0 && j == 0){
            maximo = imagen[i][j];
            minimo = imagen[i][j];
        } else if( maximo < imagen[i][j]){
            maximo = imagen[i][j];
        }

        if(minimo > imagen[i][j]){
            minimo = imagen[i][j];
        }

    }
}

minn = minimo;
maxx = maximo;

double diff = maxx - minn;

for(int i = 0; i< 3 ; i++){

    for(int j = 0 ; j < 3; j++ ){

        imagen[i][j] = (imagen[i][j] - minn) / diff;

    }
}

}

// PUNTO 3 SUAVIZAR IMAGEN

void suavizar_imagen(double imagen[3][3], double imagen_suavizada[3][3]);

void suavizar_imagen(double imagen[3][3], double imagen_suavizada[3][3]){

double promedio;
int cont=0;

for(int i = 0; i< 3 ; i++){

    for(int j = 0 ; j < 3; j++ ){
        cont++;
        promedio += imagen[i][j];

    }
}
promedio = promedio / cont;

for(int i = 0; i< 3 ; i++){

    for(int j = 0 ; j < 3; j++ ){

        imagen_suavizada[i][j] = imagen[i][j] / promedio;

    }
}
}


// PUNTO 4 CARGAR IMAGEN

void cargar_imagen(double imagen[3][3]);

void cargar_imagen(double imagen[3][3]){

    for(int i = 0; i< 3 ; i++){

    for(int j = 0 ; j < 3; j++ ){

        cout << endl << "Ingrese pixel en la fila " << i << " y columna " << j << ": ";
        cin >> imagen[i][j];
    }
}
}

// PUNTO 5 VALIDAR IMAGEN

bool validar_imagen(double imagen[3][3], double min_val, double max_val);

bool validar_imagen(double imagen[3][3], double min_val, double max_val){

    for(int i = 0; i< 3 ; i++){

    for(int j = 0 ; j < 3; j++ ){

            if((imagen[i][j] < min_val) || (imagen[i][j] > max_val)){
                return false;
            }
    }
}
return true;
}

// PUNTO 6 DESARROLLO

int main(){

double im[3][3];

cout << "Ingrese una imagen valida: ";
// a)
//CARGAMOS LA IMAGEN
cargar_imagen(im);
//VALIDAMOS LA IMAGEN CON VALORES 0 Y 255
if(validar_imagen(im,0,255)){
    cout << "La imagen cargada es valida";
} else {
    cout << "La imagen cargada no es valida";
}
cout << endl << endl;
// b)
cout << "Imagen: ";
cout << endl << endl;
imprimir_imagen(im,255);
cout << endl << endl;
// c)
double minn, maxx;
normalizar_imagen(im,minn,maxx);
cout << "Imagen normalizada con minimo = " << minn << " y maximo = " << maxx << ". ";
cout << endl << endl;
imprimir_imagen(im,1);
cout << endl << endl;
// d)
double im_suavizada[3][3];
suavizar_imagen(im,im_suavizada);
cout << "Imagen suavizada:";
cout << endl << endl;
imprimir_imagen(im_suavizada,1);
cout << endl << endl;
return 0;
}
