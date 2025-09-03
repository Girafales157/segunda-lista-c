#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int v1, v2, r, opc;

    printf("Insira:\n");
    printf("\tValor #1: ");
    scanf("%i", &v1);

    printf("\tValor #2: ");
    scanf("%i", &v2);

    printf("Escolha a operação:\n");
    printf("\t1. Adição\n\t2. Subtração\n");
    printf("\t3. Multiplicação\n\t4. Divisão\n");
    
    printf("\nResposta: ");
    scanf("%i", &opc);

    switch (opc)
    {
    case 1:
        r = v1 + v2;
        printf("%i + ", v1);
        break;
    case 2:
        r = v1 - v2;
        printf("%i - ", v1);
        break;
    case 3:
        r = v1 * v2;
        printf("%i x ", v1);
        break;
    case 4:
        r = v1 / v2;
        printf("%i / ", v1);
        break;
    default:
    }

    printf("%i = %i", v2, r);
    
    return 0;
}