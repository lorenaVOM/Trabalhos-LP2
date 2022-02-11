//Entre com a idade de várias pessoas (finalize a leitura com um número negativo) e imprima a quantidade de pessoas que tinham mais de 21 anos e a média de idade das pessoas com mais de 60.

#include <stdio.h>
#include <stdlib.h>

main () {

  int idade,cont1, cont2, soma_idades;
  float media_idades;

  cont1 = 0;
  cont2 = 0;
  soma_idades = 0;

  printf ("Digite as idades (-1 para parar): ");
  scanf ("%d", &idade);

  while (idade > 0) {
    if (idade == -1) {
      break;
    }
    if (idade > 21) {
      cont1 += 1;
    }
    if (idade > 60) {
      soma_idades += idade;
      cont2 += 1;
    }
    printf ("Digite as idades (-1 para parar): ");
    scanf ("%d", &idade);
  }

  media_idades = soma_idades / cont2;

  printf ("\nA quantidade de pessoas maiores de 21 anos foi de %d pessoas.\nA média das idades das pessoas maiores que 60 anos foi de %.2f", cont1, media_idades);

  return 0;

}