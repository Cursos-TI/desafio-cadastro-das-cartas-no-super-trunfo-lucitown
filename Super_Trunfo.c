#include <stdio.h>
typedef struct {   //definindo os tipos 
        char cidade[20];
        char codigo[3];  
        int populacao;
        float area;
        float pib;
        int pontos_turisticos; 
        float densidade_demografica;
        float pibpercapita;
    } Carta;

void iniciar_jogo();

int main() {
    int opcao;
    do {

    printf("Menu\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ler regras\n");
    printf("3. Sair\n");
    scanf("%d", &opcao);
    getchar();

    switch (opcao) {
        case 1:
            iniciar_jogo();
            break;
        case 2:
            printf("Regras: sei lakkkkkkkkk volta pro menu e testa\n");
            printf("Pressione enter para voltar ao menu.\n");
            getchar();
            break;
        case 3:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    
}while(opcao != 3);
return 0;
}
     void iniciar_jogo(){
            Carta cartas[2];
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
                scanf("%d", &cartas[i].pontos_turisticos);
                cartas[i].densidade_demografica = (float)cartas[i].populacao / cartas[i].area;
                cartas[i].pibpercapita = cartas[i].pib / (float)cartas[i].populacao;
            }
                printf("\n    Dados das cartas    \n");
                

            for(int i = 0; i < 2; i++) {
                printf("\n Nome da cidade: %s\n", cartas[i].cidade);
                printf("Código da cidade: %s\n", cartas[i].codigo);
                printf("População: %d\n", cartas[i].populacao);
                printf("Área: %.2f km^2\n", cartas[i].area);
                printf("PIB: %.2f\n", cartas[i].pib);
                printf("Pontos turísticos: %d\n", cartas[i].pontos_turisticos);
                printf("Densidade demográfica: %.2f\n ", cartas[i].densidade_demografica);
                printf("Pib per Capita: %.2f\n", cartas[i].pibpercapita);
            
            }

        printf("Combate\n");// Combate entre as cartas
        int combate;
            do {
                printf("0. Voltar\n");
                printf("1. Comparar população\n");
                printf("2. Comparar área\n");
                printf("3. Comparar PIB\n");
                printf("4. Comparar Pontos turísticos\n");
                printf("5. Comparar Densidade demográfica\n");
                printf("6. Comparar Pib per Capita\n");
                scanf("%d", &combate);
                getchar();

                switch (combate) { //combate comparando cada atributo individualmente
                    case 1:
                        printf("Nome da cidade: %s\n", cartas[0].cidade);
                        printf("População: %d\n", cartas[0].populacao);
                        printf("Nome da cidade: %s\n", cartas[1].cidade);
                        printf("População: %d\n", cartas[1].populacao);
                        if (cartas[0].populacao > cartas[1].populacao) {                     
                        printf("%s ganhou pela população\n", cartas[0].cidade);
                        }
                    else if (cartas[0].populacao < cartas[1].populacao){                    
                        printf("%s ganhou pela população\n", cartas[1].cidade);
                        }
                    else printf("Empate no quesito população\n");
                    printf("Pressione enter para voltar ao menu de combates.");
                    getchar();
                        break;
                    case 2:
                        printf("Nome da cidade: %s\n", cartas[0].cidade);
                        printf("Área: %.2f km^2\n", cartas[0].area);
                        printf("Nome da cidade: %s\n", cartas[1].cidade);
                        printf("Área: %.2f km^2\n", cartas[1].area);
                        if (cartas[0].area > cartas[1].area){
                             printf("%s ganhou pela area\n", cartas[0].cidade);
                             }
                        else if (cartas[0].area < cartas[1].area){
                            printf("%s ganhou pela area\n", cartas[1].cidade);
                              }
                        else printf("Empate no quesito area\n");
                    printf("Pressione enter para voltar ao menu de combates.");
                    getchar();
                    break;
                    case 3:
                        printf("Nome da cidade: %s\n", cartas[0].cidade);
                        printf("PIB: %.2f\n", cartas[1].pib);
                        printf("Nome da cidade: %s\n", cartas[1].cidade);
                        printf("PIB: %.2f\n", cartas[1].pib);
                        if (cartas[0].pib > cartas[1].pib){
                            printf("%s ganhou pelo PIB\n", cartas[0].cidade);
                        }
                         else if (cartas[0].pib < cartas[1].pib){        
                            printf("%s ganhou pelo PIB\n", cartas[1].cidade);
                        }
                         else printf("Empate no quesito PIB\n");
                    printf("Pressione enter para voltar ao menu de combates.");
                    getchar();
                    break;
                    case 4:
                        printf("Nome da cidade: %s\n", cartas[0].cidade);
                        printf("Pontos turísticos: %d\n", cartas[0].pontos_turisticos);
                        printf("Nome da cidade: %s\n", cartas[1].cidade);
                        printf("Pontos turísticos: %d\n", cartas[1].pontos_turisticos);
                        if (cartas[0].pontos_turisticos > cartas[1].pontos_turisticos){
                            printf("%s ganhou pelos pontos turísticos\n", cartas[0].cidade);
                        }
                        else if (cartas[0].pontos_turisticos < cartas[1].pontos_turisticos) {
                            printf("%s ganhou pelos pontos turísticos\n", cartas[1].cidade);
                        }
                        else printf("Empate no quesito pontos turísticos\n");
                    printf("Pressione enter para voltar ao menu de combates.");
                    getchar();
                    break;
                    case 5:
                        printf("Nome da cidade: %s\n", cartas[0].cidade);
                        printf("Densidade demográfica: %.2f\n ", cartas[0].densidade_demografica);
                        printf("Nome da cidade: %s\n", cartas[1].cidade);
                        printf("Densidade demográfica: %.2f\n ", cartas[1].densidade_demografica);
                        if (cartas[0].densidade_demografica > cartas[1].densidade_demografica){
                            printf("%s ganhou pela densidade demográfica\n", cartas[0].cidade);
                        }
                        else if (cartas[0].densidade_demografica < cartas[1].densidade_demografica) {
                            printf("%s ganhou pela densidade demográfica\n", cartas[1].cidade);
                        }
                        else printf("Empate no quesito densidade demográfica\n");
                    printf("Pressione enter para voltar ao menu de combates.");
                    getchar();
                    break;
                    case 6:
                        printf("Nome da cidade: %s\n", cartas[0].cidade);
                        printf("Pib per Capita: %.2f\n", cartas[0].pibpercapita);
                        printf("Nome da cidade: %s\n", cartas[1].cidade);
                        printf("Pib per Capita: %.2f\n", cartas[1].pibpercapita);
                        if (cartas[0].pibpercapita > cartas[1].pibpercapita){
                            printf("%s ganhou pelo Pib per Capita\n", cartas[0].cidade);
                        }
                        else if (cartas[0].pibpercapita < cartas[1].pibpercapita) {
                            printf("%s ganhou pelo Pib per Capita\n", cartas[1].cidade);
                        }
                        else printf("Empate no quesito Pib per Capita\n");
                    printf("Pressione enter para voltar ao menu de combates.");
                    getchar();
                    break;
                    case 0:                
                        printf("Voltando ao menu principal...\n");
                        break;
                    default:
                        printf("Opção inválida.\n");
                }
            } while (combate != 0);
    }





