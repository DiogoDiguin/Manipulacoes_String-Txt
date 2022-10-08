#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
  FILE *arq;
  char Linha[100];
  char *resultado;
  int i;

  printf("O programa faz a leitura de um arquivo texto.\n");
  system("pause");
  printf("\n\n");

  // Abre um arquivo TEXTO para LEITURA
  arq = fopen("cadastro_alunos.txt", "r");

  if (arq == NULL)  // Se houve erro na abertura
  {
     printf("Problemas na abertura do arquivo\n");
     exit(0);
  }
  i = 1;

  while (!feof(arq))  // feof = file end of file
  {
	// Lê uma linha (inclusive com o '\n')
      resultado = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'

	  if (resultado){  // Se foi possível ler
	  	printf("Nome armazenado %d : %s", i, Linha);
	  }

      i++;
  }

  fclose(arq);
}
