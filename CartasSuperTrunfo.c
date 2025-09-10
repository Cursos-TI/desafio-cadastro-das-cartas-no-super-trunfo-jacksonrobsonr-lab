#include <stdio.h>


int main() {

        char estado_carta1, estado_carta2;                  //Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
        int codigo_carta1, codigo_carta2;                   //Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
        char cidade_carta1[20], cidade_carta2[20];          //Nome da Cidade: O nome da cidade. Tipo: char[] (string)
        int n_habitantes_carta1, n_habitantes_carta2;       //População: O número de habitantes da cidade. Tipo: int
        float area_carta1, area_carta2;                     //Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
        float pib_carta1, pib_carta2;                       //PIB: O Produto Interno Bruto da cidade. Tipo: float
        int turismo_carta1, turismo_carta2;                 //Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
        float densidade_carta1, densidade_carta2;           //Densidade Populacional
        float pib_perc_carta1, pib_perc_carta2;



//entrada de dados da carta 1
printf("Insira as informações da carta 1\n");
printf("________________________________\n");

        printf("Insira a letra de 'A' a 'H' que representa seu estado da sua primeira carta: ");
        scanf(" %c", &estado_carta1);
        printf("Inserir o código da carta: ");
        scanf(" %d", &codigo_carta1);
        printf("Insira o nome da cidade: ");
        scanf(" %s", &cidade_carta1);
        printf("Insira o número de habitantes da cidade: ");
        scanf(" %d", &n_habitantes_carta1);
        printf("Insira a área da cidade em quilômetros quadrados: ");
        scanf(" %f", &area_carta1);
        printf("Insira o Produto Interno Bruto da cidade: ");
        scanf(" %f", &pib_carta1);
        printf("Insira quantidade de pontos turísticos na cidade: ");
        scanf(" %d", &turismo_carta1);

//entrada de dados da carta 2
printf("\n\nInsira as informações da carta 2\n");
printf("________________________________\n");

        printf("Insira a letra de 'A' a 'H' que representa seu estado da sua segunda carta: ");
        scanf(" %c", &estado_carta2);
        printf("Inserir o código da carta: ");
        scanf(" %d", &codigo_carta2);
        printf("Insira o nome da cidade: ");
        scanf(" %s", &cidade_carta2);
        printf("Insira o número de habitantes da cidade: ");
        scanf(" %d", &n_habitantes_carta2);
        printf("Insira a área da cidade em quilômetros quadrados: ");
        scanf(" %f", &area_carta2);
        printf("Insira o Produto Interno Bruto da cidade: ");
        scanf(" %f", &pib_carta2);
        printf("Insira quantidade de pontos turísticos na cidade: ");
        scanf(" %d", &turismo_carta2);

        
    densidade_carta1 = n_habitantes_carta1 / area_carta1;        //Calcular a Densidade Populacional da carta 1
    densidade_carta2 = n_habitantes_carta2 / area_carta2;        //Calcular a Densidade Populacional da carta 2
    pib_perc_carta1 = pib_carta1 / n_habitantes_carta1;         //Calcular o PIB per Capita da carta 1
    pib_perc_carta2 = pib_carta2 / n_habitantes_carta2;         //Calcular o PIB per Capita da carta 2


//saída carta 1
printf("Carta 1\n");

        printf("Estado: %c\n", estado_carta1);
        printf("Código: %c0%d\n", estado_carta1,codigo_carta1);
        printf("Nome da Cidade: %s\n", cidade_carta1);
        printf("População: %d\n", n_habitantes_carta1);
        printf("Área: %.2f km²\n", area_carta1);
        printf("PIB: %.2f bilhões de reais\n", pib_carta1);
        printf("Número de Pontos Turísticos: %d\n", turismo_carta1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_carta1);
        printf("PIB per Capita: %.2f reais\n\n", pib_perc_carta1);

//saída carta 2
printf("Carta 2\n");

        printf("Estado: %c\n", estado_carta2);
        printf("Código: %c0%d\n", estado_carta2,codigo_carta2);
        printf("Nome da Cidade: %s\n", cidade_carta2);
        printf("População: %d\n", n_habitantes_carta2);
        printf("Área: %.2f km²\n", area_carta2);
        printf("PIB: %.2f bilhões de reais\n", pib_carta2);
        printf("Número de Pontos Turísticos: %d\n", turismo_carta2);
        printf("Densidade Populacional: %.2f\n", densidade_carta2);
        printf("PIB per Capita: %.2f reais\n\n", pib_perc_carta2);

}
