# include <stdio.h>
# include <stdlib.h>

int divisores (m) {

  int div;

  for (int i = 0; i <= m; i++) {
    if (m % i == 0) {
      printf ("%d ", i);
    }
  }
  return m;
}

int fatorial (m) {

  int fat;

  for (fat = 1; m > 1; m -= 1) {
    fat *= m;
  }
  return fat;
}

int soma (m) {

  int soma_int;
  soma_int = 0;

  for (int i = 0; i < m; i++) {
    soma_int += i;
  }
  return m;
}

main () {

  int m, fat, div;

  printf ("Digite um número inteiro positivo: \n");
  scanf ("%d", &m);

  if (m % 2 == 0) {
    div = divisores (m);
    printf ("%d", divisores (m));
  }

  if (m % 2 != 0 && m < 10) {
    fat = fatorial (m);
    printf ("%d! = %d", m, fat);
  }

  if (m % 2 != 0 && m >= 10) {
    printf ("%d", soma (m));
  }

}