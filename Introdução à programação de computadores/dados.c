#include <stdio.h>

int main(){

    //Sintaxe padrão printf
    //printf("texto com formatação", variavel1, variavel2, ...);
    //printf("Olá Mundo!\n");

    int idade = 33;
    float altura = 1.60;
    char opcao = 'S';
    char nome[20] = "Jefferson";

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %f\n", altura);
    printf("A opção é: %c\n", opcao);

    /*
    printf("%formato1 %formato2 %formato3, variavel1, variavel2, variavel3")

    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único câractere.
    %s: Imprime uma única cadeia (string) de caracteres.
    */

}