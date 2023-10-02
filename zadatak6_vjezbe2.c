#include <stdio.h>
#include <math.h>
// Zadatak 6, Vjezbe 2

int main(void) {

  int n;
  printf("Unesite cijeli broj: ");
  scanf("%d", &n);

  int zadnja_cifra = n % 10;

  printf("Zadnja cifra broja je: %d", zadnja_cifra);
  
  return 0;
}
