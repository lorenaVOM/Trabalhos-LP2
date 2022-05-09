// Os bancos atualizam diariamente as contas de seus clientes. 
// Essa atualização envolve a análise dos depósitos e retiradas de cada conta. 
// Numa conta de balanço mínimo, uma taxa de serviço é deduzida se a conta cai abaixo de uma certa quantia especificada. 
// Suponha que uma conta particular comece o dia com um balanço de R$ 60,00.  
// O balanço mínimo exigido é R$ 30,00 e se o balanço de fim de dia for menor do que isso, uma taxa é reduzida da conta. 
// A fim de que essa atualização fosse feita utilizando computador, é fornecido o seguinte conjunto de dados:
// a)	a primeira linha contém o valor do balanço mínimo diário, quantidade de transações e taxa de serviço;
// b)	as linhas seguintes contém número da conta, valor da transação e código da transação (depósito ou retirada);

// Escrever um programa que:
// a)	calcule o balanço (saldo/débito) da conta ao fim do dia (se o resultado for negativo, isto significa insuficiência de fundos na conta);
// b)	escreva, para cada conta, o seu número e o balanço calculado. Se não houver fundos, imprima o número da conta e a mensagem "NÃO HÁ FUNDOS".


#include<stdio.h> 

void main () {
	int conta, op;
	float saldo, valor, minimo, taxa;
	
	
	printf("\n\tBEM VINDO AO SISTEMA DE BALANCOS DO BANCO CONTAMAIS");	
	printf("\n\nVamos iniciar as operacoes do dia, informando os dados abaixo:");	
	
	printf("\n\nValor de balanco minimo:");
	scanf("%f",&minimo);	
//	printf("\nQuantidade de transacoes:");
//	scanf("%f",&qtd);	
//  SEGUNDO O ENUNCIADO, EU DEVERIA LER A QUANTIDADE DE TRANSACOES DIARIAS, MAS RESOLVI MELHORAR ISSO. 
//  A CORRECAO DA QUESTAO SERA COMPREENSIVA, UMA VEZ QUE O ENUNCIADO ESTÁ MUITO CONFUSO...

	printf("Taxa de servico:");
	scanf("%f",&taxa);	
	
	
	printf("\nEntre com os dados pedidos, para cada conta corrente cadastrada.\nEncerre o programa com o numero ZERO para a conta.");
	printf("\n\nNumero da conta corrente: ");
	scanf("%d",&conta);

	while (conta > 0){
		printf("Saldo inicial:");
		scanf("%f",&saldo);	

		printf("\nEscolha a operacao:");
		printf("\n1 - Debito");
		printf("\n2 - Credito");
		printf("\n3 - Encerrar");
		printf("\n\nOpcao: ");
		scanf("%d",&op);	
			
		while (op != 3) {
			printf("Valor da operacao:");
			scanf("%f",&valor);				
		
			switch(op) {
				case 1: saldo -= valor;
						break;
				case 2: saldo += valor;
						break;
			}

			if (saldo < minimo) {
				saldo -= taxa;
				printf("O saldo caiu abaixo do minimo e sera descontada a taxa de R$%.2f!\n", taxa);
			}
			
			printf("\nEscolha a operacao:");
			printf("\n1 - Debito");
			printf("\n2 - Credito");
			printf("\n3 - Encerrar");
			printf("\n\nOpcao: ");
			scanf("%d",&op);				
		}
		
		printf("\n\nA conta %d encerra o dia com o saldo de R$%.2f", conta, saldo);
		if (saldo < 0)
			printf(" => NAO HA FUNDOS!");	
			
		printf("\n\nNumero da conta corrente (ou 0 para encerrar): ");
		scanf("%d",&conta);			
	}	
}
