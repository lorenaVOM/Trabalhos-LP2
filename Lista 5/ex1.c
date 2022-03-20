#include <stdio.h>
#include <stdlib.h>

int maiusc (char *frase) {

  int i = 0;

  while (frase[i] >= 97 && frase[i] <= 122) {
    *frase -= 32;
  }
}

int concatena (char *str1, char *str2, char *result) {

}

int capit (char *frase) {

}

int comp (char *str1, char *str2) {

}

main () {

char frase1 [30], frase2 [30];
int cont = 0;

printf ("Digite uma frase: \n");
gets(frase1);

printf ("Digite outra frase: \n");
gets(frase2);

while (frase1[cont] != '\0') {

  maiusc(&frase1[cont]);
  printf("%c", frase1[cont]);
  cont += 1;

}

cont = 0;

return 0;
}