#include <stdio.h>
// Zadatak 6, Vjezbe 1

int main(void) {
  float novac;
  printf("Koliko ste novca potrosili? ");
  scanf("%f", &novac);

  float pdv = 0.17 * novac;

  printf("PDV na taj iznos iznosi %f", pdv);
  
  return 0;
}
