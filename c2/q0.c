/*fa�a um algortimo que receba como entrada 4 notas bimestrais de uma turmade 50 alunos.
Calcule a m�dia de cada aluno e a m�dia anual da turma para cada aluno verificar se o mesmo foi aprovado ou reprovado, sabendo que a m�dia de aprova��o � 6.*/
#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    float media[4];

    printf("Insira:\n\tNota 1: ");
    scanf("%f", &media[0]);

    printf("\tNota 2: ");
    scanf("%f", &media[1]);

    printf("\tNota 3: ");
    scanf("%f", &media[2]);

    printf("\tNota 4: ");
    scanf("%f", &media[3]);

    float mf = (media[0]+media[1]+media[2]+media[3])/4;

    printf("\nM�dia final: %.1f", mf);

    return 0;
}
