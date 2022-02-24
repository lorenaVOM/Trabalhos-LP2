# include <stdio.h>
# include <stdlib.h>

main () {

  int vet3 [20];

  int vet1 [10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int vet2 [10] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};

  for (int c = 0; c < 10; c++) {
    vet3 [c * 2] = vet1[c];
  }

  for (int c = 0; c < 10; c++) {
    vet3 [c * 2 + 1] = vet2[c];
  }
  
  printf ("\nPrimeiro vetor: ");
  for (int c = 0; c < 10; c++) {
    printf ("%d ", vet1[c]);
  }

  printf ("\nSegundo vetor: ");
  for (int c = 0; c < 10; c++) {
    printf ("%d ", vet2[c]);
  }

  printf ("\nVetor novo: ");
  for (int c = 0; c < 20; c++) {
    printf ("%d ", vet3[c]);
  }

  printf ("\nVetor invertido: ");
  for (int c = 19; c != 0; c--) {
    printf ("%d ", vet3[c]);
  }

  return 0;

}