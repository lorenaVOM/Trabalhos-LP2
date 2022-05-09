//Fa�a um programa que leia uma quantidade indeterminada de n�meros reais positivos x 
//at� que o usu�rio digite um n�mero negativo ou zero. Escreva uma fun��o chamada func() 
//que dever� receber x como par�metro e retornar um valor real, de acordo com a defini��o abaixo. 
//Al�m da fun��o func(), cada op��o de x dever� ser calculada em uma nova subrotina 
//(ex: se x>=10, ser� chamada, de dentro de func(x) a subrotina xless10(x), que retorna 
//o valor da primeira express�o:

#include <stdio.h>
#include <math.h>

float xMenor4 (int x){
	float res;
	
	res = sqrt(x*x+1)/2;
	return res;
}

float xEntre4e10 (int x){
	float res;
	
	res = (float)(x*x*x)/(x*x-16);
	return res;
}

float xMaior10 (int x){
	float res;
	
	res = sqrt(x-10)/2;
	return res;
}

float func (int x) {
   
	if (x <= 4)
		return xMenor4(x);
	else if (x >= 10)
		return xMaior10(x);
	else 
		return xEntre4e10(x);

};

main() {
	float res;
	int x;
		
	printf("\nDigite um valor para x: ");
	scanf("%d",&x);
	
	while (x > 0) {
		res = func(x);
		printf("A fun��o Y para o valor %d eh: %.2f", x, res);
		
		printf("\n\nDigite um valor para x: ");
		scanf("%d",&x);		
	}	
}
