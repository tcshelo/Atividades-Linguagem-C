//Função: Recebe um número e mostra se é zero, positivo ou negativo.
#include <stdio.h>
int main(){
  int numero;
  printf("Digite um número: ");
  scanf("%d",&numero);
  if (numero>0){
    printf("O número %d é positivo!",numero);
  }
  else{
      if (numero<0){
        printf("O número %d é negativo!",numero);
      }
      else{
          printf("O número que você digitou é 0");
        }
  }
  return 0;
}
