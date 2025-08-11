#include <stdio.h>

typedef struct {
    char cidade[20];
    char codigo[3];  
    int populacao;
    float area;
    float pib;
    char pontos_turisticos[50]; 
} Carta;

int main(){
    Carta cartas[2]; //uma lista pra poder colocar duas cartas
    for(int i = 0; i < 2; i++) {
        printf("Digite os dados das Cartas.\n");

        printf("Digite o nome da cidade: "); 
        scanf("%s", cartas[i].cidade); //não aceita espaços "Rio de Janeiro"
        printf("Digite o código da cidade: ");
        scanf("%s", cartas[i].codigo);
        printf("Digite a população: ");
        scanf("%d", &cartas[i].populacao);
        printf("Digite a área: ");
        scanf("%f", &cartas[i].area);
        printf("Digite o PIB: ");
        scanf("%f", &cartas[i].pib);
        printf("Digite os pontos turísticos: ");
        scanf("%s", cartas[i].pontos_turisticos);
    }
        printf("\n    Dados das cartas    \n");

    for(int i = 0; i < 2; i++) {
        printf("Nome da cidade: %s\n", cartas[i].cidade);
        printf("Código da cidade: %s\n", cartas[i].codigo);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km^2\n", cartas[i].area);
        printf("PIB: %.2f\n", cartas[i].pib);
        printf("Pontos turísticos: %s\n", cartas[i].pontos_turisticos);
        
    }

printf("Combate\n");// Combate entre as cartas

int pontosCarta1 = 0;//contador
int pontosCarta2 = 0; 

if (cartas[0].populacao > cartas[1].populacao) {
    pontosCarta1++; //aqui faz a adição se a carta 1 ganhou
    printf("%s ganhou pela população\n", cartas[0].cidade);
}
else if (cartas[0].populacao < cartas[1].populacao){
    pontosCarta2++;//aqui faz a adição se a carta 2 ganhou
    printf("%s ganhou pela população\n", cartas[1].cidade);
}
else printf("Empate no quesito população");

if (cartas[0].area > cartas[1].area){
     pontosCarta1++;
    printf("%s ganhou pela area\n", cartas[0].cidade);
}
else if (cartas[0].area < cartas[1].area){
     pontosCarta2++;
    printf("%s ganhou pela area\n", cartas[1].cidade);
}
else printf("Empate no quesito area");

if (cartas[0].pib > cartas[1].pib){
     pontosCarta1++;
    printf("%s ganhou pelo PIB\n", cartas[0].cidade);
}
else if (cartas[0].pib < cartas[1].pib){
     pontosCarta2++;
    printf("%s ganhou pelo PIB\n", cartas[1].cidade);
}
else printf("Empate no quesito PIB");

if (cartas[0].pontos_turisticos > cartas[1].pontos_turisticos){
     pontosCarta1++;
    printf("%s ganhou pelos pontos turísticos\n", cartas[0].cidade);
}
else if (cartas[0].pontos_turisticos < cartas[1].pontos_turisticos) {
     pontosCarta2++;
    printf("%s ganhou pelos pontos turísticos\n", cartas[1].cidade);
}
else printf("Empate no quesito pontos turísticos");



if  ( pontosCarta1 >  pontosCarta2) 
    printf("%s Ganhou\n", cartas[0].cidade);
else if ( pontosCarta1 <  pontosCarta2)
    printf("%s Ganhou\n", cartas[1].cidade);
else printf("Empate");


    
    printf("\nPressione Enter para sair...");
    getchar(); //apenas pra não fechar o executável automaticamente
    getchar(); 

    return 0;
}
