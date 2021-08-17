//Função: Recebe dois números e mostra na tela o intervalo númerico entre eles
#include <stdio.h>
int main(){
    int fim,count;
    printf("Digite o ínicio do intervalo: \n");
    scanf("%d",&count);
    printf("Digite o final do intervalo: \n");
    scanf("%d",&fim);
    printf("O intervalo entre %d e %d é: \n",count,fim);

    while(count<=fim){
    printf("%d\n",count);
    count=count+1;
  }
  return 0;
}
