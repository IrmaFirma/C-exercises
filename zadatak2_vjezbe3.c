#include <stdio.h>
#include <string.h>
// Zadatak 2, Vjezbe 3

int main(void) {

  printf("DAY 0! \n");
  printf("Postavljate vasu lozinku (cetverocifren broj): \n");
  int sifra;
  scanf("%d", &sifra);

  printf("DAY 4! \n");
  printf("Desila se kradja...Mafija pokrece vas program! \n \n");
  printf("Sarmica dobrodoslica! \n");
  printf("Unesite vasu sifru: ");
  int sifra1; 
  scanf("%d", &sifra1);

  if(sifra1 != sifra){
    printf("\n");
    printf("Unijeli ste pogresnu sifru! Imate jos jedan pokusaj! \n \n");
    printf("Unesite vasu sifru: ");
    int sifra2;
    scanf("%d", &sifra2);
    if(sifra2 != sifra){
      printf("Pogresna cifra po drugi put! Sayonara!");
    }else{
      printf("Uspjesno ste se ulogovali! Koji recept vas zanima? \n");
      printf("***kraj***");
    }
  }else{
    printf("\n");
    printf("Uspjesno ste se ulogovali! Koji recept vas zanima? \n");
    printf("***kraj***");
  }
  
  return 0;
}
