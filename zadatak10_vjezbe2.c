#include <stdio.h>
#include <math.h>
// Zadatak 10, Vjezbe 2


int main(void) {

  int x, y;
  printf("Unesi dva trocifrena broja: ");
  scanf("%d %d", &x, &y);

  int prva_x = x / 100;
  int druga_y = (y / 10) % 10;

  int razlika = prva_x - druga_y;

  printf("Razlika brojeva %d i %d je %d!", prva_x, druga_y, razlika);

  
  return 0;
}
