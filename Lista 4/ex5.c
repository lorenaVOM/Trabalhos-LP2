# include <stdio.h>
# include <stdlib.h>

main () {

  float matriz [4][5];
  int i, j;
  float dobro [4][5];
  float soma [4][5];

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 5; j++) {
      printf ("Digite o elemendo [%d][%d] da sua matriz: ", i, j);
      scanf ("%f", &matriz [i][j]);
    }
  }

  printf ("\nMATRIZ:\n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 5; j++) {
      printf ("%4.2f ", matriz [i][j]);
    }
    printf ("\n");
  }

  printf ("\nDOBRO DA MATRIZ:\n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 5; j++) {
      dobro [i][j] = matriz [i][j] * 2;
      printf ("%4.2f ", dobro [i][j]);
    }
    printf ("\n");
  }

  printf ("\nMATRIZ ORIGINAL + DOBRO:\n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 5; j++) {
      soma [i][j] = matriz [i][j] + dobro [i][j];
      printf ("%4.2f ", soma [i][j]);
    }
    printf ("\n");
  }

  return 0;
}
