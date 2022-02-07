//O valor do seno pode ser obtido com através da série a seguir: sen x = X - X^3/3 + X^5/5 - X^7/7 + . . . Escreva um programa que tabele os valores para um dado valor de X (escolhido pelo usuário), de 10 a 20 termos.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main () {

  float numX, senX, fat;
  int cont, resp;

  cont = 1;

  printf ("Digite um número para calcular seu seno: ");
  scanf ("%f", &numX);

  for (cont = 1; cont <=20; cont++) {
    fat = cont + (cont - 1);
    resp = fat - 1;
    while (resp > 1) {
      fat = fat * resp;
      resp -= resp;
    }

    senX = pow(numX, cont + (cont - 1)) / fat;

    if (cont > 10) {
      printf ("%.2f\n", senX);
    }

  }

  return 0;

}