#include "stdio.h"
#define PI 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895490381964428810975
int main(void) {
  int boo, imag, real, vlr, Hz;
  do{
    printf("El siguiente programa indica el componente y los datos de una dada impedancia\nPor favor, ingrese el valor real de la impedancia:\n");
    scanf("%d", &real);
    printf("Por favor, ingrese el valor imaginario de la impedancia:\n");
    scanf("%d",&imag);
    printf("Por favor, ingrese el valor de la frecuencia en Hz:\n");
    scanf("%d",&Hz);
    if (imag==0){
      if(real==0){
        printf("Por favor, añada una resistencia");
      }else{
        printf("El circuito es puramente resistivo.\nEl valor de la resistencia es de %d ohms.\n", real);
      }
    }else{
      if(imag<0){
        imag=abs(imag);
        vlr=((1/(2*PI*Hz*imag))*1000);
        printf("El circuito cuenta con un capacitor de %d milifaradios.", vlr);
      }else{
        vlr=((imag/(2*PI*Hz))*1000);
        printf("El circuito cuenta con un inductor de %d milihenrios.", vlr);
      }
      if (real!=0)printf("La impedancia tambien tiene un valor real de %d ohms.\n", real); 
    }
    printf("Escriba '0' para reiniciar o '1' para salir:\n");
  }while (boo==0);
  return 0;
}
