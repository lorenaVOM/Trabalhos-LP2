# include <stdio.h>
# include <stdlib.h>

int fatorial (num) {

  int fat;

  if (num <= 1) 
   return (1);

  else {
    fat = num * fatorial (num - 1);
    return fat;
  }

}

int potenciacao (num, exp) {

  int pot;

  if (exp == 0)
    return (1);

  else {
    pot = num * potenciacao (num, exp - 1);
    return pot;
  }

}

int multiplicacao (num1, num2) {

  int mult;

  if (num1 == 0 || num2 == 0)
    return 0;

  else if (num1 > 0 && num2 > 0) {
     mult = num1 + multiplicacao (num1, num2 - 1);
    return mult;
  }

}

int mod (num1, num2) {

  if (num1 < num2) {
    return num1;
  }
  return mod (num1 - num2, num2);
}

int seq_fibonacci (num) {

  if (num == 1 || num == 2) 
    return (1);

  return seq_fibonacci (num - 1) + seq_fibonacci (num - 2);
}

main () {

  int opcao, resp, num, fat, exp, pot, num1, num2, mult, soma;

  do {
    printf ("\n----- CALCULADORA EM C -----\n");

    printf ("Escolha o que deseja fazer:\n");
    printf ("[1] FATORIAL\n[2] POTENCIAÇÃO\n[3] MULTIPLICAÇÃO (USANDO SOMAS SUCESSIVAS)\n[4] MÓDULO\n[5] SEQUÊNCIA DE N TERMOS DE FIBONACCI\n[6] FIM\n");

    printf ("Digite a opção desejada: ");
    scanf ("%d", &opcao);
  
    switch (opcao)
    {
    case 1:

      printf ("\nDigite um número para calcular seu fatorial: \n");
      scanf ("%d", &num);

      fat = fatorial (num);
      printf ("%d! = %d\n", num, fat);

      break;
  
    case 2:

      printf ("\nDigite a base da sua potência: ");
      scanf ("%d", &num);

      printf ("\nDigite o seu expoente: ");
      scanf ("%d", &exp);

      pot = potenciacao (num, exp);
      printf ("\n%d ^ %d = %d", num, exp, pot);

      break;

    case 3:

      printf ("\nDigite o primeiro número da sua multiplicação: ");
      scanf ("%d", &num1);

      printf ("\nDigite o segundo número da sua multiplicação: ");
      scanf ("%d", &num2);

      mult = multiplicacao (num1, num2);
      printf ("\n%d x %d = %d", num1, num2, mult);

      break;

    case 4:

      printf ("\nDigite o primeiro número: ");
      scanf ("%d", &num1);

      printf ("\nDigite o segundo número: ");
      scanf ("%d", &num2);

      printf ("\n%d %% %d = %d", num1, num2, mod (num1, num2));

      break;

    case 5:

      printf ("\nDigite a quantidade de termos que deseja visualizar na sequência de Fibonacci: ");
      scanf ("%d", &num);

      soma = 0;
      printf ("0 ");

      for (int c = 1; c <= num; c++) {
        printf ("+ %d ", seq_fibonacci (c), soma);
        soma += seq_fibonacci (c);
      }

      printf ("= %d", soma);
      
      break;

    case 6:
      
      printf ("\nObrigado por usar nossa calculadora. Volte sempre!");

      break;
    }
  } while (opcao != 6);

}