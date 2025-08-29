#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int matricula, tem4 = 0;
    float n1, n2, n3, media;

    printf("Insira sua matrícula: ");
    scanf("%i", &matricula);

    while (matricula != 0){

        printf("Insira a nota #1: ");
        scanf("%f", &n1);

        printf("Insira a nota #2: ");
        scanf("%f", &n2);

        printf("Insira a nota #3: ");
        scanf("%f", &n3);

        printf("\bMatricula do aluno: %i", matricula);
        printf("\nNotas:\n\t#1 -> %.1f;\n\t#2 -> %.1f;\n\t#3 -> %.1f;\n", n1, n2, n3);

        if (n1 > n2 && n1 > n3){
            n1 *= 4;
            tem4 = 1;
        }
        else
            n1 *= 3;

        if (n2 > n1 && n2 > n3){
            n2 *= 4;
            tem4 = 1;
        }
        else
            n2 *= 3;

        if (n3 > n1 && n3 > n2){
            n3 *= 4;
            tem4 = 1;
        }
        else
            n3 *= 3;

        media = tem4 != 0? (n1+n2+n3)/10: (n1+n2+n3)/9;
        tem4 != 0? printf("Média: (%.1f + %.1f + %.1f)/10 = %.1f\n", n1, n2, n3, media): printf("Média: (%.1f + %.1f + %.1f)/9 = %.1f\n", n1, n2, n3, media);
        printf("Situação: ");
        media >= 5? printf("Aprovado com média %.1f.\n\n", media): printf("Reprovado com média %.1f.\n\n", media);

        printf("Insira sua matrícula: ");
        scanf("%i", &matricula);
    }

    return 0;
}
