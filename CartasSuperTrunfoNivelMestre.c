#include <stdio.h>

// Funções para cálculo de Super Poder
double calcular_super_poder(long int populacao, double area, long int pib, int pontos_turisticos, double densidade_populacional, double pib_per_capita) {
    return populacao + area + pib + pontos_turisticos + densidade_populacional + pib_per_capita;
}

int main() {
    // Definição de variáveis
    char estado; 
    int cidade;
    long int populacao, pib;
    double area, densidade_populacional, pib_per_capita;
    int pontos_turisticos;
    
    // Variáveis para armazenar os dados das duas cartas
    long int populacao1, populacao2;
    double area1, area2, densidade_populacional1, densidade_populacional2, pib_per_capita1, pib_per_capita2;
    long int pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    double super_poder1, super_poder2;

    // Cadastro da primeira carta
    printf("Cadastro da cidade 1:\n");
    printf("População: ");
    scanf("%ld", &populacao1);
    printf("Área (em km²): ");
    scanf("%lf", &area1);
    printf("PIB (em bilhões): ");
    scanf("%ld", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos para a primeira carta
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = calcular_super_poder(populacao1, area1, pib1, pontos_turisticos1, densidade_populacional1, pib_per_capita1);

    // Cadastro da segunda carta
    printf("Cadastro da cidade 2:\n");
    printf("População: ");
    scanf("%ld", &populacao2);
    printf("Área (em km²): ");
    scanf("%lf", &area2);
    printf("PIB (em bilhões): ");
    scanf("%ld", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos para a segunda carta
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = calcular_super_poder(populacao2, area2, pib2, pontos_turisticos2, densidade_populacional2, pib_per_capita2);

    // Comparação das propriedades
    printf("\nResultado da comparação entre as cartas:\n");

    // Comparação da Densidade Populacional (menor vence)
    printf("Densidade Populacional: ");
    if (densidade_populacional1 < densidade_populacional2) {
        printf("Cidade 1 vence\n");
    } else if (densidade_populacional1 > densidade_populacional2) {
        printf("Cidade 2 vence\n");
    } else {
        printf("Empate\n");
    }

    // Comparação da População (maior vence)
    printf("População: ");
    if (populacao1 > populacao2) {
        printf("Cidade 1 vence\n");
    } else if (populacao1 < populacao2) {
        printf("Cidade 2 vence\n");
    } else {
        printf("Empate\n");
    }

    // Comparação da Área (maior vence)
    printf("Área: ");
    if (area1 > area2) {
        printf("Cidade 1 vence\n");
    } else if (area1 < area2) {
        printf("Cidade 2 vence\n");
    } else {
        printf("Empate\n");
    }

    // Comparação do PIB (maior vence)
    printf("PIB: ");
    if (pib1 > pib2) {
        printf("Cidade 1 vence\n");
    } else if (pib1 < pib2) {
        printf("Cidade 2 vence\n");
    } else {
        printf("Empate\n");
    }

    // Comparação dos Pontos Turísticos (maior vence)
    printf("Pontos Turísticos: ");
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Cidade 1 vence\n");
    } else if (pontos_turisticos1 < pontos_turisticos2) {
        printf("Cidade 2 vence\n");
    } else {
        printf("Empate\n");
    }

    // Comparação do Super Poder (maior vence)
    printf("Super Poder: ");
    if (super_poder1 > super_poder2) {
        printf("Cidade 1 vence\n");
    } else if (super_poder1 < super_poder2) {
        printf("Cidade 2 vence\n");
    } else {
        printf("Empate\n");
    }

    return 0;
}