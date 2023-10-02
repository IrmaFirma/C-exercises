#include <stdio.h>
// Zadatak 2, Vjezbe 2

int main(void) {

  int x, y;
  printf("Unesite dva broja (a,b): ");
  scanf("%d, %d", &x, &y);

  if(x<y) printf("Manji broj je: %d", x);
  else if(y<x) printf("Manji broj je: %d", y);
  else printf("Uneseni brojevi su jednaki!");

  

  return 0;
}
