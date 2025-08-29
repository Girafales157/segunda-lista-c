#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int idade;

    printf("Informe sua idade: ");
    scanf("%i", &idade);

    if (idade >= 5 && idade <= 7)
        printf("\nCategoria: Infantil A.");
    if (idade >= 8 && idade <= 10)
        printf("\nCategoria: Infantil B.");
    if (idade >= 11 && idade <= 13)
        printf("\nCategoria: Juvenil A.");
    if (idade >= 14 && idade <= 17)
        printf("\nCategoria: Juvenil B.");
    if (idade > 17)
        printf("\nCategoria: Sênior.");

    return 0;
}
