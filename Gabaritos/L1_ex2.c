//Implemente uma calculadora que apresente as seguintes fun��es (essas dever�o ser apresentadas ao usu�rio do programa): 
//soma, subtra��o, multiplica��o, divis�o, exponencia��o (xy), log(x) e raiz quadrada. 
//Aten��o: o programa s� dever� ser encerrado quando o usu�rio escolher a op��o �fim�. 
//(Pesquise o nome e sintaxe das fun��es matem�ticas em C).

#include <stdio.h>
#include <math.h>

main() {
	int op, x, y;
	float resp;
	
	printf("\nEscolha a opcao desejada:");
	printf("\n\n1 - Soma");
	printf("\n2 - Subtracao");
	printf("\n3 - Multiplicacao");
	printf("\n4 - Divisao");
	printf("\n5 - Exponenciacao");
	printf("\n6 - Logaritmo");
	printf("\n7 - Raiz Quadrada");
	printf("\n8 - Fim\n");
	
	scanf("%d", &op);
	
	// o c�digo abaixo poderia ter ficado mais enxuto e otimizado, mas
	// optei por deixar mais did�tico
	
	while (op != 8) {
		switch(op) {
			case 1: // soma
					printf("Entre com o primeiro fator:");
					scanf("%d", &x);
					printf("Entre com o segundo fator:");
					scanf("%d", &y);
					resp = x + y;
					break;
			case 2: // subtra��o
					printf("Entre com o primeiro fator:");
					scanf("%d", &x);
					printf("Entre com o segundo fator:");
					scanf("%d", &y);
					resp = x - y;
					break;
			case 3: // multiplica��o
					printf("Entre com o primeiro fator:");
					scanf("%d", &x);
					printf("Entre com o segundo fator:");
					scanf("%d", &y);
					resp = x * y;
					break;
			case 4: // divis�o
					printf("Entre com o primeiro fator:");
					scanf("%d", &x);
					printf("Entre com o segundo fator:");
					scanf("%d", &y);
					resp = x / y;
					break;
			case 5: // exponencia��o
					printf("Entre com a base:");
					scanf("%d", &x);
					printf("Entre com o expoente:");
					scanf("%d", &y);
					resp = pow(x,y);
					break;
			case 6: // logaritmo
					printf("Entre com o numero:");
					scanf("%d", &x);
					resp = log(x);
					break;
			case 7: // raiz quadrada
					printf("Entre com o numero:");
					scanf("%d", &x);
					resp = sqrt(x);
					break;
			}
			printf("A resposta �: %2.1f", resp);
			getch();
			
			system("cls");	
			printf("\n\nEscolha a opcao desejada:");
			printf("\n\n1 - Soma");
			printf("\n2 - Subtracao");
			printf("\n3 - Multiplicacao");
			printf("\n4 - Divisao");
			printf("\n5 - Exponenciacao");
			printf("\n6 - Logaritmo");
			printf("\n7 - Raiz Quadrada");
			printf("\n8 - Fim\n");
	
			scanf("%d", &op);
	
	}
}
