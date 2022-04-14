#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x, y, z;
} tpPonto;

typedef struct {
  char rotulo;
  tpPonto ponto;
} tpFigura;

tpFigura* preenche (tpFigura *espacoR3) {
  FILE *desenho;

  desenho = fopen ("desenho.dat", "wb");
  if (desenho == NULL) {
    printf ("ERRO!");
  }
  else {
    for (int i = 0; i < 10; i++) {
      printf ("Digite uma letra: ");
      fflush (stdin);
      scanf ("%c", &espacoR3[i].rotulo);
      printf ("Digite o valor de X do ponto %c: ", espacoR3[i].rotulo);
      scanf ("%d", &espacoR3[i].ponto.x);
      printf ("Digite o valor de Y do ponto %c: ", espacoR3[i].rotulo);
      scanf ("%d", &espacoR3[i].ponto.y);
      printf ("Digite o valor de Z do ponto %c: ", espacoR3[i].rotulo);
      scanf ("%d", &espacoR3[i].ponto.z);
      fwrite (&espacoR3, sizeof(tpFigura), 4, desenho);
    }
    fclose (desenho);
  }
}

void imprime (tpFigura *espacoR3) {
  FILE *desenho;

  desenho = fopen ("desenho.dat", "rb");
  if (desenho == NULL) {
    printf ("ERRO!");
  }
  else {
    for (int i = 0; i < 10; i++) {
      fread (&espacoR3, sizeof(tpFigura), 4, desenho);
      printf ("\nPonto %c: ", espacoR3[i].rotulo);
      printf ("X = %d Y = %d Z = %d", espacoR3[i].ponto.x, espacoR3[i].ponto.y, espacoR3[i].ponto.z);
    }
  }
  fclose (desenho);
}

void apaga (tpFigura *espacoR3, char letra) {
  FILE *desenho;

  desenho = fopen ("desenho.dat", "rb");
  if (desenho == NULL) {
    printf ("ERRO!");
  }
  else {
    for (int i = 0; i < 10; i++) {
      fread (&espacoR3, sizeof(tpFigura), 4, desenho);
      desenho = fopen ("desenho.dat", "ab");
      if (espacoR3[i].rotulo == letra) {
        espacoR3[i].rotulo = 35;
        fwrite (&espacoR3, sizeof(tpFigura), 4, desenho);
      }
      fclose (desenho);
    }
  }
  fclose (desenho);
}

int main () {
  tpFigura espacoR3 [10];
  char letra;

  preenche (espacoR3);
  imprime (espacoR3);

  printf ("\nDigite a letra de um ponto para ser apagado: ");
  fflush (stdin);
  scanf ("%c", &letra);

  apaga (espacoR3, letra);
  imprime (espacoR3);

  return 0;
}