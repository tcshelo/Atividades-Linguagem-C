//Função: Recebe três números e os coloca em ordem decrescente.
#include <stdio.h>
int main(){
  int numero1,numero2,numero3;
  printf("Digite o primeiro número: ");
  scanf("\n%d",&numero1);
  printf("Digite o segundo número: ");
  scanf("\n%d",&numero2);
  printf("Digite o terceiro número: ");
  scanf("\n%d",&numero3);

  if(numero1>numero2 && numero2>numero3){
    printf("%d > %d > %d",numero1,numero2,numero3);
  }
  else{
    if(numero1>numero3 && numero3>numero2){
      printf("%d > %d > %d",numero1,numero3,numero2);
    }
    else{
      if(numero2>numero1 && numero1>numero3){
        printf("%d > %d > %d",numero2,numero1,numero3);
      }
      else{
        if(numero2>numero3 && numero3>numero1){
          printf("%d > %d > %d",numero2,numero3,numero1);
        }
        else{
          if(numero3>numero1 && numero1>numero2){
            printf("%d > %d > %d",numero3,numero1,numero2);
          }
          else{
            if(numero3>numero1 && numero2>numero1){
              printf("%d > %d > %d",numero3,numero2,numero1);
            }
          }
        }
      }
    }
  }
  return 0;
}
