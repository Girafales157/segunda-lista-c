#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    char sexo;
    float altura;

    printf("Qual o seu sexo?\n'A' para Mulher e 'B' para Homem (use ponto para determinar a casa decimal!!): ");
    scanf("%c", &sexo);

    printf("\nInsira sua altura (em metros): ");
    scanf("%f", &altura);

    if (sexo == 'a' || sexo == 'A')
        printf("Seu peso ideal é %.1fkg.", (62.1 * altura) - 44.7);
    
    if (sexo == 'b' || sexo == 'B')
        printf("Seu peso ideal é %.1fkg.", (72.7 * altura) - 58);

    return 0;
}
