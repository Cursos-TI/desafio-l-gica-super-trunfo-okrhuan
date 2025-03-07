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
    int opcao1, opcao2, pontos1 = 0, pontos2 = 0;

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
    getchar(); // Consumir a quebra de linha
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

    // Menu interativo
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica (MENOR vence)\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao1);

    printf("\nEscolha o segundo atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica (MENOR vence)\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao2);

    // Comparar atributos
    void comparar(int opcao) {
        switch (opcao) {
            case 1:
                printf("\nComparação por População:\n");
                printf("%s: %lu habitantes\n", cidade1, populacao1);
                printf("%s: %lu habitantes\n", cidade2, populacao2);
                if (populacao1 > populacao2) {
                    printf("Resultado: %s venceu!\n", cidade1);
                    pontos1++;
                } else if (populacao2 > populacao1) {
                    printf("Resultado: %s venceu!\n", cidade2);
                    pontos2++;
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            case 2:
                printf("\nComparação por Área:\n");
                printf("%s: %.2f km²\n", cidade1, area1);
                printf("%s: %.2f km²\n", cidade2, area2);
                if (area1 > area2) {
                    printf("Resultado: %s venceu!\n", cidade1);
                    pontos1++;
                } else if (area2 > area1) {
                    printf("Resultado: %s venceu!\n", cidade2);
                    pontos2++;
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            case 3:
                printf("\nComparação por PIB:\n");
                printf("%s: %.2f\n", cidade1, PIB1);
                printf("%s: %.2f\n", cidade2, PIB2);
                if (PIB1 > PIB2) {
                    printf("Resultado: %s venceu!\n", cidade1);
                    pontos1++;
                } else if (PIB2 > PIB1) {
                    printf("Resultado: %s venceu!\n", cidade2);
                    pontos2++;
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            case 4:
                printf("\nComparação por Pontos Turísticos:\n");
                printf("%s: %d pontos turísticos\n", cidade1, pontoturistico1);
                printf("%s: %d pontos turísticos\n", cidade2, pontoturistico2);
                if (pontoturistico1 > pontoturistico2) {
                    printf("Resultado: %s venceu!\n", cidade1);
                    pontos1++;
                } else if (pontoturistico2 > pontoturistico1) {
                    printf("Resultado: %s venceu!\n", cidade2);
                    pontos2++;
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            case 5:
                printf("\nComparação por Densidade Demográfica:\n");
                printf("%s: %.2f habitantes/km²\n", cidade1, denspopu1);
                printf("%s: %.2f habitantes/km²\n", cidade2, denspopu2);
                if (denspopu1 < denspopu2) {
                    printf("Resultado: %s venceu!\n", cidade1);
                    pontos1++;
                } else if (denspopu2 < denspopu1) {
                    printf("Resultado: %s venceu!\n", cidade2);
                    pontos2++;
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            default:
                printf("Opção inválida!\n");
        }
    }

    // Comparar os dois atributos escolhidos
    comparar(opcao1);
    comparar(opcao2);

    // Resultado final
    printf("\nResultado final:\n");
    if (pontos1 > pontos2) {
        printf("A cidade %s venceu com %d pontos!\n", cidade1, pontos1);
    } else if (pontos2 > pontos1) {
        printf("A cidade %s venceu com %d pontos!\n", cidade2, pontos2);
    } else {
        printf("O resultado final é um empate!\n");
    }

    return 0;
}
