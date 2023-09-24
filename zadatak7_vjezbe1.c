#include <stdio.h>
// Zadatak 7, Vjezbe 1

int main(void) {
  float yen;
  printf("Koliko YEN-a ste pronasli: ");
  scanf("%f", &yen);

  float km = yen * 0.015210;

  printf("Cestitamo! Bogatiji ste za %f KM! ", km);
  
  return 0;
}
