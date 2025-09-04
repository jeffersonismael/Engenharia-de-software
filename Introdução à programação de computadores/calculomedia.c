#include <stdio.h>

int main(){

    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Nome: %s\n", nome);

    printf("Idade: %d\n", idade);

    printf("Matrícula: %d\n", matricula);
    
    printf("Altura: %.2f\n", altura);
}