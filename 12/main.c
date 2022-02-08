#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  // Não escrito no enunciado, mas conclui-se que o valor de um salario minimo é 450 reais;
  int i, numOp, numOpMaior, pecaFab, totalPecas = 0, contM = 0, contF = 0, mediaM = 0, mediaF = 0;
  float salOp, totalFolha = 0, salMaior;
  char sexoOp;

  for (i = 0; i < 15; i++)
  {
    printf("Numero do %d° operario:", i + 1);
    scanf("%d", &numOp);
    printf("Pecas fabricadas pelo %d° operario:", i + 1);
    scanf("%d", &pecaFab);
    printf("Sexo M/F:");
    scanf(" %c", &sexoOp);

    if (pecaFab <= 30)
      salOp = 450;
    else if (pecaFab <= 50)
      salOp = 450 + ((pecaFab - 30) * 0.03 * 450);
    else
      salOp = 450 + ((pecaFab - 30) * 0.05 * 450);

    system("pause");
    system("cls");

    printf("O %d° operario recebe R$%.2f reais\n", i + 1, salOp);

    totalFolha = totalFolha + salOp;
    totalPecas = totalPecas + pecaFab;

    if (sexoOp == 'm' || sexoOp == 'M')
    {
      mediaM = mediaM + pecaFab;
      contM++;
    }
    else
    {
      mediaF = mediaF + pecaFab;
      contF++;
    }

    if (i == 1)
    {
      salMaior = salOp;
      numOpMaior = numOp;
    }
    else
    {
      if (salOp > salMaior)
      {
        salMaior = salOp;
        numOpMaior = numOp;
      }
    }
  }

  system("pause");
  system("cls");
  printf("Total da folha de pagamento: R$%.2f\n", totalFolha);
  printf("Total de pecas fabricadas:%d\n", totalPecas);

  if (contM == 0)
    printf("Nenhum homem registrado\n");
  else
  {
    mediaM = mediaM / contM;
    printf("Media de pecas fabricada por homens:%d\n", mediaM);
  }
  if (contF == 0)
    printf("Nenhuma mulher registrada\n");
  else
  {
    mediaF = mediaF / contF;
    printf("Media de pecas fabricada por mulheres:%d\n", mediaF);
  }

  printf("O numero do operario de maior salario:%d\n", numOpMaior);
  return 0;
}