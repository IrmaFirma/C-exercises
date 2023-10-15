#include <math.h>
#include <stdio.h>
#include <string.h>
// Zadatak 2, Zadaca 3 

int main(void) {

  int sati, minute, sekunde;

  printf("Unesite sate, minute i sekunde: ");
  scanf("%d %d %d", &sati, &minute, &sekunde);

  printf("Vrijeme u sekundama je: %d", sati * 3600 + minute * 60 + sekunde);
  
  return 0;
}
