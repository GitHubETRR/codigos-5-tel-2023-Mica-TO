#include <stdio.h>
#define VEC_LONG 6
int main(void) {
  char txt1 [VEC_LONG]="ojasd";
  char txt2 [VEC_LONG]="ojasd";
  int comp = 0;int i;
  for(i=0; i<VEC_LONG; i++){
    comp+=(txt1[i]-txt2[i]);
  }
  if (comp < 0) comp=-1;
  if (comp > 0) comp=1;
  printf("%d", comp);
  return 0;
}
