#include <math.h>
#include <stdio.h>
#include <string.h>
// Zadatak 5, Vjezbe 3

int main(void) {

  int h; // sati
  printf("Koliko je sati: ");
  scanf("%d", &h);

  if ((h >= 0) && (h <= 11)) {
    printf("Dobro jutro!");
  } else if ((h >= 12) && (h <= 18)) {
    printf("Dobar dan!");
  } else if ((h >= 19) && (h <= 23)) {
    printf("Dobro vece!");
  } else {
    printf("Nepostojeci sat!");
  }

  return 0;
}
