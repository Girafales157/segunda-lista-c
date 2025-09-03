#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int a, b, c;

    printf("Digite três valores inteiros:\n\t#1: ");
    scanf("%d", &a);
    printf("\t#2: ");
    scanf("%d", &b);
    printf("\t#3: ");
    scanf("%d", &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("\nOs valores formam um triângulo.\n");
        if (a == b && b == c) {
            printf("Tipo: Equilátero\n");
        } else if (a == b || a == c || b == c) {
            printf("Tipo: Isósceles\n");
        } else {
            printf("Tipo: Escaleno\n");
        }
    } else {
        printf("Os valores NÃO formam um triângulo.\n");
    }

    return 0;
}