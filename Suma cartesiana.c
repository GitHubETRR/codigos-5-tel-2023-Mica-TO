#include "stdio.h"
#define PI 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895490381964428810975
int main(void) {
  int boo, real, imag, temp, mod,CoP;
  int ang=90;
  do{
    printf("El siguiente programa realiza la suma de dos numeros cartesianos.\nPor favor, ingrese la parte real del primer numero:\n");
    scanf("%d", &temp);
    printf("Por favor, ingrese la parte real del segundo numero:\n");
    scanf("%d",&real);
    real=real+temp;
    printf("Por favor, ingrese la parte imaginaria del primer numero:\n");
    scanf("%d",&temp);
    printf("Por favor, ingrese la parte imaginaria del segundo numero:\n");
    scanf("%d",&imag);
    imag=imag+temp;
    printf("Si desea ver el resultado de forma polar, ingrese cero, caso contrario, ingrese uno:\n");
    scanf("%d", &CoP);
    printf("Su resultado es:\n");
    if (CoP==1){
      printf("%d + %dj.\n", real, imag);
    }else{
      if(real!=0)ang=(atan((imag*PI/180)/(real*PI/180)))*180/PI;
      mod=sqrt((real*real)+(imag*imag));
      printf("%de⌃j%d.\n", mod, ang);
    }
    printf("Escriba '0' para reiniciar o '1' para salir:\n");
    scanf("%d", &boo);
  }while (boo==0);
  return 0;
}
