#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int contTeam, contPlayer, idade, contMenor = 0;
  float peso, altura, mediaIdade, mediaAltura, percent, above80 = 0;

  for (contTeam = 0; contTeam < 5; contTeam++)
  {
    mediaIdade = 0;
    for (contPlayer = 0; contPlayer < 11; contPlayer++)
    {
      printf("Idade:");
      scanf("%d", &idade);
      printf("Peso em kg:");
      scanf("%f", &peso);
      printf("Altura em cm:");
      scanf("%f", &altura);

      if (idade < 18)
        contMenor++;

      mediaIdade = mediaIdade + idade;
      mediaAltura = mediaAltura + altura;

      if (peso > 80)
        above80++;

      system("pause");
      system("cls");
    }
    printf("Media de idades do time:%.2f\n", mediaIdade / 11);
    system("pause");
    system("cls");
  }
  printf("Jogadores com menos de 18 anos:%d\n", contMenor);
  mediaAltura = mediaAltura / 55;
  printf("Media de altura do campeonato:%.2f\n", mediaAltura);
  percent = above80 * 100 / 55;
  printf("%.2f%% de jogadores com mais de 80kg\n", percent);

  return 0;
}