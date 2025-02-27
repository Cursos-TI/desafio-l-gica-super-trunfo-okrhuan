#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado1[3], codigocarta1[3], cidade1[15];  
    unsigned long int populacao1;
    int pontoturistico1;
    float area1, PIB1, denspopu1, PIBpc1;

    char estado2[3], codigocarta2[3], cidade2[15];
    unsigned long int populacao2;
    int pontoturistico2;
    float area2, PIB2, denspopu2, PIBpc2;

    // Mensagem de boas-vindas
    printf("Bem vindo ao SCCST\n");
    printf("O Sistema de Cadastro de Cartas de Super Trunfo!\n");
    printf("Comece a cadastrar a sua primeira carta agora mesmo!!!\n");

    // Cadastro da primeira carta
    printf("Digite a sigla do estado da sua carta: \n");
    scanf("%2s", estado1);
    printf("Digite o código da carta 'De 01 a 04': \n");
    scanf("%2s", codigocarta1);
    getchar(); // Consumir a quebra de linha
    printf("Digite o nome da cidade da sua carta: \n");
    fgets(cidade1, sizeof(cidade1), stdin);
    printf("Digite o número de habitantes da sua carta: \n");
    scanf("%lu", &populacao1);
    printf("Digite a área em km² da sua carta: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da sua carta: \n");
    scanf("%f", &PIB1);
    printf("Digite a quantidade de pontos turísticos da sua carta: \n");
    scanf("%d", &pontoturistico1);
    printf("Carta cadastrada com sucesso!\n");

    // Cadastro da segunda carta
    printf("Digite a sigla do estado da sua outra carta: \n");
    scanf("%2s", estado2);
    printf("Digite o código da sua outra carta 'De 01 a 04': \n");
    scanf("%2s", codigocarta2);
    getchar();
    printf("Digite o nome da cidade da sua outra carta: \n");
    fgets(cidade2, sizeof(cidade2), stdin);
    printf("Digite o número de habitantes da sua outra carta: \n");
    scanf("%lu", &populacao2);
    printf("Digite a área em km² da sua outra carta: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da sua outra carta: \n");
    scanf("%f", &PIB2);
    printf("Digite a quantidade de pontos turísticos da sua outra carta: \n");
    scanf("%d", &pontoturistico2);
    printf("Carta cadastrada com sucesso!\n");

    // Cálculos
    denspopu1 = (float) populacao1 / area1;
    PIBpc1 = PIB1 / (float) populacao1;
    
    denspopu2 = (float) populacao2 / area2;
    PIBpc2 = PIB2 / (float) populacao2;

    // Escolha do atributo para comparação
    char atributo[] = "População";
    unsigned long int valor1 = populacao1;
    unsigned long int valor2 = populacao2;
    int vencedor = (valor1 > valor2);

    // Exibição do resultado da comparação
    printf("\nComparação de cartas (Atributo: %s):\n", atributo);
    printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, valor1);
    printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, valor2);
     
    // Determinação do vencedor
     if (valor1 > valor2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else if (valor2 > valor1) {
        printf("Resultado: Carta 2 venceu!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}