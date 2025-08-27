#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída de dados

// A função main é o ponto de entrada de qualquer programa em C.
int main() {

    // --- Declaração de Variáveis para a Carta 1 ---
    // Usamos tipos de dados apropriados para cada informação.
    char estado_1;
    char codigo_1[5];          // Array de char para a string (ex: "A01" + caractere nulo '\0')
    char nomeCidade_1[50];     // Array de char para o nome da cidade, com espaço para até 49 letras.
    // MUDANÇA (Nível Mestre): População agora é unsigned long int para números maiores.
    unsigned long int populacao_1;
    float area_1;
    float pib_1;
    int pontosTuristicos_1;
    // NOVAS VARIÁVEIS (Nível Aventureiro)
    float densidade_1;
    float pibPerCapita_1;
    // NOVA VARIÁVEL (Nível Mestre)
    float superPoder_1;

    // --- Declaração de Variáveis para a Carta 2 ---
    // Repetimos a mesma estrutura de variáveis para a segunda carta.
    char estado_2;
    char codigo_2[5];
    char nomeCidade_2[50];
    // MUDANÇA (Nível Mestre): População agora é unsigned long int para números maiores.
    unsigned long int populacao_2;
    float area_2;
    float pib_2;
    int pontosTuristicos_2;
    // NOVAS VARIÁVEIS (Nível Aventureiro)
    float densidade_2;
    float pibPerCapita_2;
    // NOVA VARIÁVEL (Nível Mestre)
    float superPoder_2;

    // --- Variáveis para armazenar o resultado das comparações (Nível Mestre) ---
    int vitoria_populacao;
    int vitoria_area;
    int vitoria_pib;
    int vitoria_pontos;
    int vitoria_densidade;
    int vitoria_pibPerCapita;
    int vitoria_superPoder;
    


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
    // MUDANÇA (Nível Mestre): Usamos %lu para ler um unsigned long int.
    scanf("%lu", &populacao_1);

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
    // MUDANÇA (Nível Mestre): Usamos %lu para ler um unsigned long int.
    scanf("%lu", &populacao_2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area_2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib_2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos_2);
    printf("\n");

    // --- CÁLCULOS DOS NOVOS ATRIBUTOS (Nível Aventureiro) ---
    // Cálculo para a Carta 1
    densidade_1 = (float)populacao_1 / area_1; // A conversão (float) garante uma divisão com casas decimais.
    // O PIB já está em bilhões, então multiplicamos por 1 bilhão para o cálculo per capita.
    pibPerCapita_1 = (pib_1 * 1000000000) / (float)populacao_1;

    // Cálculo para a Carta 2
    densidade_2 = (float)populacao_2 / area_2;
    pibPerCapita_2 = (pib_2 * 1000000000) / (float)populacao_2;

     // --- CÁLCULO DO SUPER PODER ---
    superPoder_1 = (float)populacao_1 + area_1 + (pib_1 * 1000000000) + (float)pontosTuristicos_1 + pibPerCapita_1 + (1 / densidade_1);
    superPoder_2 = (float)populacao_2 + area_2 + (pib_2 * 1000000000) + (float)pontosTuristicos_2 + pibPerCapita_2 + (1 / densidade_2);
    
    // --- COMPARAÇÃO DAS CARTAS (Nível Mestre)
    vitoria_populacao = populacao_1 > populacao_2;
    vitoria_area = area_1 > area_2;
    vitoria_pib = pib_1 > pib_2;
    vitoria_pontos = pontosTuristicos_1 > pontosTuristicos_2;
    vitoria_densidade = densidade_1 < densidade_2;
    vitoria_pibPerCapita = pibPerCapita_1 > pibPerCapita_2;
    vitoria_superPoder = superPoder_1 > superPoder_2;


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
    printf("População: %lu\n", populacao_1); // Usando %lu para unsigned long int
    printf("Área: %.2f km²\n", area_1); // %.2f formata o float para exibir apenas 2 casas decimais.
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos_1);
    // NOVAS LINHAS DE EXIBIÇÃO (Nível Aventureiro)
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita_1);

    printf("\n"); // Adiciona uma linha em branco entre as cartas.

    // Exibindo dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", nomeCidade_2);
    printf("População: %lu\n", populacao_2); // Usando %lu para unsigned long int
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos_2);
    // NOVAS LINHAS DE EXIBIÇÃO (Nível Aventureiro)
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita_2);
    printf("\n");

        // --- EXIBIÇÃO DOS RESULTADOS DA COMPARAÇÃO (FUNCIONALIDADE MESTRE) ---
    printf("\n\n=======================================\n");
    printf("        Resultado da Batalha!\n");
    printf("=======================================\n\n");

    printf("Comparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (vitoria_populacao ? 1 : 2), vitoria_populacao);
    printf("Área: Carta %d venceu (%d)\n", (vitoria_area ? 1 : 2), vitoria_area);
    printf("PIB: Carta %d venceu (%d)\n", (vitoria_pib ? 1 : 2), vitoria_pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (vitoria_pontos ? 1 : 2), vitoria_pontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (vitoria_densidade ? 1 : 2), vitoria_densidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (vitoria_pibPerCapita ? 1 : 2), vitoria_pibPerCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", (vitoria_superPoder ? 1 : 2), vitoria_superPoder);
    printf("\n");


    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;
}
