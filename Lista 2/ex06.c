//Dado um país A, com 5.000.000 de habitantes e taxa de natalidade de 3% ao ano, e um país B, com 7.000.000 de habitantes e taxa de natalidade de 2% ao ano, calcule e imprima o tempo necessário para que a população do país A ultrapasse a população do país B.

main () {

  int A, B, natA, natB, tempo;

  A = 5000000;
  B = 7000000;
  tempo = 0;

  while (B > A) {

    natA = A * 0.03;
    natB = B * 0.02;
    
    A += natA;
    B += natB;

    tempo += 1;
  }

  printf ("A população do país A ultrapassará a população do país B em %d anos.", tempo);

  return 0;

}