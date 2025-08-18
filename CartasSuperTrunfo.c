#include <stdio.h>
    
int main() {

    char estado;                 
    char codigo [4];              
    char Cidade [30];         
    int populacao;                
    float area;                   
    float pib;                    
    int pontosTuristicos;

    
    printf("Digite seu estado: \n");
    scanf("%s", &estado);

    printf("Código: \n");
    scanf("%s", &codigo);

    printf("Nome da cidade: \n");
    scanf("%s", &Cidade); 

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área (em km²): \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("Carta 1\n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Cidade: %s \n", Cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Pontos turísticos: %d \n", pontosTuristicos);

    printf("Carta 2\n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Cidade: %s \n", Cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Pontos turísticos: %d \n", pontosTuristicos);
    
    return 0;
}
