#include <stdio.h>
#include <math.h>
// Zadatak 7, Vjezbe 2

int main(void) {

  int n;
  printf("Unesi redni broj dana: ");
  scanf("%d", &n);

  if(n>7 || n<=0) printf("Uneseni broj nije validan!");

  if(n==1) printf("Danas je ponedjeljak!");
  else if (n==2) printf("Danas je utorak!");
  else if (n==3) printf("Danas je srijeda!");  
  else if (n==4) printf("Danas je cetvrtak!");
  else if (n==5) printf("Danas je petak!");
  else if (n==6) printf("Danas je subota!");  
  else if (n==7) printf("Danas je nedjelja!");
  
  return 0;
}
