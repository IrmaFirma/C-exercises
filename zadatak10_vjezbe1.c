#include <stdio.h>
// Zadatak 10, Vjezbe 1

int main(void) {
  float x, y;
  printf("DOBRODOSLI U REALNI KALKULATOR! \n \n");
  printf("Unesite 2 broja(u formatu x y): ");
  scanf("%f %f", &x, &y);
  float zbir = x + y;
  float razlika = x - y;
  float proizvod = x * y;
  float kolicnik = x / y;
  printf("\n");
  printf("Zbir brojeva %.2f i %.2f iznosi: %.2f \n \n", x, y, zbir);
  printf("Razlika brojeva %.2f i %.2f iznosi: %.2f \n \n", x, y, razlika);
  printf("Proizvod brojeva %.2f i %.2f iznosi: %.2f \n \n", x, y, proizvod);
  printf("Kolicnik brojeva %.2f i %.2f iznosi: %.2f", x, y, kolicnik);

  return 0;
}
