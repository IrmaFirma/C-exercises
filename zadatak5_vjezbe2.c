#include <stdio.h>
#include <math.h>
// Zadatak 5, Vjezbe 2

int main(void) {

  int hp = 32;
  float n, health;
  printf("Unesite corona damage: ");
  scanf("%f", &n);

  if(n>0) health = hp - n;
  else health = hp + fabsf(n);

  if(health == 0) printf("HP = 0 - Umro si!");
  else if((n<0) && (health < 100)) printf("Dobio si melem za svoje rane, tvoj HP sada iznosi %.0f!", health);
  else if((health > 100) || (health < 0)) printf("HP = 0 - Umro si!");
  else printf("Preostalo ti je jos %.0f HP-a!", health);
  
  return 0;
}
