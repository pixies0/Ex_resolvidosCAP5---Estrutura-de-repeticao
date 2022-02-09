#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int i;
  float precoUnit, custoEst, imposto, precoFinal;
  float adicional = 0, totalImposto = 0;
  float maiorPrecoF, menorPrecoF;
  int contBarato = 0, contNormal = 0, contCaro = 0;
  char refrig, categ;

  for (i = 1; i <= 12; i++)
  {
    printf("Preco: R$");
    scanf("%f", &precoUnit);
    printf("Precisa de refrigeracao S/N:");
    scanf(" %c", &refrig);
    printf("A - Alimentacao\nL - Limpeza\nV - Vestuario\nCategoria:");
    scanf(" %c", &categ);

    system("pause");
    system("cls");

    if (precoUnit <= 20)
    {
      if (categ == 'a' || categ == 'A')
        custoEst = 2;
      if (categ == 'l' || categ == 'L')
        custoEst = 3;
      if (categ == 'v' || categ == 'V')
        custoEst = 4;
    }
    else if (precoUnit <= 50)
    {
      if (refrig == 's' || refrig == 'S')
        custoEst = 6;
      else
        custoEst = 0;
    }
    else
    {
      if (refrig == 's' || refrig == 'S')
      {
        if (categ == 'a' || categ == 'A')
          custoEst = 5;
        if (categ == 'l' || categ == 'L')
          custoEst = 2;
        if (categ == 'v' || categ == 'V')
          custoEst = 4;
      }
      else
      {
        if (categ == 'a' || categ == 'A' || categ == 'v' || categ == 'V')
          custoEst = 0;
        if (categ == 'l' || categ == 'L')
          custoEst = 1;
      }
    }
    printf("Custo de estocagem: R$%.2f\n", custoEst);

    if (categ != 'a' && categ != 'A' && refrig != 's' && refrig != 'S')
      imposto = precoUnit * 0.02;
    else
      imposto = precoUnit * 0.04;

    printf("Imposto: R$%.2f\n", imposto);
    totalImposto = totalImposto + imposto;

    precoFinal = precoUnit + custoEst + imposto;
    printf("Preco Final: R$%.2f\n", precoFinal);

    if (i == 1)
    {
      maiorPrecoF = precoFinal;
      menorPrecoF = precoFinal;
    }
    else
    {
      if (precoFinal > maiorPrecoF)
        maiorPrecoF = precoFinal;
      if (precoFinal < menorPrecoF)
        menorPrecoF = precoFinal;
    }

    printf("Classificacao: ");

    if (precoFinal <= 20)
    {
      printf("Barato");
      contBarato++;
    }
    else if (precoFinal <= 100)
    {
      printf("Normal");
      contNormal++;
    }
    else
    {
      printf("Caro");
      contCaro++;
    }
    adicional = adicional + custoEst + imposto;
    system("pause");
    system("cls");
  }

  printf("Media de adicionais: R$%.2f\n", adicional / 12);
  printf("Maior preco final: R$%.2f\n", maiorPrecoF);
  printf("Menor preco final: R$%.2f\n", menorPrecoF);
  printf("Total de impostos: R$%.2f\n", totalImposto);
  printf("Produtos baratos:%d\nProdutos Normais:%d\nProdutos Caros:%d\n", contBarato, contNormal, contCaro);
  return 0;
}