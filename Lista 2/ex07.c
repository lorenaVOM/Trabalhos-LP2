//Escreva um programa que informe a quantidade total de calorias de uma refeição, a partir da escolha dos itens do cardápio, que consta de um prato principal, uma bebida e uma sobremesa, segundo a tabela abaixo:

#include <stdio.h>
#include <stdlib.h>

main () {

  int principal, bebida, sobremesa, calorias;

  calorias = 0;

  printf ("ESCOLHA SEU PRATO PRINCIPAL: ");
  printf ("\n[1] Vegetariano\n[2] Peixe\n[3] Frango\n[4] Carne");

  printf ("\nPor favor, digite a opção desejada: ");
  scanf ("%d", &principal);

  switch (principal)
  {
  case 1:
    calorias += 180;
    break;
  
  case 2:
    calorias += 230;
    break;

  case 3:
    calorias += 250;
    break;

  case 4:
    calorias += 350;
    break;

  default:
    printf ("Esta opção não é válida.");
    break;
  }

  printf ("ESCOLHA SUA BEBIDA: ");
  printf ("\n[1] Chá (lata)\n[2] Suco de laranja\n[3] Suco de melão\n[4] Refrigerante diet");

  printf ("\nPor favor, digite a opção desejada: ");
  scanf ("%d", &bebida);

  switch (bebida)
  {
  case 1:
    calorias += 80;
    break;
  
  case 2:
    calorias += 150;
    break;

  case 3:
    calorias += 70;
    break;

  case 4:
    calorias += 2;
    break;

  default:
    printf ("Esta opção não é válida.");
    break;
  }

  printf ("ESCOLHA SUA SOBREMESA: ");
  printf ("\n[1] Abacaxi\n[2] Sorvete diet\n[3] Mousse diet\n[4] Mousse chocolate");
  
  printf ("\nPor favor, digite a opção desejada: ");
  scanf ("%d", &sobremesa);

  switch (sobremesa)
  {
  case 1:
    calorias += 75;
    break;
  
  case 2:
    calorias += 110;
    break;

  case 3:
    calorias += 60;
    break;

  case 4:
    calorias += 250;
    break;

  default:
    printf ("Esta opção não é válida.");
    break;
  }

  printf ("\nA quantidade total de calorias da sua refeição é de %dcals.", calorias);

  return 0;

}