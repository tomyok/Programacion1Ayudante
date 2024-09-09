/*Una estación meteorológica registró una muestra climática de los últimos 15 días. Por cada día registró:
-	Número de día (entero)
-	Temperatura (float)7
-
-	Milímetros de lluvia (float)
-	Visibilidad en km (float)

Hay un registro por cada día. La información se encuentra ordenada por día. Se pide calcular e informar:
-	El número del día que se haya registrado la temperatura máxima.
-	La amplitud térmica de todo el período.
-	La cantidad de días con neblina.
-	Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia. Mostrar "Quincena húmeda" si llovió en al menos un tercio de los días. De lo contrario mostrar "Quincena seca".

NOTA: La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima.
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

      //-	El número del día que se haya registrado la temperatura máxima.y -	La amplitud térmica de todo el período.
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

     // -	La cantidad de días con neblina.


        if(visibilidad_km<2)
        contador_dias_con_niebla++;


//-	Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia


if(milimetros_de_lluvia>=0){
    contador_dias_lluviosos++;
} else{if(milimetros_de_lluvia<=0){
               contador_dias_soleados++; }
               }

    }
    amplitud_termica=max_temperatura-mini_temperatura;

    cout<<"-	El número del día que se haya registrado la temperatura máxima.:  "<<num_dia_tepm_max<<endl;
    cout<<"-	La amplitud térmica de todo el período.:  "<<amplitud_termica<<endl;
    cout<<"-	La cantidad de días con neblina:  "<<contador_dias_con_niebla<<endl;


  //-	Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia


    if(contador_dias_soleados<contador_dias_lluviosos){
        cout<<"Quincena lluviosa"<<endl;
    }
    //Mostrar "Quincena húmeda" si llovió en al menos un tercio de los días. De lo contrario mostrar "Quincena seca".

  if(contador_dias_soleados<2){
    cout<<"Quincena húmeda" <<endl;
  }else{cout<<"Quincena seca"<<endl; }

    cout<<max_temperatura<<endl;
    cout<<mini_temperatura<<endl;

    return 0;

}
