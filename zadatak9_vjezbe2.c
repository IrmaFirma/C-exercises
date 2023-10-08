#include <stdio.h>
#include <math.h>
// Zadatak 9, Vjezbe 2


int main(void) {

  int x, y;
  printf("Unesi dva dvocifrena broja: ");
  scanf("%d %d", &x, &y);

  int zadnja_x = x % 10;
  int zadnja_y = y % 10;

  int razlika = zadnja_x - zadnja_y;

  printf("Razlika brojeva %d i %d je %d!", zadnja_x, zadnja_y, razlika);

  
  return 0;
}
