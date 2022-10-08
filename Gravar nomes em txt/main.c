#include <stdio.h>
#include <stdlib.h>

main()
{
  FILE *pont_arq;    // cria variável ponteiro para o arquivo
  char nome[20];     // variável do tipo string

  //abrindo o arquivo com tipo de abertura w = write
  pont_arq = fopen("cadastro_alunos.txt", "w");

  //testando se o arquivo foi realmente criado
  if(pont_arq == NULL)
  {
	  printf("Erro na abertura do arquivo!");
	  exit(0);
  }

  for(int i=0; i<=4; i++){
	  printf("Escreva um nome para testar a gravacao no arquivo: ");
	  gets(nome);

	  //usando fprintf para armazenar a string no arquivo
	  fprintf(pont_arq, "%s\n", nome);
  }

  //usando fclose para fechar o arquivo
  fclose(pont_arq);

  printf("Dados gravados com sucesso!\n\n");

  system("pause");

}

