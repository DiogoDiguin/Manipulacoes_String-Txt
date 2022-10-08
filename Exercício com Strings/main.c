/*
Desenvolver um software de baixa complexidade para trabalhar com STRING:
- Armazenar 5 nomes de livros em uma matriz
- Pedir para o usuário digitar o nome de um livro para que seja verificado se esse livro foi cadastrado
- Mostrar o tamanho do nome do livro
- Concatenar o nome do livro digitado com " ENCONTRADO COM SUCESSO"
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char livros[5][50];
char resp;
int i = 0;
char nome_pesquisa[50];


main(){

do{
    printf("\nEntre com o nome de um livro: ");
    fflush(stdin);
    gets(livros[i]);
    i++;

    printf("\nDeseja inserir um outro livro?: ");
        scanf("%c", &resp);
}while(resp == 'S');

printf("-\n");

printf("Informe o livro a ser pesquisado: ");
    fflush(stdin);
    gets(nome_pesquisa);

printf("\n");

int l=0;

while(l < i){

    if (strcmp(livros[l], nome_pesquisa) == 0){
        printf("\nTamanho do livro: %i\n", strlen(livros[l]));
        strcat(livros[l], " - ENCONTRADO COM SUCESSO\n");
        printf("%s", livros[l]);

    break;
    }

l++;
}

printf("\n");
system("pause");

}// main
