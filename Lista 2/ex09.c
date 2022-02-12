//No dia da estreia do filme “Star Wars”, prevendo um público numeroso, um cinema decidiu coletar alguns dados estatísticos sobre o público presente, a fim de exibir outros filmes populares. Para tal, foram coletadas as seguintes informações de cada espectador: a) Idade | b) Grau de instrução, em anos. | c) Opinião sobre o filme: 1 = ótimo, 2 = regular ou 3 = péssimo. Crie agora um programa que leia a quantidade de pessoas presentes e calcule: a) A média das idades das pessoas que responderam ótimo. b) A idade do espectador mais velho e a do mais novo. c) O percentual de pessoas com mais de 10 anos de instrução que responderam péssimo.

#include <stdio.h>
#include <stdlib.h>

main () {

  int idade, grau_inst, opiniao, cont1, novo, velho, soma_idades, cont2, cont3, cont;
  float media, percentual;

  cont = cont1 = cont2 = cont3 = novo = velho = soma_idades = 0;

  printf ("Digite a idade do espectador (-1 para finalizar): ");
  scanf ("%d", &idade);

  while (idade > 0 && idade != -1) {

    if (cont == 0) {
      novo = velho = idade;
    }
    else {
      if (idade > velho) {
        velho = idade;
      }
      if (idade < novo) {
        novo = idade;
      }
    }

    printf ("Digite o grau de instrução, em anos: ");
    scanf ("%d", &grau_inst);

    printf ("Digite sua opinião sobre o filme:\n[1] Ótimo\n[2] Regular\n[3] Péssimo");
    printf ("\nOpção: ");
    scanf ("%d", &opiniao);

    if (opiniao == 1) {
    soma_idades += idade;
    cont1 += 1;
    }

    if (grau_inst > 10) {
      if (opiniao == 3) {
      cont3 += 1;
      }
      cont2 += 1;
    }

    cont += 1;
    
    printf ("Digite a idade do espectador (-1 para finalizar): ");
    scanf ("%d", &idade);

  }

  media = soma_idades / cont1;
  percentual = (cont3 * 100) / cont2;

  printf ("A média das pessoas que responderam \"ótimo\" foi de %.2f.\nO expectador mais velho tinha %d anos.\nO expectador mais novo tinha %d anos.\nO percentual de pessoas com mais de 10 anos de instrução que responderam \"péssimo\" foi de %.2f%%.", media, velho, novo, percentual);

  return 0;

}