#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  float salMin, quantWatts, valWatts, acrescimo;
  int tipo;
  float valPagar, soma = 0, contCons = 0, contaFinal;

  printf("Salario Minimo:");
  scanf("%f", &salMin);
  printf("Quantidade de KiloWatts:");
  scanf("%f", &quantWatts);
  valWatts = salMin / 8;
  printf("Valor de cada Kw: R$%.2f\n", valWatts);

  while (quantWatts != 0)
  {

    contaFinal = valWatts * quantWatts;
    printf("Tipo de consumidor:\n1 - Residencial\n2 - Comercial\n3 - Industrial\n");
    scanf("%d", &tipo);

    if (tipo == 1)
      acrescimo = contaFinal * 0.05;
    if (tipo == 2)
      acrescimo = contaFinal * 0.10;
    if (tipo == 3)
      acrescimo = contaFinal * 0.15;

    valPagar = contaFinal + acrescimo;
    soma = soma + valPagar;

    if (valPagar > 500 && valPagar < 1000)
      contCons++;

    printf("Valor a pagar: R$%.2f + R$%.2f = R$%.2f\n", contaFinal, acrescimo, valPagar);
    printf("Quantidade de KiloWatts:");
    scanf("%f", &quantWatts);
  }
  printf("Faturamento geral: R$%.2f\n", soma);
  printf("Consumidores que pagam entre R$500 e R$1000:%d", contCons);
  return 0;
}