//Função: Verifica quais números são impares dentro de um intervalo definido 1-20
#include <stdio.h>
int main(){
  int count;
  printf("Esses sao os numeros impares de 1 a 20:\n");
  count=20;
  for(int i=0; i<=count; i++){
    if(i%2>0){
      printf("%d\n",i);
    }
  }

  return 0;
}
