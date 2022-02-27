# include <stdio.h>
# include <stdlib.h>

main () {
  
  int idade [20];
  int aux;

  for (int i = 0; i < 20; i++) {
    printf ("\nDigite a %dª idade: ", i + 1);
    scanf ("%d", &idade[i]);
  }

  printf ("\nVetor: ");
  for (int i = 0; i < 20; i++) {
    printf ("%d ", idade[i]);
  }

  for (int i = 0; i < 10; i++) {
    aux = idade[i];
    idade[i] = idade[19 - i];
    idade[19 - i] = aux;
  }

  printf("\nVetor invertido: ");
  for (int i = 0; i < 20; i++)
  printf("%d ", idade[i]);

  return 0;
}
