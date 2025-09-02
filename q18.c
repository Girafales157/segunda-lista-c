#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float h, hf, H;

    printf("Digite seu número de horas extras trabalhadas em minutos: ");
    scanf("%f", &h);

    printf("Agora insira suas horas-falta em minutos: ");
    scanf("%f", &hf);

    H = h - (2/3*(hf));

    printf("\nHoras extras trabalhadas: %.1f.", h/60);
    printf("\nHoras: %.1f.", H/60);
    printf("\nHoras-falta: %.1f.", hf/60);
    printf("\n");
    
    

    if (H > 2400)
    {
        printf("Prêmio: $500");
    } else if (H > 1800 && H <= 2400)
    {
        printf("Prêmio: $400");
    } else if (H > 1200 && H <= 1800)
    {
        printf("Prêmio: $300");
    } else if (H > 600 && H <= 1200)
    {
        printf("Prêmio: $200");
    } else if (H <= 600)
    {
        printf("Prêmio: $200");
    }

    printf("\n\n");

    return 0;
}