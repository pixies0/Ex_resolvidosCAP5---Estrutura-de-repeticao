#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  float precoUnit, imp, transp, seguro, final, totalImp = 0;
  int pais;
  char meio, carga;
  printf("Preco Unitario:R$");
  scanf("%f", &precoUnit);

  do
  {

    if (precoUnit <= 100)
      imp = precoUnit * 0.05;
    else
      imp = precoUnit * 0.10;

    totalImp = totalImp + imp;

    printf("Pais de origem:\n1 - EUA\n2 - Mexico\n3 - Outro\n");
    scanf("%d", &pais);
    printf("Carga perigosa:\nS - Sim\nN - Nao\n");
    scanf(" %c", &carga);

    if (carga == 's' || carga == 'S')
    {
      if (pais == 1)
        transp = 50;
      if (pais == 2)
        transp = 21;
      if (pais == 3)
        transp = 24;
    }
    if (carga == 'n' || carga == 'N')
    {
      if (pais == 1)
        transp = 12;
      if (pais == 2)
        transp = 21;
      if (pais == 3)
        transp = 60;
    }

    printf("Meio de transporte:\nT - Terrestre\nF - Fluvial\nA - Aereo\n");
    scanf(" %c", &meio);

    if (pais == 2 || (meio == 'a' || meio == 'A'))
      seguro = precoUnit / 2;
    else
      seguro = 0;

    final = precoUnit + imp + transp + seguro;

    printf("Imposto: R$%.2f\n", imp);
    printf("Transporte: R$%.2f\n", transp);
    printf("Seguro: R$%.2f\n", seguro);
    printf("Preco final: R$%.2f\n", final);

    system("pause");
    printf("Preco Unitario:R$");
    scanf("%f", &precoUnit);

  } while (precoUnit > 0);

  printf("Total de impostos: R$%.2f\n", totalImp);

  return 0;
}