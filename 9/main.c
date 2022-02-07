#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  float nota1, nota2, mediaAluno, mediaClasse, soma = 0;
  int i, contAprov = 0, contExame = 0, contReprov = 0;

  for (i = 0; i < 6; i++)
  {
    printf("Notas:");
    scanf("%f %f", &nota1, &nota2);

    mediaAluno = (nota1 + nota2) / 2;
    printf("Media do aluno:%.2f\n", mediaAluno);
    soma = soma + mediaAluno;

    if (mediaAluno < 3)
    {
      printf("Aluno Reprovado\n");
      contReprov++;
    }
    else if (mediaAluno < 7)
    {
      printf("Aluno de Exame\n");
      contExame++;
    }
    else
    {
      printf("Aluno Aprovado\n");
      contAprov++;
    }
    system("pause");
    system("cls");
  }

  system("cls");
  mediaClasse = soma / 6;

  printf("Alunos aprovados:%d\nAlunos de exame:%d\nAlunos reprovados:%d\n", contAprov, contExame, contReprov);
  printf("Media da turma:%.2f", mediaClasse);
  return 0;
}