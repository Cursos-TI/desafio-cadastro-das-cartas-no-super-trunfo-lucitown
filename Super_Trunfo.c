#include <stdio.h>

int main() {
    char cidade[20];
    char codigo[3];  
    int populacao;
    float area;
    float pib;
    char pontos_turisticos[50]; 

    printf("Digite o nome da cidade: "); 
    scanf("%s", cidade); //não aceita espaços "Rio de Janeiro"
    printf("Digite o código da cidade: ");
    scanf("%s", codigo);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a área: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite os pontos turísticos: ");
    scanf("%s", pontos_turisticos);

    printf("\n    Dados das cartas    \n");
    printf("Nome da cidade: %s\n", cidade);
    printf("Código da cidade: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %s\n", pontos_turisticos);

    
    printf("\nPressione Enter para sair...");
    getchar();
    getchar(); 

    return 0;
}
