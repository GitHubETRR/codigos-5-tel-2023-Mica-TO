#include <stdio.h>
#define CANT 10
int lista[CANT];
int main (void){
  int i,j,temp;
  for(i=1; i<CANT; i++){
    printf("Ingrese el %d numero en la lista:\n",i);
    scanf("%d", &lista[i]);
  }
  for (i=1; i<CANT; i++){
    for (j=0; j<(CANT-1); j++){
      if (lista[j] > lista[j+1]){
        temp = lista[j];
        lista[j] = lista[j+1];
        lista[j+1] = temp;
      }
    }
  }
  for(i=0;i<CANT;i++)printf("%d \t",lista[i]);
  return 0;
}
