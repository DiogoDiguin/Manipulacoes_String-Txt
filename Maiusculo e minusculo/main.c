#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char livro[40];
char letra;

main(){

printf("Entre com um caracter:");
    fflush(stdin);
    scanf("%c", &letra);
    printf("%c", toupper(letra));

printf("\n\nEntre com um caracter:");
    fflush(stdin);
    scanf("%c", &letra);
    printf("%c", tolower(letra));

printf("\n\nEntre com um nome de livro: ");
    fflush(stdin);
    scanf("%s", &livro);
    printf("\%s", strupr(livro));

printf("\nEntre com um nome de livro: ");
    fflush(stdin);
    gets(livro);
    printf("\%s", strlwr(livro));
    printf("\n");

system("pause");
printf("\n");
}//main
