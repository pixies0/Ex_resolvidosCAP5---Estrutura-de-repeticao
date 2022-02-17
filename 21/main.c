#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int num, soma = 0, contNum = 0, mediaNum = 0;
  int mediaPar = 0, contPar = 0, somaPar = 0;
  int percentImp, contImpar = 0;
  int maior, menor, media;

  printf("Numero:");
  scanf("%d", &num);
  maior = menor = num;

  while (num != 30000)
  {

    soma = soma + num;
    contNum++;

    if (num > maior)
      maior = num;
    if (num < menor)
      menor = num;

    if (num % 2 == 0)
    {
      contPar++;
      somaPar = somaPar + num;
    }
    else
      contImpar++;

    printf("Numero:");
    scanf("%d", &num);
  }

  system("pause");
  system("cls");

  if (contNum == 0)
    puts("Nenhum numero digitado");
  else
  {
    printf("Soma:%d\n", soma);
    printf("Numeros digitados:%d\n", contNum);
    media = soma / contNum;
    printf("Media dos numeros:%d\n", media);
    printf("Maior:%d\nMenor:%d\n", maior, menor);

    if (contPar == 0)
      puts("Nenhum numero par\n");
    else
    {
      mediaPar = somaPar / contPar;
      printf("Media dos pares:%d\n", mediaPar);
    }

    percentImp = (contImpar * 100) / contNum;
    printf("%d%% de numeros impares\n", percentImp);
  }
  return 0;
}