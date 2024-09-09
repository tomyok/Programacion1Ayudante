/*Una estaci�n meteorol�gica registr� una muestra clim�tica de los �ltimos 15 d�as. Por cada d�a registr�:
-	N�mero de d�a (entero)
-	Temperatura (float)7
-
-	Mil�metros de lluvia (float)
-	Visibilidad en km (float)

Hay un registro por cada d�a. La informaci�n se encuentra ordenada por d�a. Se pide calcular e informar:
-	El n�mero del d�a que se haya registrado la temperatura m�xima.
-	La amplitud t�rmica de todo el per�odo.
-	La cantidad de d�as con neblina.
-	Mostrar "Quincena lluviosa" si hubo m�s d�as de lluvia que d�as sin lluvia. Mostrar "Quincena h�meda" si llovi� en al menos un tercio de los d�as. De lo contrario mostrar "Quincena seca".

NOTA: La amplitud t�rmica es la diferencia entre la temperatura m�xima y la temperatura m�nima.
NOTA: Se considera neblina a una visibilidad menor a 2 km.
*/
#include <iostream>
using namespace std;
#include <cstdlib>
int main (){
    int i,num_dia,max_temperatura=0,mini_temperatura=0,num_dia_tepm_max=0;
    float temperatura,milimetros_de_lluvia,visibilidad_km, amplitud_termica;
    bool bandera_max_temp=0, bandera_min_temp=0;
    int contador_dias_con_niebla=0,contador_dias_lluviosos=0, contador_dias_soleados=0;


    for(i=0;i<5;i++){

      cout<<"ingrese numero de dia: ";
      cin>>num_dia;
      cout<<"ingrese temperatura: ";
      cin>>temperatura;
      cout<<"ingrese milimetro por dia:  ";
      cin>>milimetros_de_lluvia;
      cout<<"ingrese visibilidad:  ";
      cin>>visibilidad_km;

      //-	El n�mero del d�a que se haya registrado la temperatura m�xima.y -	La amplitud t�rmica de todo el per�odo.
      if(bandera_max_temp==0){
        max_temperatura=temperatura,num_dia_tepm_max=num_dia;
        bandera_max_temp=1;

      }  else {if(temperatura>max_temperatura) {
                max_temperatura=temperatura,num_dia_tepm_max=num_dia;
                }else{if(bandera_min_temp==0){mini_temperatura=temperatura, bandera_min_temp=1;}
                       else{if(temperatura<mini_temperatura) {
                            mini_temperatura=temperatura;}
                    }
                    }


      }

     // -	La cantidad de d�as con neblina.


        if(visibilidad_km<2)
        contador_dias_con_niebla++;


//-	Mostrar "Quincena lluviosa" si hubo m�s d�as de lluvia que d�as sin lluvia


if(milimetros_de_lluvia>=0){
    contador_dias_lluviosos++;
} else{if(milimetros_de_lluvia<=0){
               contador_dias_soleados++; }
               }

    }
    amplitud_termica=max_temperatura-mini_temperatura;

    cout<<"-	El n�mero del d�a que se haya registrado la temperatura m�xima.:  "<<num_dia_tepm_max<<endl;
    cout<<"-	La amplitud t�rmica de todo el per�odo.:  "<<amplitud_termica<<endl;
    cout<<"-	La cantidad de d�as con neblina:  "<<contador_dias_con_niebla<<endl;


  //-	Mostrar "Quincena lluviosa" si hubo m�s d�as de lluvia que d�as sin lluvia


    if(contador_dias_soleados<contador_dias_lluviosos){
        cout<<"Quincena lluviosa"<<endl;
    }
    //Mostrar "Quincena h�meda" si llovi� en al menos un tercio de los d�as. De lo contrario mostrar "Quincena seca".

  if(contador_dias_soleados<2){
    cout<<"Quincena h�meda" <<endl;
  }else{cout<<"Quincena seca"<<endl; }

    cout<<max_temperatura<<endl;
    cout<<mini_temperatura<<endl;

    return 0;

}
