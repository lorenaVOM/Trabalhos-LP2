#include <stdio.h>
#include <stdlib.h>

int vetor[30], vet2[30];

void zeraPares (int *vet) {

  printf("Zera Pares: ");

  for (int i = 0; i < 30; i++) {

    if (*(vet + i) % 2 == 0) {
      *(vet + i) = 0;
    }
  }
   for (int i = 0; i < 30; i++)
    {
        printf("%d, ", *(vet + i));
    }
}

void dobra (int *vet) {

  printf("\nDobra: ");

  for (int i = 0; i < 30; i++) {
   *(vet + i) *= 2;
  }
  for (int i = 0; i < 30; i++) {
    printf("%d ", *(vet + i));
  }

}

void soma (int *vet1, int *vet2) {

  printf("\nSoma: ");

  for (int i = 0; i < 30; i++)
    {
        *(vetor + i) += *(vet2 + i);
    }
    for (int i = 0; i < 30; i++)
    {
        printf("%d, ", *(vet1 + i));
    }

}

main () {

  int vetor[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29 ,30};

  int vet2[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29 ,30};

   int vet3[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29 ,30};

  zeraPares(vetor);
  dobra(vet2);
  soma(vet2, vet3);

  return 0;
}