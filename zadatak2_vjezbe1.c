#include <stdio.h>
// Zadatak 2, Vjezbe 1
//TODO: Input with commas?

int main(void) {
  float a, b;
  printf("Unesite duzine stranica pravougaonika (u formatu a, b): ");
  scanf("%f %f", &a, &b);
  int povrsina = a * b;
  int obim = (2 * a) + (2 * b);
  printf("Obim pravougaonika iznosi %d, a povrsina %d", obim, povrsina);

  return 0;
}
