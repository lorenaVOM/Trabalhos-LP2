# include <stdio.h>
# include <stdlib.h>

int divisores (int m) {

  int div = 0;

  printf ("D(%d) = ", m);

  for (int i = 1; i <= m; i++) {
    if (m % i == 0) {
      printf ("%d ", i);
      div++;
    }
  }
  return div;
}

int fatorial (int m) {

  int fat;

  for (fat = 1; m > 1; m -= 1) {
    fat *= m;
  }
  return fat;
}

int soma (int m) {

  int soma_int = 0;

  for (int i = 1; i <= m; i++) {
    soma_int += i;
  }
  return soma_int;
}

main () {

  int m, fat, div, soma_int;

  do {

    printf ("\n- Se seu número for par: mostra os divisores.\n- Se seu número for ímpar < 10: mostra o fatorial.\n- Se seu número for ímpar >= 10: mostra a soma dos números inteiros de 1 até n.\n- Digite um número negativo para parar.");
    printf ("\nDigite um número inteiro positivo: \n");
    scanf ("%d", &m);

    if (m < 0) {
      break;
    }

    if (m % 2 == 0) {
      div = divisores (m);
      printf ("\nTotal de divisores: %d", div);
    }

    if (m % 2 != 0 && m < 10) {
      fat = fatorial (m);
      printf ("%d! = %d", m, fat);
    }

    if (m % 2 != 0 && m >= 10) {
      soma_int = soma (m);
      printf ("Soma dos inteiros de 1 até %d = %d", m, soma_int);
    }
  } while (m > 0);

}