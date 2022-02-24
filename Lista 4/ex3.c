# include <stdio.h>
# include <stdlib.h>

main () {

  int n;
  int dado [n];

  printf ("Quantas vezes o dado foi lançado? ");
  scanf ("%d", &n);

  printf ("Digite o número da face: ");
  for (int i = 0; i < n; i++) {
    scanf ("%d", &dado[n]);
  }

  for (int i = 0; i < n; i++) {
    printf ("%d", &dado[n]);
  }

  return 0;

}