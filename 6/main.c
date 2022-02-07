#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int codigo, numHorasTrab;
  char turno, categ;
  float salMin = 450, valHoraTrab, salInicial, auxAlim, salFinal;

  int i;
  for (i = 1; i <= 10; i++)
  {
    printf("Preencha de acordo com as informacoes do funcionario.\n");
    printf("Codigo:");
    scanf("%d", &codigo);
    printf("Numero de horas:");
    scanf("%d", &numHorasTrab);
    printf("Turno:");
    scanf(" %c", &turno);
    printf("Categoria:");
    scanf(" %c", &categ);

    system("cls");

    if (turno != 'm' && turno != 'M' && turno != 'v' && turno != 'V' && turno != 'n' && turno != 'N')
    {
      puts("Opcao invalida");
      break;
    }

    if (categ != 'o' && categ != 'O' && categ != 'g' && categ != 'G')
    {
      puts("Opcao invalida");
      break;
    }

    if (categ == 'g' || categ == 'G')
    {
      if (turno == 'n' || turno == 'N')
        valHoraTrab = 0.18 * salMin;
      else
        valHoraTrab = 0.15 * salMin;
    }
    else
    {
      if (turno == 'n' || turno == 'N')
        valHoraTrab = 0.13 * salMin;
      else
        valHoraTrab = 0.10 * salMin;
    }
    salInicial = numHorasTrab * valHoraTrab;
    if (salInicial <= 300)
      auxAlim = 0.20 * salInicial;
    else if (salInicial <= 600)
      auxAlim = 0.15 * salInicial;
    else
      auxAlim = 0.05 * salInicial;

    salFinal = salInicial + auxAlim;
    printf("Codigo:%d\nNumero de horas:%d\nValor da hora:%.2f\n", codigo, numHorasTrab, valHoraTrab);
    printf("Salario Inicial:%.2f\nAuxilio Alimentacao:%.2f\nSalario Final:%.2f\n", salInicial, auxAlim, salFinal);
    system("pause");
    system("cls");
  }

  return 0;
}