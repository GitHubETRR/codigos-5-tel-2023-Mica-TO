#include "stdio.h"
#define PI 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895490381964428810975
int main(void) {
  int boo, mvolt, avolt, mcur, acur, Hz, vlr;
  float imag, real, g;
  do{
    printf("El siguiente programa realiza el calculo de la impedancia de un circuito, dadas la tension y corriente del mismo.\nPor favor, ingrese modulo del voltaje:\n");
    scanf("%d", &mvolt);
    printf("Por favor, ingrese el angulo del voltaje:\n");
    scanf("%d",&avolt);
    printf("Por favor, ingrese el modulo de la corriente:\n");
    scanf("%d",&mcur);
    printf("Por favor, ingrese el angulo de la corriente:\n");
    scanf("%d",&acur);
    printf("Por favor, ingrese la frecuencia en Hz:\n");
    scanf("%d",&Hz);
    g=((100*mvolt)/(mcur));
    real=(cos((avolt-acur)*PI/180));
    real=(real*g);
    imag=(sin((avolt-acur)*PI/180));
    imag=(imag*g);
    printf("%f  %f  %f  %d  %d\n",imag, real, g, mvolt, mcur);
    //Comienzo del codigo anterior:
    if (imag==0){
        printf("El circuito es puramente resistivo.\nEl valor de la resistencia es de %f ohms.\n", real);
    }else{
      if(imag<0){
        imag=(abs(imag))/100;
        vlr=((1/(2*PI*Hz*imag))*1000);
        printf("El circuito cuenta con un capacitor de %d milifaradios.", vlr);
      }else{
        imag=imag/100;
        vlr=((imag/(2*PI*Hz))*1000);
        printf("El circuito cuenta con un inductor de %d milihenrios.", vlr);
      }
      if (real!=0)printf("La impedancia tambien tiene un valor real de %d ohms.\n", real); 
    }
    printf("Escriba '0' para reiniciar o '1' para salir:\n");
    scanf("%d", &boo);
  }while (boo==0);
  return 0;
}
