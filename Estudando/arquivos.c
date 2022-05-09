#include <stdio.h>

main () {
  FILE * arq;
  char nome [20];

  arq = fopen ("arquivo.dat", "a+b");

  printf ("Nome: ");
  scanf ("%s", nome);

  fwrite (&nome, sizeof(nome), 1, arq);
  fclose (arq);

  arq = fopen ("arquivo.txt", "rb");
  fread (&nome, sizeof(nome), 1, arq);
  fclose (arq);

  printf ("%s", nome);
}