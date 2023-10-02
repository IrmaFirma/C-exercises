#include <stdio.h>
// Zadatak 3, Vjezbe 2

int main(void) {

  int x, y, z;
  int max = x;
  printf("Unesite tri broja (x y z): ");
  scanf("%d %d %d", &x, &y, &z);

  if((x<y) && (x<z)) max = x;
  else if((y<x) && (y<z)) max = y;
  else if((z<y) && (z<x)) max = z;
  else if ((x==y) && (x==z)) max = x;
  else if((x == max) && (y==x)) max = x;
  else if((x == max) && (z==x)) max = x;
  else if((y == max) && (z==y)) max = y;
  else if((y == max) && (x==y)) max = y; 
  else if((z == max) && (z==x)) max = z;
  else if((z == max) && (z==y)) max = z;

  if(max == x) printf("Najmanji broj je: %d", x);
  else if(max == y) printf("Najmanji broj je: %d", y);
  else printf("Najmanji broj je: %d", z);
  
  return 0;
}
