#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int op;
  float sal, imp, aumento, novoSal;

  do
  {
    printf("Menu de opcoes:\n1 - Imposto\n2 - Novo salario\n3 - Classificacao\n4 - Finalizar programa\n");
    scanf("%d", &op);

    if (op > 4 || op < 1)
    {
      puts("Opcao invalida");
      break;
    }
    if (op == 1)
    {
      printf("Salario:R$");
      scanf("%f", &sal);
      if (sal < 500)
        imp = sal * 0.05;
      else if (sal <= 850)
        imp = sal * 0.10;
      else
        imp = sal * 0.15;

      printf("Imposto: R$%.2f\n", imp);
    }
    if (op == 2)
    {
      printf("Salario:R$");
      scanf("%f", &sal);
      if (sal < 450)
        aumento = 100;
      else if (sal <= 750)
        aumento = 75;
      else if (sal <= 1500)
        aumento = 50;
      else
        aumento = 25;

      novoSal = sal + aumento;
      printf("Aumento: R$%.2f\nNovo Salario: R$%.2f\n", aumento, novoSal);
    }
    if (op == 3)
    {
      printf("Salario:R$");
      scanf("%f", &sal);
      if (sal <= 700)
        puts("Mal remunerado");
      else
        puts("Bem remunerado");
    }
    if (op == 4)
      puts("Finalizando programa...");

  } while (op != 4);
  return 0;
}