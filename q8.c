#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float lab, AvSem, EF, NF;

    printf("Insira a nota do trabalho laboratorial: ");
    scanf("%f", &lab);

    printf("\n\nAgora insira a nota da avaliação semestral: ");
    scanf("%f", &AvSem);

    printf("\n\nPor último, insira a nota do exame final: ");
    scanf("%f", &EF);
    
    NF = (lab*2 + AvSem*3 + EF*5)/10;

    if (NF <= 10 && NF >= 8)
    {
        printf("\nMédia final: %.1f\nConceito A\n"), NF;
    } else if (NF < 8&& NF >= 7)
    {
        printf("\nMédia final: %.1f\nConceito B\n", NF);
    } else if (NF < 7&& NF >= 6)
    {
        printf("\nMédia final: %.1f\nConceito C\n", NF);
    } else if (NF < 6&& NF >= 5)
    {
        printf("\nMédia final: %.1f\nConceito D\n", NF);
    } else printf("\nMédia final: %.1f\nConceito E\n", NF);

    return 0;
}