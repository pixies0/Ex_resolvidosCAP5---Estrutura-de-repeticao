#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int idade, total = 0, totalF = 0, totalM = 0;
  int mediaIdadeM = 0, percentMExp;
  int mulherExp = 0, menorIdadeF;
  int soma1 = 0, soma2 = 0, contM1 = 0, contM2 = 0;
  char sexo, exp;

  printf("Idade:");
  scanf("%d", &idade);

  while (idade != 0)
  {
    printf("Sexo: F ou M");
    scanf(" %c", &sexo);
    printf("Experiencia: S ou N");
    scanf(" %c", &exp);

    if (sexo == 'F' || sexo == 'f')
      totalF++;
    if (sexo == 'M' || sexo == 'm')
      totalM++;

    if ((sexo == 'M' || sexo == 'm') && idade > 45)
      contM1++;

    if ((sexo == 'M' || sexo == 'm') && (exp == 'S' || exp == 's'))
    {
      soma1 = soma1 + idade;
      contM2++;
    }

    if ((sexo == 'F' || sexo == 'f') && (exp == 'S' || exp == 's') && idade < 21)
      mulherExp++;

    if ((sexo == 'F' || sexo == 'f') && (exp == 'S' || exp == 's'))
    {
      if (total = 0)
      {
        menorIdadeF = idade;
        total++;
      }
      else
      {
        if (idade < menorIdadeF)
          menorIdadeF = idade;
      }
    }
    system("pause");
    system("cls");
    printf("Idade:");
    scanf("%d", &idade);
  }

  system("pause");
  system("cls");
  printf("Masculino:%d\n", totalM);
  printf("Feminino:%d\n", totalF);

  if (contM2 == 0)
    puts("Nenhum homem com experiencia");
  else
  {
    mediaIdadeM = soma1 / contM2;
    printf("Idade media de homens com experiencia:%d\n", mediaIdadeM);
  }

  if (totalM == 0)
    puts("Nenhum Homem");
  else
  {
    percentMExp = (contM1 * 100) / totalM;
    printf("%d%% de homens com mais de 45 anos\n", percentMExp);
  }
  printf("Mulheres menores de 21 anos com experiencia:%d\n", mulherExp);
  printf("Menor idade entre mulheres com experiencia:%d\n", menorIdadeF);
  return 0;
}