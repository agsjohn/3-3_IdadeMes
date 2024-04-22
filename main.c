#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
  int anos, meses, dias, total;
  printf("Digite a sua idade em anos: ");
  scanf("%i", &anos);
  printf("Digite quantos meses: ");
  scanf("%i", &meses);
  while(meses < 0 || meses > 11){
    printf("Numero inválido, digite novamente: ");
    scanf("%i", &meses);
  }
  printf("Digite quatos dias: ");
  scanf("%i", &dias);
  while(dias < 0 || dias > 29){
    printf("Número inválido, digite novamente: ");
    scanf("%i", &dias);
  }
  total = (anos * 365) + (meses * 30) + dias;
  printf("Total de dias: %i", total);
}