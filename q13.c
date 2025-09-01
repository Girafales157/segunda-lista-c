#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Quantos anos você tem?: ");
    scanf("%i", &idade);

    printf("Você é ");

    if (idade > 55)
    {
        printf("idoso.");
    } else if (idade >= 20 && idade <= 55)
    {
        printf("adulto.");
    } else if (idade >= 12 && idade <= 19)
    {
        printf("adolescente.");
    } else if (idade >= 3 && idade <= 11)
    {
        printf("criança.");
    } else
        printf("recém-nascido.");
    
    return 0;
}