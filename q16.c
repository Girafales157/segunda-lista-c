#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float idade;
    char g;

    printf("Quantos anos você tem?: ");
    scanf("%f", &idade);

    printf("Qual é o grupo de risco da sua ocupação?/n");
    printf("\n\tb) Baixo;");
    printf("\n\tm) Médio;");
    printf("\n\ta) Alto;\n\n\tRespota: ");
    scanf("%s", &g);

    printf("\nO código de seu seguro é: ");
    if (idade >= 18 && idade <= 24)
    {
        switch (g)
        {
        case 'b':
        case 'B':
            printf("7.");
            break;

        case 'm':
        case 'M':
            printf("8.");
            break;

        case 'a':
        case 'A':
            printf("9.");
            break;
        
        default:
            printf("Opção inválida. Tente novamente.");
            break;
        }
    } else if (idade >= 25 && idade <= 40)
    {
        switch (g)
        {
        case 'b':
        case 'B':
            printf("4.");
            break;

        case 'm':
        case 'M':
            printf("5.");
            break;

        case 'a':
        case 'A':
            printf("6.");
            break;
        
        default:
            printf("Opção inválida. Tente novamente.");
            break;
        }
    } else if (idade >= 41 && idade <= 70)
    {
        switch (g)
        {
        case 'b':
        case 'B':
            printf("1.");
            break;

        case 'm':
        case 'M':
            printf("2.");
            break;

        case 'a':
        case 'A':
            printf("3.");
            break;
        
        default:
            printf("Opção inválida. Tente novamente.");
            break;
        }
    } else
        printf("\nIdade inválida. Tente novamente.");

    printf("\n\n");

    return 0;
}