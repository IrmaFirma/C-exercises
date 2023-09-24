#include <stdio.h>
// Zadatak 2, Vjezbe 1

int main(void) {
  float a, b;
  printf("Unesite duzine stranica pravougaonika (u formatu a, b): ");
  scanf("%f %f", &a, &b);
  float povrsina = a * b;
  float obim = (2 * a) + (2 * b);
  printf("Obim pravougaonika iznosi %f, a povrsina %f", obim, povrsina);

  return 0;
}
