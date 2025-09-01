#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i;

    printf("Insira um número: ");
    scanf("%i", &i);

    printf("\nO número é ");

    i%2 == 0? printf("par."): printf("ímpar.");

    return 0;
}