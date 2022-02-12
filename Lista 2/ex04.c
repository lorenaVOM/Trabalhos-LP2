//Escreva um programa que calcula o valor do quociente e resto de um inteiro dividido por outro, usando o método de subtrações sucessivas. Ex: 9/2 => 9-2=7 => 7-2=5 => 5-2=3 => 3-2=1. Então: quociente = 4 (pq foram feitas 4 subtrações do número 2) e resto = 1

#include <stdio.h>
#include <stdlib.h>

main () {

  int num1, num2, resto, cont;

  cont = 1;

  printf ("Digite 2 números inteiros para serem dividos através do método de subtrações sucessivas: ");
  scanf ("%d %d", &num1, &num2);

  resto = num1 - num2;

  while (resto != num1 % num2) {
    resto -= num2;
    cont += 1;
  }

  printf ("O quociente da sua divisão é %d e o resto %d.", cont, resto);

  return 0;

}