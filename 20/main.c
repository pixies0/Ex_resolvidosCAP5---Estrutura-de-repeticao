#include <stdlib.h>
#include <stdio.h>
#define valHoraAula 30;

int main(void)
{

  int codigo, numHorasAula;
  char sexo;
  float mediaM = 0, mediaF = 0;
  float salBruto, salLiq;
  int contM = 0, contF = 0;

  printf("Codigo:");
  scanf("%d", &codigo);
  while (codigo != 99999)
  {
    printf("Sexo:");
    scanf(" %c", &sexo);
    printf("Numero de horas/aulas:");
    scanf("%d", &numHorasAula);

    system("pause");
    system("cls");

    salBruto = numHorasAula * valHoraAula;

    if (sexo == 'M' || sexo == 'm')
    {
      salLiq = salBruto - (salBruto * 0.10);
      mediaM = mediaM + salLiq;
      contM++;
    }
    if (sexo == 'F' || sexo == 'f')
    {
      salLiq = salBruto - (salBruto * 0.05);
      mediaF = mediaF + salLiq;
      contF++;
    }

    printf("Codigo:%d\n", codigo);
    printf("Salario bruto:%.2f\n", salBruto);
    printf("Salario liquido:%.2f\n", salLiq);

    printf("Codigo:");
    scanf("%d", &codigo);
  }

  printf("\nEncerrando leitura...");
  if (contM == 0)
    puts("Nenhum professor homem");
  else
  {
    mediaM = mediaM / contM;
    printf("\nMedia de salario masculina:%.2f\n", mediaM);
  }

  if (contF == 0)
    puts("Nenhuma professora mulher");
  else
  {
    mediaF = mediaF / contF;
    printf("Media de salario feminina:%.2f\n", mediaF);
  }
  return 0;
}