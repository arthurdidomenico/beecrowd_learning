#include <stdio.h>

int main() {

    int idade_em_dias, ano, mes, dia, resto_ano;
    scanf("%d", &idade_em_dias);
    ano = idade_em_dias / 365;
    resto_ano = idade_em_dias % 365;
    mes = resto_ano / 30;
    dia = resto_ano % 30;
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
    return 0;
}