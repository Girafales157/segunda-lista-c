#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, m;

    printf("Insira a nota #1: ");
    scanf("%f", &n1);
    printf("Insira a nota #2: ");
    scanf("%f", &n2);
    printf("Insira a nota #3: ");
    scanf("%f", &n3);

    m = (n1+n2+n3)/3;

    if (m < 5){
        printf("Reprovado.");
    } else if (m >= 5 && m < 7){
        printf("Exame.");
    } else 
        printf("Aprovado.");

    return 0;
}