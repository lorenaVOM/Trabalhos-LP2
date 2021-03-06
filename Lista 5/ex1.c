#include <stdio.h>
#include <stdlib.h>

void maiusc (char *frase) {

  int i = 0;

  while (frase[i] >= 97 && frase[i] <= 122) {
    *frase -= 32;
  }
}

char concatena (char *str1, char *str2) {

  int tam = strlen(str1);

  for (int i = 0; i < strlen(str2) + 1 ; i++) {
    *(str1 + tam) = *(str2 + i);
    tam++;
  }
  return str1;
  }

int capit (char *frase) {

  for (int i = 0; i < strlen(frase); i++) {
    if (i == 0) {
      if (*(frase + i) >= 97 && *(frase + i) <= 122) {
        *(frase + i) -= 32;
      }
      }
    else if (*(frase + i) == 32) {
      if (*(frase + i + 1) >= 97 && *(frase + i + 1) <= 122) {
        *(frase + i + 1) -= 32;
        }
    }
  }
    printf("\n%s\n", frase);
    return strlen(frase);
}

int comp (char *str1, char *str2) {

  int res;

  if (strlen(str1) < strlen(str2)) {
    res = -1;
    return res;
  }
  else if (strlen(str1) == strlen(str2)) {
    res = 0;
    return res;
  } 
  else if (strlen(str1) > strlen(str2)) {
    res = 1;
    return res;
  }
}

main () {

char frase1 [30], frase2 [30];
int opcao, cont = 0, r = 0;

printf ("Digite uma frase: \n");
gets(frase1);

printf ("Digite outra frase: \n");
gets(frase2);

printf ("\nEscolha o que deseja fazer:\n[1] Converter tudo para maíusculo (string 1)\n[2] Concatenação das frases\n[3] Capitalizar frase (string 1)\n[4] Comparação das duas frases\n");
scanf ("%d", &opcao);

switch (opcao)
{
case 1:

  while (frase1[cont] != '\0') {

    maiusc(&frase1[cont]);
    printf("%c", frase1[cont]);
    cont += 1;

  }
  break;

case 2:

  concatena(frase1, frase2);
  printf("\n%s", frase1);

  break;

case 3:

  capit(frase1);
  while (frase1[cont] != '\0') {
    cont += 1;
  }
  printf("Quantidade de caraceteres: %d", cont);
  
  break;

case 4:

  r = comp(frase1, frase2);
  printf("\n%d", r);

  break;

default:

  printf ("Essa opção não é válida");

  break;
}

return 0;
}