#include <stdio.h>
#include <stdlib.h>

struct aluno {
  char nome[40], curso[40];
  int idade, cr, matricula;
};

struct alunosmat {
  int notas, faltas;
  struct aluno aluno_1;
};

struct disciplina {
  int cod;
  char nome[40];
  struct alunosmat turma[40];
};

int main () {
  int opcao;
  int cont2 = 0, exmatricula = 0, cont5 = 0, excod = 0;
  float media_notas = 0;
  struct disciplina disciplina_1;
  FILE *disciplinas, *alunos, *boletins;

  do {
    printf ("\n--- MENU ---\n[1] Criar disciplina\n[2] Incluir aluno\n[3] Excluir aluno\n[4] Listar alunos\n[5] Calcular CR médio\n[6] Imprimir boletim\n[7] Fechar disciplina\n[8] Sair");
    printf ("\nDigite uma opção: ");
    scanf ("%d", &opcao);

    switch (opcao)
    {
    case 1:
      printf ("\nDigite o código da disciplina: ");
      scanf ("%d", &disciplina_1.cod);

      printf ("\nDigite o nome da disciplina: ");
      scanf ("%s", &disciplina_1.nome);

      for (int i = 0; i <= 40; i++) {
        disciplina_1.turma[i].aluno_1.matricula = 0;
      }

      disciplinas = fopen ("disciplinas.txt", "w");
      if (disciplinas == NULL) {
        printf ("ERRO!");
      }
      else {
        fprintf (disciplinas, "Código da disciplina: %d Nome: %s \n", disciplina_1.cod, disciplina_1.nome);
        fclose (disciplinas);
      }
      printf ("\nDisciplina %s criada com sucesso.", disciplina_1.nome);

      break;

    case 2:

      for (int i = 0; i <= 40; i++) {

        if (disciplina_1.turma[i].aluno_1.matricula == 0 && cont2 ==  0) {

          printf ("\nNome do aluno: ");
          scanf ("%s", &disciplina_1.turma[i].aluno_1.nome);

          printf ("\nNúmero de matrícula: ");
          scanf ("%d", &disciplina_1.turma[i].aluno_1.matricula);

          printf ("\nIdade: ");
          scanf ("%d", &disciplina_1.turma[i].aluno_1.idade);

          printf ("\nCurso: ");
          scanf ("%s", &disciplina_1.turma[i].aluno_1.curso);

          cont2++;

          alunos = fopen ("alunos.txt", "a");
          if (alunos == NULL) {
            printf ("ERRO!");
          }
          else {
            fprintf (alunos, "\nAluno:\n Nome: %s Matrícula: %d Idade: %d Curso: %s \n", disciplina_1.turma[i].aluno_1.nome, disciplina_1.turma[i].aluno_1.matricula, disciplina_1.turma[i].aluno_1.idade, disciplina_1.turma[i].aluno_1.curso);
            fclose (alunos);
          }
        }
      }
      cont2 = 0;

      printf ("\nAluno adicionado a disciplina com sucesso.");

      break;

    case 3:
      printf ("\nDigite o número de matrícula do aluno que será excluído da disciplina: ");
      scanf ("%d", &exmatricula);

      for (int i = 0; i <= 40; i++) {
        if (disciplina_1.turma[i].aluno_1.matricula == exmatricula) {
          disciplina_1.turma[i].aluno_1.matricula = 0;
        }
      }
      printf ("\nAluno excluído da disciplina com sucesso.");;

      break;

    case 4:

      alunos = fopen ("alunos.txt", "r");
      if (alunos == NULL) {
        printf ("ERRO!");
      }
      else {
        printf ("\n--- ALUNOS --- ");

        for (int i = 0; i <= 40; i++) {

        if (disciplina_1.turma[i].aluno_1.matricula != 0) {
          printf ("\nDados do aluno: ");

          printf ("\nNome: %s", disciplina_1.turma[i].aluno_1.nome);
          printf ("\nMatrícula: %d", disciplina_1.turma[i].aluno_1.matricula);
          printf ("\nIdade: %d", disciplina_1.turma[i].aluno_1.idade);
          printf ("\nCurso: %s", disciplina_1.turma[i].aluno_1.curso);
          printf ("\nCR: %d", disciplina_1.turma[i].aluno_1.cr);
        }
      }
      fclose (alunos);
      }
      break;

    case 5:
      for (int i = 0; i <= 40; i++) {
        if (disciplina_1.turma[i].aluno_1.matricula != 0) {
          media_notas += disciplina_1.turma[i].notas;
          cont5++;
        }
      }
      media_notas = media_notas / cont5;
      printf ("CR médio dos alunos inscritos da disciplina: %f", media_notas);
      break;

    case 6:
      for (int i = 0; i <= 40; i++) {

        printf ("\n--- BOLETIM ---");

        printf ("\nNome do aluno: %s", disciplina_1.turma[i].aluno_1.nome);
        printf ("\nMatrícula: %d", disciplina_1.turma[i].aluno_1.matricula);
        printf ("\nCurso: %s", disciplina_1.turma[i].aluno_1.curso);
        printf ("\nNota: %d", disciplina_1.turma[i].notas);
        printf ("\nFaltas: %d", disciplina_1.turma[i].faltas);
      }
      break;

    case 7:
      printf ("\nDigite o código da disciplina que deseja fechar: ");
      scanf ("%d", &excod);

      if (disciplina_1.cod == excod) {
        disciplina_1.cod = 0;

        for (int i = 0; i <= 40; i++) {
          if (disciplina_1.turma[i].aluno_1.matricula != 0) {
            disciplina_1.turma[i].aluno_1.matricula = 0;
          }
        }
        printf ("\nDisciplina %s fechada com sucesso.", disciplina_1.nome);
      }
      else {
        printf ("\nDisciplina inexistente. Digite outro código.");
      }
      break;

    case 8:
      printf ("Fim do programa.");
      break;

    default:
      printf ("Opção inválida.");
      break;

    }
  } while (opcao != 8);

  return 0;
}