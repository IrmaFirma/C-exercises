#include <stdio.h>
// Zadatak 5, Vjezbe 1

int main(void) {
  float m;
  printf("Unesite milje: ");
  scanf("%f", &m);

  float kilometri = m * 1.609344;

  printf("To je %f kilometara!", kilometri);
  
  return 0;
}
