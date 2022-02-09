#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int m, n, i, soma;

  printf("Valores:");
  scanf("%d %d", &m, &n);

  while (m < n)
  {
    soma = 0;
    for (i = m; i <= n; i++)
    {
      printf("%d ", i);
      soma = soma + i;
    }
    printf("Soma:%d\n", soma);
    system("pause");
    system("cls");
    printf("Valores:");
    scanf("%d %d", &m, &n);
  }

  return 0;
}
