#include <stdio.h>
// Zadatak1, Vjezbe 2

int main(void) {

  int n;
  printf("Unesite cijeli broj: ");
  scanf("%d", &n);

  if(n>0) printf("Uneseni broj je pozitivan");
  else if(n==0) printf("Unijeli ste broj nula!");
  else printf("Uneseni broj je negativan");

  return 0;
}
