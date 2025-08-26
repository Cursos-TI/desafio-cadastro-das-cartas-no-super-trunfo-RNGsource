#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída de dados

// A função main é o ponto de entrada de qualquer programa em C.
int main() {

    // --- Declaração de Variáveis para a Carta 1 ---
    // Usamos tipos de dados apropriados para cada informação.
    char estado_1;
    char codigo_1[5];          // Array de char para a string (ex: "A01" + caractere nulo '\0')
    char nomeCidade_1[50];     // Array de char para o nome da cidade, com espaço para até 49 letras.
    int populacao_1;
    float area_1;
    float pib_1;
    int pontosTuristicos_1;

    // --- Declaração de Variáveis para a Carta 2 ---
    // Repetimos a mesma estrutura de variáveis para a segunda carta.
    char estado_2;
    char codigo_2[5];
    char nomeCidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontosTuristicos_2;


    // --- Interface com o Usuário ---
    // Exibe uma mensagem de boas-vindas para guiar o usuário.
    printf("=======================================\n");
    printf("  Bem-vindo ao Cadastro de Super Trunfo\n");
    printf("=======================================\n");
    printf("Por favor, insira os dados para as duas cartas abaixo.\n\n");


    // --- Leitura dos Dados da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado_1); // O espaço antes de %c ignora quebras de linha ou espaços anteriores.

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo_1);

    printf("Digite o Nome da Cidade: ");
    // Usamos %[^\n] para ler strings que contenham espaços (ex: "Rio de Janeiro").
    scanf(" %[^\n]", nomeCidade_1);

    printf("Digite a População: ");
    scanf("%d", &populacao_1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area_1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib_1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos_1);

    printf("\n"); // Adiciona uma linha em branco para melhor organização.


    // --- Leitura dos Dados da Carta 2 ---
    printf("--- Cadastro da Carta 2 ---\n");

    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado_2);

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo_2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade_2);

    printf("Digite a População: ");
    scanf("%d", &populacao_2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area_2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib_2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos_2);


    // --- Exibição dos Dados Cadastrados ---
    // Imprime os resultados na tela de forma organizada.
    printf("\n\n=======================================\n");
    printf("      Cartas Cadastradas com Sucesso!\n");
    printf("=======================================\n\n");

    // Exibindo dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", nomeCidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1); // %.2f formata o float para exibir apenas 2 casas decimais.
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos_1);

    printf("\n"); // Adiciona uma linha em branco entre as cartas.

    // Exibindo dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", nomeCidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos_2);
    printf("\n");


    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;
}