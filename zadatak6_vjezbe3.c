#include <math.h>
#include <stdio.h>
#include <string.h>
// Zadatak 6, Vjezbe 3

int main(void) {

  int godina; //prestupna godina da ili ne
  printf("Unesite godinu: \n");
  scanf("%d", &godina);
  

  if(((godina % 4 == 0) && (godina % 100 != 0)) || (godina % 400 == 0)){
    printf("Godina je prestupna!");
  }else{
    printf("Godina nije prestupna!");
  }

  return 0;
}
