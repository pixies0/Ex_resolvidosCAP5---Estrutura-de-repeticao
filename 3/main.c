#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int n, num, i, j;
  float fat;

  printf("Digite quantidade de numeros a ser lidos:");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    printf("Digite um numero:");
    scanf("%d", &num);
    fat = 1;
    for (j = 1; j <= num; j++)
      fat = fat * j;

    printf("Fatorial:%.2f\n", fat);
  }
  system("pause");
  system("cls");
  return 0;
}