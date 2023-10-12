//nedovrsen
#include <stdio.h>
#include <string.h>
#include <math.h>
// Zadatak 4, Vjezbe 3

int main(void) {

  char op;
  float x, y;
  
  printf("Welcome to your friendly neighborhood digitron! \n \n");
  
  printf("Unesite dva broja u formatu (x y): ");
  scanf("%f %f", &x, &y);
  
  printf("Operacije koje su vam dostupne: \n");
  printf("+ za sabiranje, \n");
  printf("- za oduzimanje, \n");
  printf("* za mnozenje, \n");  
  printf("/ za dijeljenje, \n");
  printf("^ - za stepenovanje, \n");
  printf("$ - za korjenovanje \n \n");

  printf("Unesite operaciju koju zelite izvrsiti: ");
  scanf("%c", &op);

  if(op == '+'){
    float zbir = x + y;
    printf("\n");
    printf("Zbir brojeva %.2f i %.2f je %.2f \n", x, y, zbir);
    printf("\n");
    printf("HVALA NA KORISTENJU! \n");
    printf("ZDRAVO :)");
  }else if(op == '-'){
    float razlika = x - y;
    printf("\n");
    printf("Razlika brojeva %.2f i %.2f je %.2f \n", x, y, razlika);
    printf("\n");
    printf("HVALA NA KORISTENJU! \n");
    printf("ZDRAVO :)");
  }else if(op == '*'){
    float proizvod = x * y;
    printf("\n");
    printf("Proizvod brojeva %.2f i %.2f je %.2f \n", x, y, proizvod);
    printf("\n");
    printf("HVALA NA KORISTENJU! \n");
    printf("ZDRAVO :)");
  }else if(op == '/'){
    float kolicnik = x / y;
    if(y!=0){
      printf("\n");
      printf("Kolicnik brojeva %.2f i %.2f je %.2f \n", x, y, kolicnik);
      printf("\n");
      printf("HVALA NA KORISTENJU! \n");
      printf("ZDRAVO :)");       
    }else{
      printf("GRESKA: Dijeljenje sa nulom nije definisano! \n");
      printf("Digitron se gasi. Dovidjenja!");     
    }
  }else if(op == '$'){
    float korijen = sqrt(x);
    printf("\n");
    printf("Drugi korijen broja %.2f je %.2f \n", x, korijen); 
    printf("\n");
    printf("HVALA NA KORISTENJU! \n");
    printf("ZDRAVO :)");
  }else{
    printf("Unos nije validan. Digitron se gasi. Dovidjenja!");
  }
  
  return 0;
}
