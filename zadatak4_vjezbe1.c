#include <stdio.h>
// Zadatak 4, Vjezbe 1

int main(void) {
  int t, r;
  printf("Zdravo! \n \n");
  printf("Unesi godinu u kojoj sada zivis: ");
  scanf("%d", &t);
  printf("Unesi svoju godinu rodjenja: ");
  scanf("%d", &r);

  int godine = t - r;

  printf("Ti sada imas %d ili %d godina... \n \n", godine-1, godine);
  printf("CAO!");
  return 0;
}
