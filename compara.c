#include <stdio.h>

int main()
{
    char Estado1[50], Nomecidade1[50], Codigodecarta1[10];
    int populacao1, pontosturisticos1;
    float area1;
    float pib1;

    char Estado2[50], Nomecidade2[50], Codigodecarta2[10];
    int populacao2, pontosturisticos2;
    float area2;
    float pib2;

  
    printf("Digite qual o pib do pais da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite qual o pib do pais da carta 2: \n");
    scanf("%f", &pib2);

  
    if (pib1 > pib2)
    {
        printf("Carta 1 venceu!\n");
    }
    else
    {
        printf("Carta 2 venceu!\n");
    }


    printf("Digite quantos pontos turisticos tem a carta 1: \n");
    scanf("%d", &pontosturisticos1);

    printf("Digite quantos pontos turisticos tem a carta 2: \n");
    scanf("%d", &pontosturisticos2);

  
    if (pontosturisticos1 > pontosturisticos2)
    {
        printf("Carta 1 venceu!\n");
    }
    else
    {
        printf("Carta 2 venceu!\n");
    }

    return 0;
}

