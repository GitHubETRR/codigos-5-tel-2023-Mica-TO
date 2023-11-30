#include <stdio.h>
#define VEC_LONG 10
void Ingresar_vec(int []);
void Ordenar_Vec(int []);
void Promedio_Temp(int ej[]);
int main (void){
   int vec[VEC_LONG]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int Mas_Diez=0; int Veintes=0; 
   Ingresar_vec(vec);
   Ordenar_Vec(vec);
   Promedio_Temp(vec);
   for(int i=0; i<VEC_LONG;i++){
     if(vec[i]>10)Mas_Diez++;
     if(20==vec[i])Veintes++;
     printf("%d\n",vec[i]);
   }
   printf("Temperatura maxima: %d\nTemperatura minima:%d\nCantidad de veces la temperatura supero los 10º: %d\nCantidad de veces la temperatura fue de 20º:%d\n",vec[VEC_LONG-1],vec[0],Mas_Diez,Veintes);
   return 0;
}

void Ingresar_vec(int ej[]){
    for(int i=0;i<VEC_LONG;i++){
            printf("Ingresa la temperatura %d: ",i+1);
            scanf("%d",&ej[i]);
    }
}
void Ordenar_Vec(int ej[]){
  int i,j,save;
   for (i=1; i<VEC_LONG; i++){
      for (j=0; j<(VEC_LONG-1); j++){
         if (ej[j]>ej[j+1]){
            save=ej[j];
            ej[j]=ej[j+1];
            ej[j+1]=save;
         }
      }
   }
}
void Promedio_Temp(int ej[]){
    int prom=0;
    for(int i=0;i<VEC_LONG;i++){
        prom+=ej[i];
    }
    prom/=VEC_LONG;
    printf("La temperatura promedio fue de: %d\nLas temperturas en orden de menor a mayor:\n", prom);
}
