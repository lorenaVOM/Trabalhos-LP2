# include <stdio.h>
# include <stdlib.h>
# include <math.h>

float xless10 (float num) {

  return sqrt (num - 10) / 2;

}

float xmore4 (float num) {

  return sqrt (pow (num, 2) + 1) / 2;
  
}

float xmore4less10 (float num) {

  return pow (num, 3) / (pow (num, 2) - 16);

}

float func (float num) {

  if (num >= 10) {
    return xless10 (num);
  }

  else if (num <= 4) {
    return xmore4 (num);
  }

  else if (4 < num && num < 10) {
    return xmore4less10 (num);
  }
    
}

main () {

  float num;

  do {

    printf ("\nDigite um número inteiro positivo (0 para parar): ");
    scanf ("%f", &num);

    if (num <= 0) {
      break;
    }

    printf ("\nfunc(x) = %f\n", func (num));

  } while (num >= 0);

}