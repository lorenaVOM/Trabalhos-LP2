# include <stdio.h>
# include <stdlib.h>

main () {

  int A [3][5], i, j;
  int soma_linha [3] = {0, 0, 0};

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++) {
      printf ("Digite o elemendo [%d][%d] da sua matriz: ", i, j);
      scanf ("%d", &A [i][j]);
    }
  }

  printf ("\nMATRIZ:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++) {
      printf ("%4d ", A [i][j]);
    }
    printf ("\n");
  }

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++) {
      soma_linha [i] += A [i][j];
    }
  }

  printf ("VETOR SOMA_LINHA = ");
  for (i = 0; i < 3; i++) {
    printf ("%d ", soma_linha [i]);
  }

  return 0;
}