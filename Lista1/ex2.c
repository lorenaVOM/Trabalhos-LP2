//Implemente uma calculadora que apresente as seguintes funções (essas deverão ser apresentadas ao usuário do programa): soma, subtração, multiplicação, divisão, exponenciação (xy), log(x) e raiz quadrada. Atenção: o programa só deverá ser encerrado quando o usuário escolher a opção “fim”. (Pesquise o nome e sintaxe das funções matemáticas em C).

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main () {

  int opcao, resp;
  float num, num1, exp, total;

  total = 0;

  do {
    printf ("----- CALCULADORA EM C -----\n");
    printf ("Escolha o que deseja fazer:\n");
    printf ("[1] SOMA\n[2] SUBTRAÇÃO\n[3] MULTIPLICAÇÃO\n[4] DIVISÃO\n[5] EXPONENCIAÇÃO (xy)\n[6] LOG(X)\n[7] RAIZ QUADRADA\n[8] FIM\n");
    printf ("Digite a opção desejada: ");
    scanf ("%d", &opcao);

    if (opcao == 1) {
      printf ("Digite os números que deseja somar (0 para parar): ");
      scanf ("%f", &num);
      while (num != 0) {
        total += num;
        printf ("Digite os números que deseja somar (0 para parar): ");
        scanf ("%f", &num);
      }
      printf ("O resultado da sua soma é: %f", total);
    }

    if (opcao == 2) {
      printf ("Digite os números que deseja subtrair (0 para parar): ");
      scanf ("%f", &num);
      total = num;
      while (num != 0) {
        printf ("Digite os números que deseja subtrair (0 para parar): ");
        scanf ("%f", &num);
        total -= num;
      }
      printf ("O resultado da sua subtração é: %f", total);
    }

    if (opcao == 3) {
      printf ("Digite os números que deseja multiplicar (1 para parar): ");
      scanf ("%f", &num);
      total = num;
      while (num != 1) {
        printf ("Digite os números que deseja multiplicar (1 para parar): ");
        scanf ("%f", &num);
        total = total * num;
      }
      printf ("O resultado da sua multiplicação é: %.2f", total);
    }

    if (opcao == 4) {
      printf ("Digite os números que deseja dividir (1 para parar): ");
      scanf ("%f", &num);
      total = num;
      while (num != 1) {
        printf ("Digite os números que deseja dividir (1 para parar): ");
        scanf ("%f", &num);
        total = total / num;
      }
      printf ("O resultado da sua divisão é: %.2f", total);
    }

    if (opcao == 5) {
      printf ("Digite o número e em seguida digite seu expoente: ");
      scanf ("%f %f", &num1, &exp);
      printf ("O resultado da sua exponenciação é: %.2f", pow(num1, exp));
    }

    if (opcao == 6) {
      printf ("Digite o número para ver seu logarítimo: ");
      scanf ("%f", &num);
      printf ("O log de %.2f na base 10 é: %.2f", num, log10(num));
    }

    if (opcao == 7) {
      printf ("Digite o número para calcular sua raiz quadrada: ");
      scanf ("%f", &num);
      printf ("A raiz quadrada de %.2f é %.2f", num, sqrt(num));
    }

    if (opcao == 8) {
      printf ("Obrigada por usar nossa calculadora. Volte sempre!");
    }

    printf ("\nDeseja realizar uma nova operação? (1 para SIM e 8 para NÃO) ");
    scanf ("%d", &resp);
  } while (resp == 1 && resp != 0);

  printf ("Obrigada por usar nossa calculadora. Volte sempre!");

  return 0;

}