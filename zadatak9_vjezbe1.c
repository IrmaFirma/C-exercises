#include <stdio.h>
// Zadatak 9, Vjezbe 1
// 2 decimale

int main(void) {
  float yen;
  printf("Koliko YEN-a ste pronasli: ");
  scanf("%f", &yen);

  float km = yen * 0.015210;

  printf("Cestitamo! Bogatiji ste za %.2f KM! ", km);
  
  return 0;
}
