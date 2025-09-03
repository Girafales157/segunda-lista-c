#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3, n4;

    printf("Insira números quaisquer:\n\t1: ");
    scanf("%i", &n1);
    
    printf("\t2: ");
    scanf("%i", &n2);

    printf("\t3: ");
    scanf("%i", &n3);
    
    printf("\t4: ");
    scanf("%i", &n4);

    printf("Números que são divisíveis por 2: ");

    n1 % 2 == 0? printf("%i, ", n1): printf("");
    n2 % 2 == 0? printf("%i, ", n2): printf("");
    n3 % 2 == 0? printf("%i, ", n3): printf("");
    n4 % 2 == 0? printf("%i.", n4): printf(".");

    return 0;
}