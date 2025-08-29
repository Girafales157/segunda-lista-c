#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, n3, n4, m;

    printf("\nInsira a primeira nota: ");
    scanf("%f", &n1);

    printf("\nInsira a segunda nota: ");
    scanf("%f", &n2);

    printf("\nInsira a terceira nota: ");
    scanf("%f", &n3);

    printf("\nInsira a quarta nota: ");
    scanf("%f", &n4);

    m = (n1 + n2 + n3 + n4)/4;

    printf("\nSua nota final é %.1f. Você foi ", m);
    m >= 7? printf("aprovado.\n"): printf("reprovado.\n");

    return 0;
}
