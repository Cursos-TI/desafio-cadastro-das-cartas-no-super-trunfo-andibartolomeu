#include <stdio.h>

struct Carta {
    char estado;                 
    char codigo[4];              
    char cidade[50];         
    unsigned long int populacao;
    float area;                   
    float pib;                    
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
};

int main() {
    struct Carta carta1, carta2;
    int escolha1, escolha2;
    int pontos1 = 0, pontos2 = 0;

    // === Entrada Carta 1 ===
    printf("Carta 1 \n");
    printf("Estado: ");
    scanf(" %c", &carta1.estado);

    printf("Código: ");
    scanf("%s", carta1.codigo);

    printf("Cidade: ");
    scanf(" %[^\n]", carta1.cidade);

    printf("População: ");
    scanf("%lu", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta1.superPoder = carta1.populacao + carta1.area + carta1.pib + carta1.pontosTuristicos +
                        carta1.pibPerCapita + (1.0 / carta1.densidadePopulacional);

    // === Entrada Carta 2 ===
    printf("\nCarta 2\n");
    printf("Estado: ");
    scanf(" %c", &carta2.estado);

    printf("Código: ");
    scanf("%s", carta2.codigo);

    printf("Cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("População: ");
    scanf("%lu", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;
    carta2.superPoder = carta2.populacao + carta2.area + carta2.pib + carta2.pontosTuristicos +
                        carta2.pibPerCapita + (1.0 / carta2.densidadePopulacional);

    // === Menu interativo ===
    printf("\nEscolha dois atributos para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Primeira escolha: ");
    scanf("%d", &escolha1);
    printf("Segunda escolha: ");
    scanf("%d", &escolha2);

    printf("\n=== Resultado da Comparação ===\n");

    // Função de comparação usando switch e ternário
    for (int i = 1; i <= 2; i++) {
        int compare = (i == 1) ? escolha1 : escolha2;

        switch (compare) {
            case 1: // População
                printf("População - %s: %lu | %s: %lu -> ", 
                       carta1.cidade, carta1.populacao, carta2.cidade, carta2.populacao);
                (carta1.populacao > carta2.populacao) ? 
                    (printf("%s venceu!\n", carta1.cidade), pontos1++) : 
                    (carta1.populacao < carta2.populacao) ? 
                        (printf("%s venceu!\n", carta2.cidade), pontos2++) : 
                        printf("Empate!\n");
                break;

            case 2: // Área
                printf("Área - %s: %.2f | %s: %.2f -> ", 
                       carta1.cidade, carta1.area, carta2.cidade, carta2.area);
                (carta1.area > carta2.area) ? 
                    (printf("%s venceu!\n", carta1.cidade), pontos1++) : 
                    (carta1.area < carta2.area) ? 
                        (printf("%s venceu!\n", carta2.cidade), pontos2++) : 
                        printf("Empate!\n");
                break;

            case 3: // PIB
                printf("PIB - %s: %.2f | %s: %.2f -> ", 
                       carta1.cidade, carta1.pib, carta2.cidade, carta2.pib);
                (carta1.pib > carta2.pib) ? 
                    (printf("%s venceu!\n", carta1.cidade), pontos1++) : 
                    (carta1.pib < carta2.pib) ? 
                        (printf("%s venceu!\n", carta2.cidade), pontos2++) : 
                        printf("Empate!\n");
                break;

            case 4: // Pontos Turísticos
                printf("Pontos Turísticos - %s: %d | %s: %d -> ", 
                       carta1.cidade, carta1.pontosTuristicos, carta2.cidade, carta2.pontosTuristicos);
                (carta1.pontosTuristicos > carta2.pontosTuristicos) ? 
                    (printf("%s venceu!\n", carta1.cidade), pontos1++) : 
                    (carta1.pontosTuristicos < carta2.pontosTuristicos) ? 
                        (printf("%s venceu!\n", carta2.cidade), pontos2++) : 
                        printf("Empate!\n");
                break;

            case 5: // Densidade (menor vence)
                printf("Densidade Populacional - %s: %.2f | %s: %.2f -> ", 
                       carta1.cidade, carta1.densidadePopulacional, carta2.cidade, carta2.densidadePopulacional);
                (carta1.densidadePopulacional < carta2.densidadePopulacional) ? 
                    (printf("%s venceu!\n", carta1.cidade), pontos1++) : 
                    (carta1.densidadePopulacional > carta2.densidadePopulacional) ? 
                        (printf("%s venceu!\n", carta2.cidade), pontos2++) : 
                        printf("Empate!\n");
                break;

            case 6: // PIB per Capita
                printf("PIB per Capita - %s: %.2f | %s: %.2f -> ", 
                       carta1.cidade, carta1.pibPerCapita, carta2.cidade, carta2.pibPerCapita);
                (carta1.pibPerCapita > carta2.pibPerCapita) ? 
                    (printf("%s venceu!\n", carta1.cidade), pontos1++) : 
                    (carta1.pibPerCapita < carta2.pibPerCapita) ? 
                        (printf("%s venceu!\n", carta2.cidade), pontos2++) : 
                        printf("Empate!\n");
                break;

            case 7: // Super Poder
                printf("Super Poder - %s: %.2f | %s: %.2f -> ", 
                       carta1.cidade, carta1.superPoder, carta2.cidade, carta2.superPoder);
                (carta1.superPoder > carta2.superPoder) ? 
                    (printf("%s venceu!\n", carta1.cidade), pontos1++) : 
                    (carta1.superPoder < carta2.superPoder) ? 
                        (printf("%s venceu!\n", carta2.cidade), pontos2++) : 
                        printf("Empate!\n");
                break;

            default:
                printf("Opção %d inválida!\n", compare);
                break;
        }
    }

    // Resultado final
    printf("\n=== Resultado Final ===\n");
    if (pontos1 > pontos2) {
        printf("Carta 1 (%s) venceu a disputa geral!\n", carta1.cidade);
    } else if (pontos2 > pontos1) {
        printf("Carta 2 (%s) venceu a disputa geral!\n", carta2.cidade);
    } else {
        printf("Empate entre %s e %s!\n", carta1.cidade, carta2.cidade);
    }

    return 0;
}