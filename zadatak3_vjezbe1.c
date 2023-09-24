#include <stdio.h>
// Zadatak 3, Vjezbe 1

int main(void) {
  int x, y;
  printf("DOBRODOSLI U KALKULATOR! \n \n");
  printf("Unesite 2 broja(u formatu x y): ");
  scanf("%d %d", &x, &y);
  int zbir = x + y;
  int razlika = x - y;
  int proizvod = x * y;
  int kolicnik = x / y;
  int ostatak = x % y;
  printf("\n");
  printf("Zbir brojeva %d i %d iznosi: %d \n \n", x, y, zbir);
  printf("Razlika brojeva %d i %d iznosi: %d \n \n", x, y, razlika);
  printf("Proizvod brojeva %d i %d iznosi: %d \n \n", x, y, proizvod);
  printf("Kolicnik brojeva %d i %d iznosi: %d, sa ostatkom %d", x, y, kolicnik, ostatak);

  return 0;
}
