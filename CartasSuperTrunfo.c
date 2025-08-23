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
    int compare;


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


    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Compare: ");
    scanf("%d", &compare);

    printf("\nResultado:\n");

    if (compare == 1) {
        printf("População - %s: %lu | %s: %lu\n", carta1.cidade, carta1.populacao, carta2.cidade, carta2.populacao);
        if (carta1.populacao > carta2.populacao)
            printf("Carta 1 (%s) venceu!\n", carta1.cidade);
        else
            printf("Carta 2 (%s) venceu!\n", carta2.cidade);
    }
    else if (compare == 2) {
        printf("Área - %s: %.2f | %s: %.2f\n", carta1.cidade, carta1.area, carta2.cidade, carta2.area);
        if (carta1.area > carta2.area)
            printf("Carta 1 (%s) venceu!\n", carta1.cidade);
        else
            printf("Carta 2 (%s) venceu!\n", carta2.cidade);
    }
    else if (compare == 3) {
        printf("PIB - %s: %.2f | %s: %.2f\n", carta1.cidade, carta1.pib, carta2.cidade, carta2.pib);
        if (carta1.pib > carta2.pib)
            printf("Carta 1 (%s) venceu!\n", carta1.cidade);
        else
            printf("Carta 2 (%s) venceu!\n", carta2.cidade);
    }
    else if (compare == 4) {
        printf("Pontos Turísticos - %s: %d | %s: %d\n", carta1.cidade, carta1.pontosTuristicos, carta2.cidade, carta2.pontosTuristicos);
        if (carta1.pontosTuristicos > carta2.pontosTuristicos)
            printf("Carta 1 (%s) venceu!\n", carta1.cidade);
        else
            printf("Carta 2 (%s) venceu!\n", carta2.cidade);
    }
    else if (compare == 5) {
        printf("Densidade Populacional - %s: %.2f | %s: %.2f\n", carta1.cidade, carta1.densidadePopulacional, carta2.cidade, carta2.densidadePopulacional);
        if (carta1.densidadePopulacional < carta2.densidadePopulacional)
            printf("Carta 1 (%s) venceu!\n", carta1.cidade);
        else
            printf("Carta 2 (%s) venceu!\n", carta2.cidade);
    }
    else if (compare == 6) {
        printf("PIB per Capita - %s: %.2f | %s: %.2f\n", carta1.cidade, carta1.pibPerCapita, carta2.cidade, carta2.pibPerCapita);
        if (carta1.pibPerCapita > carta2.pibPerCapita)
            printf("Carta 1 (%s) venceu!\n", carta1.cidade);
        else
            printf("Carta 2 (%s) venceu!\n", carta2.cidade);
    }
    else if (compare == 7) {
        printf("Super Poder - %s: %.2f | %s: %.2f\n", carta1.cidade, carta1.superPoder, carta2.cidade, carta2.superPoder);
        if (carta1.superPoder > carta2.superPoder)
            printf("Carta 1 (%s) venceu!\n", carta1.cidade);
        else
            printf("Carta 2 (%s) venceu!\n", carta2.cidade);
    }
    else {
        printf("Opção inválida!\n");
    }

    return 0;
}