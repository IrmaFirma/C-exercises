#include <stdio.h>
// Zadatak 8, Vjezbe 1
//3 decimale 

int main(void) {
  float novac;
  printf("Koliko ste novca potrosili? ");
  scanf("%f", &novac);

  float pdv = 0.17 * novac;

  printf("PDV na taj iznos iznosi %.3f", pdv);
  
  return 0;
}
