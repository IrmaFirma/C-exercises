#include <stdio.h>
// Domaci 3, Vjezbe 1

int main(void) {

  int br = 0;

  for(int i = 1; i<=100; i++){
    if(i%5==0) br++;
  }
  printf("%d", br);

  return 0;
}
