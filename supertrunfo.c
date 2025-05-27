#include <stdio.h>

// Desafio Super Trunfo
// Tema 2 - Lógica


int main() {

    // Declaração de variáveis para armazenar os dados pré-definidos

    char estado1[50] = "Distrito Federal";
    char codigo1[4] = "A01";
    char cidade1[50] = "Brasília";
    int populacao1 = 2000000;
    float area1 = 154;
    float pib1 = 2000000000;
    int pontur1 = 1;

    char estado2[50] = "Minas Gerais";
    char codigo2[4] = "B01";
    char cidade2[50] = "Belo Horizonte";
    int populacao2 = 6000000;
    float area2 = 1300;
    float pib2 = 800000000;
    int pontur2 = 1;

    // Cálculos

    float densipopu1 = populacao1 / area1;

    float densipopu2 = populacao2 / area2;


    // Exibir menu

    int opcao1, opcao2;
    printf("\nEscolha dois atributos:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade demográfica\n");
    printf("Escolha o primeiro atributo:");
    scanf("%d", &opcao1);

    printf("Escolha outro atributo:");
    scanf("%d", &opcao2);

    // Comparação
    float v1c1, v1c2, v2c1, v2c2;
    
            v1c1 = (opcao1 == 1) ? populacao1 :
                    (opcao1 == 2) ? area1 :
                    (opcao1 == 3) ? pib1 :
                    (opcao1 == 4) ? pontur1 : densipopu1;

             v1c2 = (opcao1 == 1) ? populacao2 :
                    (opcao1 == 2) ? area2 :
                    (opcao1 == 3) ? pib2 :
                    (opcao1 == 4) ? pontur2 : densipopu2;

            v2c1 = (opcao2 == 1) ? populacao1 :
                    (opcao2 == 2) ? area1 :
                    (opcao2 == 3) ? pib1 :
                    (opcao2 == 4) ? pontur1 : densipopu1;

             v2c2 = (opcao2 == 1) ? populacao2 :
                    (opcao2 == 2) ? area2 :
                    (opcao2 == 3) ? pib2 :
                    (opcao2 == 4) ? pontur2 : densipopu2;
    
    // Retornar os valores
    printf("\nComparação:\n");
    printf("%s: %.2f X. %s: %.2f\n", cidade1, v1c1, cidade2, v1c2);
    printf("%s: %.2f X. %s: %.2f\n", cidade1, v2c1, cidade2, v2c2);

    // Acrescento para determinar vitórias
    int vitoria1 = 0, vitoria2 = 0;
    
    if ((opcao1 == 5 && v1c1 < v1c2) || (opcao1 != 5 && v1c1 > v1c2))
        vitoria1++;
    else if (v1c1 != v1c2)
        vitoria2++;

    if ((opcao2 == 5 && v2c1 < v2c2) || (opcao2 != 5 && v2c1 > v2c2))
        vitoria1++;
    else if (v2c1 != v2c2)
        vitoria2++;

    // Balanço e finalização
    printf("\nResultado:\n");
    if (vitoria1 > vitoria2)
        printf("%s venceu!\n", cidade1);
    else if (vitoria1 < vitoria2)
        printf("%s venceu!\n", cidade2);
    else
        printf("Empate!\n");

    // Encerramento do programa
    
return 0;

}
