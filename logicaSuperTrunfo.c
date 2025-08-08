#include <stdio.h>
#include <string.h> // Necessário para a função strtok para fgets

int main(){
    char estado01[50], codigo01[50], cidade01[50];
    int populacao01, turismo01;
    float area01, pib01, densidade01, capita01;

    // Primeira Carta (Mesmo que so foi citado na video aula sobre fgets, fui atrás descobrir como usar ele)
    printf("*** Digite a PRIMEIRA Carta ***\n");
    printf("Digite o nome do Estado: \n");
    fgets(estado01, 50, stdin);
    strtok(estado01, "\n"); 

    printf("Digite o Código: \n");
    fgets(codigo01, 50, stdin);
    strtok(codigo01, "\n");

    printf("Digite a Cidade: \n");
    fgets(cidade01, 50, stdin);
    strtok(cidade01, "\n");

    printf("Digite a População: \n");
    scanf("%d", &populacao01);

    printf("Digite o KM da Área: \n");
    scanf("%f", &area01);

    printf("Digite o PIB (Apenas números): \n");
    scanf("%f", &pib01);

    printf("Digite os Pontos Turísticos: \n");
    scanf("%d", &turismo01);
    
    densidade01 = (float)populacao01 / area01;
    capita01 = pib01 / (float)populacao01;

    printf("Nome do Estado: %s\n", estado01);
    printf("Número do Código: %s\n", codigo01);
    printf("Nome da Cidade: %s\n", cidade01);
    printf("Número da População: %d\n", populacao01);
    printf("Extensão da Área: %.2f\n", area01);
    printf("Valor do PIB: %.2f\n", pib01);
    printf("Pontos turísticos: %d\n", turismo01);
    printf("Densidade Populacional: %.2f\n", densidade01);
    printf("PIB per Capita: %.2f\n", capita01);

    // Segunda Carta
    char estado02[50], codigo02[50], cidade02[50];
    int populacao02, turismo02;
    float area02, pib02, densidade02, capita02;

    // Limpa o buffer da entrada para não causar problemas para a proxima string
    getchar();

    printf("*** Digite a SEGUNDA Carta ***\n");

    printf("Digite o nome do Estado: \n");
    fgets(estado02, 50, stdin);
    strtok(estado02, "\n");

    printf("Digite o Código: \n");
    fgets(codigo02, 50, stdin);
    strtok(codigo02, "\n");

    printf("Digite a Cidade: \n");
    fgets(cidade02, 50, stdin);
    strtok(cidade02, "\n");

    printf("Digite a População: \n");
    scanf("%d", &populacao02);

    printf("Digite o KM da Área: \n");
    scanf("%f", &area02);

    printf("Digite o PIB: \n");
    scanf("%f", &pib02);

    printf("Digite os Pontos Turísticos: \n");
    scanf("%d", &turismo02);

    //Cálculo da densidade e per capita
    densidade02 = (float)populacao02 / area02;
    capita02 = pib02 / (float)populacao02;

    printf("Nome do Estado: %s\n", estado02);
    printf("Número do Código: %s\n", codigo02);
    printf("Nome da Cidade: %s\n", cidade02);
    printf("Número da População: %d\n", populacao02);
    printf("Extensão da Área: %.2f\n", area02);
    printf("Valor do PIB: %.2f\n", pib02);
    printf("Pontos turísticos: %d\n", turismo02);
    printf("Densidade Populacional: %.2f\n", densidade02);
    printf("PIB per Capita: %.2f\n", capita02);

    //Cálculo para o super poder

    float superpoder01 = populacao01 + area01 + (float)turismo01 + pib01 + capita01 + (1.0 / densidade01);
    float superpoder02 = populacao02 + area02 + (float)turismo02 + pib02 + capita02 + (1.0 / densidade02);

    //Menu de comparação
    int escolhaDoJogador;
    char atributo_nome[50];

    printf("**** Batalha de Cartas INICIADA!!! ****\n");
    printf("## Escolha o ATRIBUTO para disputar! ##\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite sua escolha (1-5): ");
    scanf("%d", &escolhaDoJogador);

    printf("\n--- Resultado da Batalha ---\n");
    printf("Carta 1: %s\n", estado01);
    printf("Carta 2: %s\n", estado02);

   switch (escolhaDoJogador) {
        case 1:
            printf("Atributo: População\n");
            printf("Valor na Carta 1: %d\n", populacao01);
            printf("Valor na Carta 2: %d\n", populacao02);
            if (populacao01 > populacao02) {
                printf("Vencedor: Carta 1 (%s)\n", estado01);
            } else if (populacao02 > populacao01) {
                printf("Vencedor: Carta 2 (%s)\n", estado02);
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("Atributo: Área\n");
            printf("Valor na Carta 1: %.2f\n", area01);
            printf("Valor na Carta 2: %.2f\n", area02);
            if (area01 > area02) {
                printf("Vencedor: Carta 1 (%s)\n", estado01);
            } else if (area02 > area01) {
                printf("Vencedor: Carta 2 (%s)\n", estado02);
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("Valor na Carta 1: %.2f\n", pib01);
            printf("Valor na Carta 2: %.2f\n", pib02);
            if (pib01 > pib02) {
                printf("Vencedor: Carta 1 (%s)\n", estado01);
            } else if (pib02 > pib01) {
                printf("Vencedor: Carta 2 (%s)\n", estado02);
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("Valor na Carta 1: %d\n", turismo01);
            printf("Valor na Carta 2: %d\n", turismo02);
            if (turismo01 > turismo02) {
                printf("Vencedor: Carta 1 (%s)\n", estado01);
            } else if (turismo02 > turismo01) {
                printf("Vencedor: Carta 2 (%s)\n", estado02);
            } else {
                printf("Empate!\n");
            }
            break;
        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("Valor na Carta 1: %.2f\n", densidade01);
            printf("Valor na Carta 2: %.2f\n", densidade02);
            // Regra especial: vence a carta com o menor valor
            if (densidade01 < densidade02) {
                printf("Vencedor: Carta 1 (%s)\n", estado01);
            } else if (densidade02 < densidade01) {
                printf("Vencedor: Carta 2 (%s)\n", estado02);
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}