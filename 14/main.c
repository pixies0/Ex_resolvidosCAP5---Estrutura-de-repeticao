#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  float valDivida, valJuros, valParce, total;
  int numParce, i, juros;

  printf("Valor da divida: R$");
  scanf("%f", &valDivida);

  system("pause");
  system("cls");

  juros = 0;
  numParce = 1;
  total = valDivida;
  valParce = valDivida;

  printf("Total: R$%.2f\n", total);
  printf("Juros: %d\n", juros);
  printf("Numero de parcelas:%d\n", numParce);
  printf("Valor da parcela: R$%.2f\n", valParce);

  juros = juros + 10;
  numParce = numParce + 2;

  for (i = 1; i <= 4; i++)
  {
    system("pause");
    system("cls");
    valJuros = (valDivida * juros) / 100;
    total = valDivida + valJuros;
    valParce = total / numParce;
    printf("Total: R$%.2f\n", total);
    printf("Juros: %d\n", juros);
    printf("Numero de parcelas:%d\n", numParce);
    printf("Valor da parcela: R$%.2f\n", valParce);

    juros = juros + 5;
    numParce = numParce + 3;
  }

  return 0;
}