// Faça um programa em C que leia vários números até encontrar o número 999. A seguir, imprima a quantidade de números lidos, a média dos números, o maior e o menor número encontrado. 

#include <stdio.h>
#include <stdlib.h>

main () {
  
  float media;
  int num, cont, total, maior, menor;

  total = 0;
  cont = 0;

  printf ("Insira números para o cálculo da média. Digite 999 para parar: ");
  scanf ("%d", &num);

  while (num != 999) {
    total += num;
    if (cont == 0) {
      maior = menor = num;
    }
    else {
      if (num > maior) {
      maior = num;
    }
    if (num < menor) {
      menor = num;
    }
    }
    cont += 1;
    printf ("Insira números para o cálculo da média. Digite 999 para parar: ");
    scanf ("%d", &num);
  }

  media = total / cont;
  printf ("A média dos números digitados é: %.2f\n", media);

  printf ("O maior número digitado foi %d e o menor %d", maior, menor);

  return 0;

}