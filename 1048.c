#include <stdio.h>

int main() {
    float salario, reajuste, percentual;

    scanf("%f", &salario);

    if (salario >= 0 && salario <= 400)
    {
        reajuste = salario * 0.15;
        salario = (salario * 0.15) + salario;
        percentual = 15;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %.0f %%\n", percentual);
    }
    else if (salario > 400 && salario <= 800)
    {
        reajuste = salario * 0.12;
        salario = (salario * 0.12) + salario;
        percentual = 12;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %.0f %%\n", percentual);
    }
    else if (salario > 800 && salario <= 1200)
    {
        reajuste = salario * 0.10;
        salario = (salario * 0.10) + salario;
        percentual = 10;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %.0f %%\n", percentual);
    }
    else if (salario > 1200 && salario <= 2000)
    {
        reajuste = salario * 0.07;
        salario = (salario * 0.07) + salario;
        percentual = 7;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %.0f %%\n", percentual);
    }
    else if (salario > 2000)
    {
        reajuste = salario * 0.04;
        salario = (salario * 0.04) + salario;
        percentual = 4;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %.0f %%\n", percentual);
    }
    
    return 0;
}