#define PI 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895490381964428810975
int main(void) {
  int boo, imag, real, mod, ang;
  do{
    printf("El siguiente programa realiza la transformacion de un numero polar a uno cartesiano.\nPor favor, ingrese el modulo del numero:\n");
    scanf("%d", &mod);
    printf("Por favor, ingrese el angulo del numero:\n");
    scanf("%d",&ang);
    real=((cos(ang*PI/180))*mod);
    imag=((sin(ang*PI/180))*mod);
    printf("su numero en cartesiano es:\n%d + %dj\nEscriba '0' para reiniciar o '1' para salir: \n",real,imag);
    scanf("%d", &boo);
  }while (boo==0);
  return 0;
}
