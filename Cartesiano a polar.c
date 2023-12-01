#include "stdio.h"
#define PI 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895490381964428810975
int main(void) {
  int boo, imag, real, mod;
  int ang=90;
  do{
    printf("El siguiente programa realiza la transformacion de un numero cartesiano a uno polar.\nPor favor, ingrese la parte real del numero:\n");
    scanf("%d", &real);
    printf("Por favor, ingrese la parte imaginaria del numero:\n");
    scanf("%d",&imag);
    if(real!=0)ang=(atan((imag*PI/180)/(real*PI/180)))*180/PI;
    mod=sqrt((real*real)+(imag*imag));
    printf("su numero en polar es:\n%de⌃j%d\nEscriba '0' para reiniciar o '1' para salir: \n",mod,ang);
    scanf("%d", &boo);
  }while (boo==0);
  return 0;
}
