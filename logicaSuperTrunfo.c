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
    int escolha1, escolha2;
    int atributos_usados[6] = {0}; // Marcar atributos já escolhidos

    printf("**** Batalha de Cartas INICIADA!!! ****\n");
    printf("## Escolha o PRIMEIRO ATRIBUTO para disputar! ##\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &escolha1);

    atributos_usados[escolha1] = 1; // Marca o primeiro atributo como usado

    printf("## Escolha o SEGUNDO ATRIBUTO para disputar! ##\n");
    for(int i = 1; i <= 5; i++){
        if(!atributos_usados[i]){ // Mostra apenas atributos não escolhidos
            switch(i){
                case 1: printf("1. População\n"); break;
                case 2: printf("2. Área\n"); break;
                case 3: printf("3. PIB\n"); break;
                case 4: printf("4. Pontos Turísticos\n"); break;
                case 5: printf("5. Densidade Demográfica\n"); break;
            }
        }
    }
    scanf("%d", &escolha2);

    // Comparação individual dos atributos
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;

    // Função de pegar valores
    switch(escolha1){
        case 1: valor1_c1 = populacao01; valor1_c2 = populacao02; break;
        case 2: valor1_c1 = area01; valor1_c2 = area02; break;
        case 3: valor1_c1 = pib01; valor1_c2 = pib02; break;
        case 4: valor1_c1 = turismo01; valor1_c2 = turismo02; break;
        case 5: valor1_c1 = densidade01; valor1_c2 = densidade02; break;
    }
    switch(escolha2){
        case 1: valor2_c1 = populacao01; valor2_c2 = populacao02; break;
        case 2: valor2_c1 = area01; valor2_c2 = area02; break;
        case 3: valor2_c1 = pib01; valor2_c2 = pib02; break;
        case 4: valor2_c1 = turismo01; valor2_c2 = turismo02; break;
        case 5: valor2_c1 = densidade01; valor2_c2 = densidade02; break;
    }

    // Mostra os valores individuais e compara
    printf("\n--- Resultado da Comparação ---\n");
    printf("Carta 1: %s\n", estado01);
    printf("Carta 2: %s\n", estado02);

    printf("Atributo 1: ");
    switch(escolha1){
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
    }
    printf("Carta 1: %.2f\n", valor1_c1);
    printf("Carta 2: %.2f\n", valor1_c2);

    printf("Atributo 2: ");
    switch(escolha2){
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
    }
    printf("Carta 1: %.2f\n", valor2_c1);
    printf("Carta 2: %.2f\n", valor2_c2);

    // Regra especial para densidade (menor vence)
    int pontos_c1 = 0, pontos_c2 = 0;

    if(escolha1 == 5){ // densidade
        if(valor1_c1 < valor1_c2) pontos_c1++;
        else if(valor1_c2 < valor1_c1) pontos_c2++;
    } else {
        if(valor1_c1 > valor1_c2) pontos_c1++;
        else if(valor1_c2 > valor1_c1) pontos_c2++;
    }

    if(escolha2 == 5){ // densidade
        if(valor2_c1 < valor2_c2) pontos_c1++;
        else if(valor2_c2 < valor2_c1) pontos_c2++;
    } else {
        if(valor2_c1 > valor2_c2) pontos_c1++;
        else if(valor2_c2 > valor2_c1) pontos_c2++;
    }

    // Soma final dos atributos para desempate
    float soma_c1 = valor1_c1 + valor2_c1;
    float soma_c2 = valor1_c2 + valor2_c2;

    printf("\nSoma dos Atributos:\n");
    printf("Carta 1: %.2f\n", soma_c1);
    printf("Carta 2: %.2f\n", soma_c2);

    if(soma_c1 > soma_c2){
        printf("Vencedor FINAL: Carta 1 (%s)\n", estado01);
    } else if(soma_c2 > soma_c1){
        printf("Vencedor FINAL: Carta 2 (%s)\n", estado02);
    } else {
        printf("Empate!\n");
    }

    return 0;
}