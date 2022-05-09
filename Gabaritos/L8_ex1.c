//
//preenche(...): recebe o vetor espacoR3 como parâmetro, lê todos os campos de todos os 10 elementos e, 
//ao sair da função, o vetor se mantém preenchido. Todos os elementos do vetor deverão ser salvos, 
//na medida em que forem sendo preenchidos, no arquivo binário desenho.dat.
//• imprime(...): percorre o arquivo desenho.dat do início ao fim, imprimindo todos os campos de cada 
//elemento gravado, de forma formatada (exemplo: Ponto A: x = 3, y = 2, z = -1). Não faz nenhuma alteração
// no arquivo e não retorna nada.
//• apaga(...):recebe o vetor espacoR3 e uma letra como parâmetro. Percorre o vetor do início ao fim, 
//procurando por um elemento cujo campo rotulo seja igual a letra. Quando encontrar, altera o rótulo do 
//ponto para ‘#’, tanto no vetor, quanto no arquivo desenho.dat. Se o ponto não for encontrado, não faz nada.

#include <stdio.h>

typedef struct {
	int x, y, z;
} tpPonto;

typedef struct {
	tpPonto ponto;
	char rotulo;
} tpFigura;

void preenche (tpFigura fig[3]) {
	int i;
	FILE * fp;
	
	fp = fopen("figura.dat", "wb");
	printf ("\nEntre com os valores pedidos:\n");	
	
	for (i=0; i<3; i++) {
		fig[i].rotulo = ' ';
		printf("letra: ");
		scanf("%c", &fig[i].rotulo);
		printf("x: ");
		scanf("%d",&fig[i].ponto.x);
		printf("y: ");
		scanf("%d",&fig[i].ponto.y);
		printf("z: ");
		scanf("%d",&fig[i].ponto.z);
		scanf("%c");  // precisei colocar essa linha pq senão o compilador joga o ENTER para a próxima letra a ser lida e vai bugar

		fwrite (&fig[i], sizeof(tpFigura), 1, fp);
 
	}
	fclose(fp);
}

void imprime () { 
	int i;
	FILE * fp;
	tpFigura fig[3];
	
	fp = fopen("figura.dat", "rb");
	
	for (i=0; i<3; i++) {
		fread(&fig[i], sizeof(tpFigura),1,fp);
		printf("\nPonto %c = x: %d, y: %d, z: %d ", fig[i].rotulo, fig[i].ponto.x, fig[i].ponto.y, fig[i].ponto.z);
	}
	fclose(fp);
}

void apaga (tpFigura fig[10], char letra) {
	int i;
	FILE * fp;
		
	for (i=0; i<3; i++) {
		if (fig[i].rotulo == letra) {
			printf ("\nO ponto %c sera apagado!", letra);
			fig[i].rotulo = '#';
			break;
		}		
	}	
	fp = fopen("figura.dat", "rb+");
	fseek (fp, i*sizeof(tpPonto), SEEK_SET);
	fwrite (&fig[i], sizeof(tpFigura), 1, fp);
	fclose(fp);
}

main() {
	tpFigura figura[3];
	FILE *f;

	preenche(figura);
	imprime(figura);
	apaga(figura, 'A');
	imprime(figura);
}

