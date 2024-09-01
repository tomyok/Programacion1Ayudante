#include <iostream>

using namespace std;

int main (){

int num, numMax;
bool ban = false;

for(int x=0; x<10 ; x++){

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    if(x==0){
        ban = true;
        numMax = num;
    }
    if(num > numMax){
        numMax = num;
    }
}

cout << "El numero maximo es:" << numMax;

}
