//Função: Recebe um mês em formato númerico e mostra o nome do mesmo por extenso.
#include <stdio.h>
int main(){
  int mes;
  printf("Digite o mês em formato númerico: ");
  scanf("%d",&mes);
  switch (mes){
    case 1:
      printf("Janeiro");
      break;
    case 2:
      printf("Fevereiro");
      break;
    case 3:
      printf("Março");
      break;
    case 4:
      printf("Abril");
      break;
    case 5:
      printf("Maio");
      break;
    case 6:
      printf("Junho");
      break;
    case 7:
      printf("Julho");
      break;
    case 8:
      printf("Agosto");
      break;
    case 9:
      printf("Setembro");
      break;
    case 10:
      printf("Outubro");
      break;
    case 11:
      printf("Novembro");
      break;
    case 12:
      printf("Dezembro");
      break;
    default:
      printf("Escolha um número de 1 a 12!");
  }
  return 0;
}
