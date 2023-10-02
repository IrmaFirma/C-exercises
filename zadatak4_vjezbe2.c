#include <stdio.h>
// Zadatak 4, Vjezbe 2

int main(void) {

  int n;
  printf("Unesite broj: ");
  scanf("%d", &n);

  if(n%3==0) printf("Uneseni broj je djeljiv sa 3. \n");
  if(n%5==0) printf("Uneseni broj je djeljiv sa 5. \n");
  if((n%5!=0) && (n%3!=0)) printf("Broj nije djeljiv ni sa 3 ni sa 5");
  
  return 0;
}
