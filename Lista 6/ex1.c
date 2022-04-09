#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int dia, mes, ano;
} tpData;

tpData *inicializa (int D, int M, int A) {
    tpData *data;
    data = (tpData*) malloc(sizeof(tpData));
    data-> dia = D;
    data-> mes = M;
    data-> ano = A;
              
    return data;
}

void valida (tpData data) {
    if (data.dia < 1 || data.dia > 31){
        printf("\nDia inválido. Por favor, insira outra data.");
    }

    else if (data.mes < 1 || data.mes > 12){
        printf("\nMês inválido. Por favor, insira outra data.");
    }

    else if (data.ano < 1){
        printf("\nAno inválido. Por favor, insira outra data.");
    }

    else {
        imprime (data);
    }
}

void imprime (tpData data1) {
  printf("\nData: %d/%d/%d", data1.dia, data1.mes, data1.ano);
}

int main () {
    tpData *data;
    int dia, mes, ano;

    printf ("\nDia: ");
    scanf("%d", &dia);

    printf ("\nMês: ");
    scanf("%d", &mes);

    printf ("\nAno: ");
    scanf("%d", &ano);

    data = inicializa (dia, mes, ano);
    valida (*data);

    return 0;
}
