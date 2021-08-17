//Função: Recebe três notas de n alunos de uma turma, mostra a média de cada um e por fim a média geral da turma inteira.
#include <stdio.h>
int main(){
  int tamanhoTurma;
  double nota1,nota2,nota3,mediaAluno,mediaTurma;

  printf("Quantos alunos tem nessa turma?\n");
  scanf("%d",&tamanhoTurma);
  nota1=0;
  nota2=0;
  nota3=0;
  mediaAluno=0;
  mediaTurma=0;
  for(int i=1; i<=tamanhoTurma; i++){
    printf("\nAluno %d",i);
    printf("\nNota prova 1:");
    scanf("%lf",&nota1);
    printf("Nota prova 2:");
    scanf("%lf",&nota2);
    printf("Nota prova 3:");
    scanf("%lf",&nota3);
    mediaAluno= (nota1+nota2+nota3)/3;
    printf("Média: %.2lf",mediaAluno);
    mediaTurma= mediaAluno+ mediaTurma;
  }
  mediaTurma= mediaTurma/tamanhoTurma;
  printf("\nMédia de notas dessa turma: %.2lf\n",mediaTurma);
  return 0;
}
