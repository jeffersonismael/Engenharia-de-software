#include <stdio.h>

int main(){

    printf("Desafio Super Trunfo - Cidades Brasileiras - Nível Novato\n");

    char estado1[10], estado2[10], codigoCarta1[3], codigoCarta2[3], cidade1[8], cidade2[8];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;

    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigoCarta1);

    printf("Digite o Estado: \n");
    scanf("%s", &estado1);

    printf("Digite a Cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("Digite Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    printf("Digite a Área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Código da Carta: %s\nCidade: %s\nEstado: %s\n", codigoCarta1, cidade1, estado1);
    printf("População: %d milhões\nPontos Turísticos: %d\n", populacao1, pontosTuristicos1);
    printf("Área: %.3f km²\nPIB: %.3f bilhões\n", area1, pib1);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigoCarta2);

    printf("Digite o Estado: \n");
    scanf("%s", &estado2);

    printf("Digite a Cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("Digite a Área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Código da Carta: %s\nCidade: %s\nEstado: %s\n", codigoCarta2, cidade2, estado2);
    printf("População: %d milhões\nPontos Turísticos: %d\n", populacao2, pontosTuristicos2);
    printf("Área: %.3f km²\nPIB: %.3f bilhões\n", area2, pib2);
}