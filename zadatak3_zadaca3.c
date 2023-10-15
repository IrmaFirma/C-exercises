#include <math.h>
#include <stdio.h>
#include <string.h>
// Zadatak 3, Zadaca 3 

int main(void) {

  int res = 0;
  char pt1;
  int pt2, pt3;
  printf("Dobrodosli na planetu Paks! Ispunite ovaj upitnik radi klasifikacije:  \n"); 

  printf("Koja je vasa boja ociju? \n (B - bijela, Z - zelena, L - ljubicasta) ");
  scanf("%c", &pt1);
  
  if(pt1 == 'B' || pt1 == 'b') res += 3;
  else if(pt1 == 'Z' || pt1 == 'z') res += 5;
  else if(pt1 == 'L' || pt1 == 'l') res += 15;
  else res += 0;

  printf("Koliko rogova imate? \n (0, 1, 3) ");
  scanf("%d", &pt2);

  if(pt2 == 0) res += 4;
  else if(pt2 == 1) res += 7;
  else if(pt2 == 3) res += 15;
  else res += 0;

  printf("Koliko krila imate? \n (1, 2, 4) ");
  scanf("%d", &pt3);

  if(pt3 == 1) res += 5;
  else if(pt3 == 2) res += 10;
  else if(pt2 == 3) res += 15;
  else res += 0;

  if(res >= 0 && res<= 20) printf("Pripadas klasi mandica.");
  else if(res >= 21 && res <=44) printf("Pripadas klasi pulova.");
  else if(res == 45) printf("Pripadas klasi cuvara vremena.");


  return 0;
}
