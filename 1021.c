#include <stdio.h>

int main() {
    double valor;
    int aux_valor, n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m5, m01;

    scanf("\n%lf", &valor);

    aux_valor = valor * 100;

    n100 = aux_valor / 10000; 
    aux_valor = aux_valor % 10000;

    n50 = aux_valor / 5000;
    aux_valor = aux_valor % 5000;

    n20 = aux_valor / 2000;
    aux_valor = aux_valor % 2000;

    n10 = aux_valor / 1000;
    aux_valor = aux_valor % 1000;

    n5 = aux_valor / 500;
    aux_valor = aux_valor % 500;

    n2 = aux_valor / 200;
    aux_valor = aux_valor % 200;

    m1 = aux_valor / 100;
    aux_valor = aux_valor % 100;

    m50 = aux_valor / 50;
    aux_valor = aux_valor % 50;

    m25 = aux_valor / 25;
    aux_valor = aux_valor % 25;

    m10 = aux_valor / 10;
    aux_valor = aux_valor % 10;

    m5 = aux_valor / 5;
    aux_valor = aux_valor % 5;

    m01 = aux_valor / 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m5);
    printf("%d moeda(s) de R$ 0.01\n", m01);
    
    return 0;
}