#include <stdio.h>
#include <string.h>
// Zadatak 1, Vjezbe 3

int main(void) {

  int x;
  printf("Unesite broj: ");
  scanf("%d", &x);

  int druga_cifra = (x/100) % 10;

  if(x<1000){
    printf("Niste unijeli cetverocifren broj! \n");
    printf("Dovidjenja!");
  }else if((druga_cifra % 2 == 0) && x >= 1000){
    printf("Druga cifra unesenog broja je %d i ona je parna.", druga_cifra);
  }else if((druga_cifra % 2 != 0) && x >= 1000){
    printf("Druga cifra unesenog broja je %d i ona je neparna.", druga_cifra);  
  }
  
  return 0;
}
