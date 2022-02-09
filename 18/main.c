#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{

  float valor;
  printf("Valor:");
  scanf("%f", &valor);

  do
  {
    printf("Quadrado:%.2f\n", pow(valor, 2));
    printf("Cubo:%.2f\n", pow(valor, 3));
    printf("Raiz quadrada:%.2f\n", sqrt(valor));
    system("pause");
    system("cls");

    printf("Valor:");
    scanf("%f", &valor);
  } while (valor > 0);

  return 0;
}