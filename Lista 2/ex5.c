//Leia um conjunto de números inteiros, até que um número negativo seja digitado. Ao final, calcule e imprima: a) A quantidade de números válidos lida | b) O percentual de números pares | c) A média dos números ímpares | d) O maior e o menor número lido

#include <stdio.h>
#include <stdlib.h>

main () {
  
  int num, cont, pares, impares, maior, menor, cont_imp;
  float porcentagem, media;

  cont = 0;
  pares = 0;
  cont_imp = 0;
  impares = 0;
  maior = 0;
  menor = 0;

  printf ("Digite um conjunto de números inteiros (-1 para parar): ");
  scanf ("%d", &num);

  do {
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
    if (num % 2 == 0) {
      pares += 1;
    }
    else {
      impares += num;
      cont_imp += 1;
    }
    cont += 1;
    printf ("Digite um conjunto de números inteiros (-1 para parar): ");
    scanf ("%d", &num);
    if (num == -1) {
      break;
    }
  } while (num > 0 && num != -1);

  porcentagem = (pares * 100) / cont;
  media = impares / cont_imp;

  printf ("Foram digitados %d números válidos.\n %.2f foi a porcentagem dos números pares digitados.\n%.2f foi a média dos números ímpares digitados.\nO maior número digitado foi %d e o menor %d.", cont, porcentagem, media, maior, menor);

  return 0;

}