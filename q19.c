#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    float salMin, salMes, H, dep, hExt;

    printf("Informe:\n\n\tSalário mínimo: ");
    scanf("%f", &salMin);

    printf("\n\tHoras trabalhadas: ");
    scanf("%f", &H);
    
    printf("\n\tNúmero de dependentes: ");
    scanf("%f", &dep);

    printf("\n\tHoras extras trabalhadas: ");
    scanf("%f", &hExt);

    salMes = H * salMin/5; //valor de hora trabalhada
    salMes += 32 * dep; //acrescenta 32 pila por cabeça
    salMes += hExt * (salMin/5) * 1.5; //salario bruto

    if (salMes >= 200 && salMes <= 500)
    {
        printf("Salário a receber: R$ ");
        salMes > 350? printf("%.2f.\n\n", (salMes*0.9)+50): printf("%.2f.\n\n", (salMes*0.9)+100);
    } else if (salMes > 500)
    {
        printf("Salário a receber: R$ %.2f.\n\n", salMes*0.8+50);
    } else
        printf("Salário a receber: R$ %.2f.\n\n", salMes+100);

    return 0;
}