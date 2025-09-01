#include <math.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char input;
    int v1, v2;

    printf("Escolha uma das operações a seguir:\n");
    printf("\n\ta) Soma.");
    printf("\n\tb) Raíz quadrada.");
    printf("\n\tc) Finalizar.\n");
    printf("\nResposta: ");

    scanf("%c", &input);

    switch (input)
    {
    case 'a':
    case 'A':
        printf("Valor 1 = ");
        scanf("%i", &v1);

        printf("Valor 2 = ");
        scanf("%i", &v2);
        
        printf("%i + %i = %i", v1, v2, v1+v2);
        break;

    case 'b':
    case 'B':
        printf("Insira o valor: ");
        scanf("%i", &v1);

        v2 = sqrt(v1);
        printf("Raíz quadrada de %i = %i", v1, v2);
        break;

    case 'c':
    case 'C':
    default:
        printf("Programa finalizado.");
        break;
    }

    return 0;
}