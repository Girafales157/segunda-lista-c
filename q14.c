#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int cod;

    printf("Insira seu código: ");
    scanf("%i", &cod);

    switch (cod)
    {
    case 1:
        printf("\nEscrituário: Recebe aumento de 50,00%%.");
        break;

    case 2:
        printf("\nSecretário: Recebe aumento de 35,00%%.");
        break;

    case 3:
        printf("\nCaixa: Recebe aumento de 20,00%%.");
        break;

    case 4:
        printf("\nGerente: Recebe aumento de 10,00%%.");
        break;

    case 5:
        printf("\nDiretor: Não recebe aumento.");
        break;

    default:
        printf("\nOpção inválida. Tente novamente.");
    }

    printf("\n");

    return 0;
}