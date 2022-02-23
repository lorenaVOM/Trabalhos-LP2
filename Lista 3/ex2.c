# include <stdio.h>
# include <stdlib.h>


float primeiro_valor (float x) {

  float soma;
  soma = 0;

  for (int c = 1; c <= 100; c++) {
    soma += (x + c) / c;
  }
  return soma;
}

float segundo_valor (float x) {

  float soma = 0;
  int denominador = 100;
  
  for (int c = 1; c <= 100; c++) {
      if (c % 2 == 0) {
        soma -= ((x * x) + c) / denominador;
      }
      else {
        soma += ((x * x) + c) / denominador;
      }
      denominador--;
    }
  return soma;
}

main () {

  float x;

  printf ("Digite o valor de x: ");
  scanf ("%f", &x);

  if (x > 0) {
    printf ("Y = %.2f", primeiro_valor (x));
  }

  if (x <= 0) {
    printf ("Y = %.2f", segundo_valor (x));
  }

}