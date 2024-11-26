#include <iostream>
using namespace std;

int main (){

int NroDeLote[5];

// Cargamos
for(int i = 0; i < 5; i++){
    cout << "Nro lote:";
    cin >> NroDeLote[i];
}

// Devolver los numero de lote Pares. En otro vector.
int vNumPares[5]={};

for(int i = 0; i < 5; i++){
    if(NroDeLote[i]%2==0){
            vNumPares[i] = NroDeLote[i];
    }
}
cout << endl << "Mostramos los numeros pares: " << endl;
for(int i = 0; i < 5; i++){
    if(vNumPares[i]!=0){
    cout << vNumPares[i] << ", ";
    }
}

return 0;
}
