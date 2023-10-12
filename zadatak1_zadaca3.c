#include <math.h>
#include <stdio.h>
#include <string.h>
// Zadatak 1, Zadaca 3
//nedovrsen! 

int main(void) {

  int arr[6];
  for(int i = 0; i<6; i++){
    scanf("%d", &arr[i]);
  }

  float avg = 0, sum = 0;
  for(int i = 0; i<6; i++){
      sum = sum + arr[i];
  }

  avg = sum / 6; 

  if(avg < 1.5) printf("Nazalost, uspjeh u toku proteklog polugodista nije bio zadovoljavajuc!");
  else if(avg >= 1.5 && avg < 2.5) printf("Uspjeh u toku proteklog polugodista je bio zadovoljavajuci!");
  else if(avg >= 2.5 && avg < 3.5) printf("Cestitamo, u toku proteklog polugodista je ostvaren dobar uspjeh! Uz malo truda sigurno mozes postici i vrlo dobar ili odlican uspjeh!");
  else if(avg >= 3.5 && avg < 4.5) printf("Cestitamo, u toku proteklog polugodista je ostvaren vrlo dobar upsjeh! Samo nastavi tako!");
  else if(avg >= 4.5 && avg <=5) printf("Cestitamo, u toku proteklog polugodista je ostvaren odlican uspjeh! Svaka cast!");

  
  return 0;
}
