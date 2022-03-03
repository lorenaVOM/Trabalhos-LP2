# include <stdio.h>
# include <stdlib.h>
#include <string.h>

main () {

  char frase [100];
  int cont_vogais = 0;

  printf ("Digite uma frase: \n");
  scanf ("%[^\n]", &frase);

  for (int c = 0; c < strlen(frase); c++) {

    if (frase[c] == 'a' || frase[c] == 'A' || frase[c] == 'e' || frase[c] == 'E' || frase[c] == 'i' || frase[c] == 'I' || frase[c] == 'o' || frase[c] == 'O' || frase[c] == 'u' || frase[c] == 'U') {
      
      for (int i = 0; i < cont_vogais; i++) {
        printf ("%c", frase[c]);
      }
      cont_vogais += 1;
    }
    printf ("%c", frase[c]);
  }

  return 0;
}