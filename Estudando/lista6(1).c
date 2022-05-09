#include <stdio.h>

typedef struct {
  int dia, mes, ano;
} tpData;

void inicializa (tpData * data, int d, int m, int a) {
  data->dia = d;
  data->mes = m;
  data->ano = a;
}

int valida (tpData data) {
    if (data.dia < 1 || data.dia > 31){
        printf("\nDia inválido. Por favor, insira outra data.");
        return 0;
    }

    if (data.mes < 1 || data.mes > 12){
        printf("\nMês inválido. Por favor, insira outra data.");
        return 0;
    }

    if (data.ano < 1){
        printf("\nAno inválido. Por favor, insira outra data.");
        return 0;
    }

    return 1;
}

void imprime (tpData data1) {
  printf("\nData: %d/%d/%d", data1.dia, data1.mes, data1.ano);
}

int main () {
  tpData data;
  int dia, mes, ano;
  int cont = 0;

  while (!cont) {
    printf ("Dia: ");
    scanf ("%d", &dia);
    printf ("Mês: ");
    scanf ("%d", &mes);
    printf ("Ano: ");
    scanf ("%d", &ano);

    inicializa (&data,dia, mes, ano);
    cont = valida (data);
    imprime (data);
  }
  


}

