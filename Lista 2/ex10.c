//Os bancos atualizam diariamente as contas de seus clientes. Essa atualização envolve a análise dos depósitos e retiradas de cada conta. Numa conta de balanço mínimo, uma taxa de serviço é deduzida se a conta cai abaixo de uma certa quantia especificada. Suponha que uma conta particular comece o dia com um balanço de R$ 60,00. O balanço mínimo exigido é R$ 30,00 e se o balanço de fim de dia for menor do que isso, uma taxa é reduzida da conta. A fim de que essa atualização fosse feita utilizando computador, é fornecido o seguinte conjunto de dados: a) a primeira linha contém o valor do balanço mínimo diário, quantidade de transações e taxa de serviço; b) as linhas seguintes contém número da conta, valor da transação e código da transação (depósito ou retirada); Escrever um programa que: a) calcule o balanço (saldo/débito) da conta ao fim do dia (se o resultado for negativo, isto significa insuficiência de fundos na conta); b) escreva, para cada conta, o seu número e o balanço calculado. Se não houver fundos, imprima o número da conta e a mensagem “NÃO HÁ FUNDOS”.

#include <stdio.h>
#include <stdlib.h>

main () {

  int transacoes, conta, cod, deb;
  float valor, taxa, bal_min, saldo_inicial, saldo_final;

  deb = 0;

  printf ("Digite o saldo inicial da sua conta: ");
  scanf ("%f", &saldo_inicial);

  printf ("\nQuantas transações (depósito ou retirada) foram feitas na sua conta no dia de hoje: ");
  scanf ("%d", &transacoes);

  for (int c = 0; c < transacoes; c++) {
    printf ("\nDigite o número da conta: ");
    scanf ("%d", &conta);

    printf ("\nDigite o código da transação (1 depósito/0 retirada): ");
    scanf ("%d", &cod);

    printf ("\nDigite o valor da transação: ");
    scanf ("%f", &valor);

    
    if (cod == 1) {
      saldo_final = saldo_inicial + valor;
    }
    if (cod == 0) {
      saldo_final = saldo_inicial - valor;
      deb += valor;
    }
  }

  bal_min = 0.05 * saldo_inicial;
  
  if (saldo_final > bal_min) {
    printf ("\nNúmero da conta: %d", conta);
    printf ("\nSaldo da conta: %.2f", saldo_final);
    printf ("\nBalanço mínimo: %.2f", bal_min);
    printf ("\nNÃO HÁ FUNDOS!");
  }

  if (saldo_final < bal_min) {
    printf ("\nNúmero da conta: %d", conta);
    printf ("\nSaldo da conta: %.2f", saldo_final);
    printf ("\nBalanço mínimo: %.2f", bal_min);
  }
  return 0;
  
}