#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    char sexo;
    float altura;

    printf("Qual o seu sexo?\n\tA) Mulher.\n\tB) Homem.\n");
    sexo = tolower(getch());

    printf("\nInsira sua altura (em metros): ");
    scanf("%f", &altura);

    sexo == 'a'? printf("Seu peso ideal é %.1fkg.", (62.1 * altura) - 44.7): printf("Seu peso ideal é %.1fkg.", (72.7 * altura) - 58);

    return 0;
}
