#include <stdio.h>

// Definindo a estrutura para a carta (cidade)
typedef struct {
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

// Função para cadastrar a cidade
void cadastrarCarta(Carta *c) {
    printf("Digite a populacao da cidade: ");
    scanf("%d", &c->populacao);
    printf("Digite a area da cidade (em km²): ");
    scanf("%f", &c->area);
    printf("Digite o PIB da cidade (em milhões de dólares): ");
    scanf("%f", &c->pib);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &c->pontos_turisticos);
}

// Função para exibir os dados da cidade
void exibirCarta(Carta c) {
    printf("\n--- Dados da Cidade ---\n");
    printf("Populacao: %d\n", c.populacao);
    printf("Area: %.2f km²\n", c.area);
    printf("PIB: %.2f milhões de dólares\n", c.pib);
    printf("Pontos turisticos: %d\n", c.pontos_turisticos);
}

int main() {
    Carta cartas[8][4]; // 8 estados, 4 cidades por estado
    char estado;
    int cidade;
   
    printf("Bem-vindo ao Super Trunfo - Países!\n");
   
    // Cadastro de todas as cidades
    for (estado = 'A'; estado <= 'H'; estado++) {
        for (cidade = 1; cidade <= 4; cidade++) {
            int indexEstado = estado - 'A'; // A, B, C,... se tornam 0, 1, 2...
            printf("\nCadastro da cidade %c%02d:\n", estado, cidade);
            cadastrarCarta(&cartas[indexEstado][cidade - 1]);
        }
    }

    // Exibição dos dados das cidades
    printf("\n\n--- Dados das Cidades Cadastradas ---\n");
    for (estado = 'A'; estado <= 'H'; estado++) {
        for (cidade = 1; cidade <= 4; cidade++) {
            int indexEstado = estado - 'A'; // A, B, C,... se tornam 0, 1, 2...
            printf("\nCidade %c%02d:\n", estado, cidade);
            exibirCarta(cartas[indexEstado][cidade - 1]);
        }
    }

    return 0;
}