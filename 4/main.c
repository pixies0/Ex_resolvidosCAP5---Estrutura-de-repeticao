#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int cont, cod, numVei, numAcid;
  int maior, cidMaior, menor, cidMenor;
  int mediaVei, mediaAcid;
  int somaVei = 0;
  int somaAcid = 0;
  int contAcid = 0;

  for (cont = 1; cont <= 5; cont++)
  {
    printf("Codigo cidade:");
    scanf("%d", &cod);
    printf("Numero de veiculos:");
    scanf("%d", &numVei);
    printf("Numero de acidentes:");
    scanf("%d", &numAcid);

    if (cont == 1)
    {
      maior = numAcid;
      cidMaior = cod;
      menor = numAcid;
      cidMenor = cod;
    }
    else
    {
      if (numAcid > maior)
      {
        maior = numAcid;
        cidMaior = cod;
      }
      if (numAcid < menor)
      {
        menor = numAcid;
        cidMenor = cod;
      }
    }
    somaVei = somaVei + numVei;
    if (numVei < 2000)
    {
      somaAcid = somaAcid + numAcid;
      contAcid = contAcid + 1;
    }
    system("cls");
  }
  printf("Maior numero de acidentes:%d Codigo da cidade:%d\n", maior, cidMaior);
  printf("Menor numero de acidentes:%d Codigo da cidade:%d\n", menor, cidMenor);
  system("pause");
  system("cls");
  mediaVei = somaVei / 5;
  printf("Media de veiculos:%d\n", mediaVei);

  if (contAcid == 0)
    puts("Não foi digitada nenhuma cidade com menos de 2000 veículos");
  else
  {
    mediaAcid = somaAcid / contAcid;
    printf("Media de acidentes:%d\n", mediaAcid);
  }

  system("pause");
  return 0;
}