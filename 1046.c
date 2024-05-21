#include <stdio.h>

int main(){
    int inicio, fim, horas;

    scanf("%d %d", &inicio, &fim);

    if(inicio > fim)
    {
        horas = (fim + 24) - inicio;
        printf("O JOGO DUROU %d HORA(S)\n", horas);
    }

    else if(fim > inicio)
    {
        horas = fim - inicio;
        printf("O JOGO DUROU %d HORA(S)\n", horas);
    }

    else if(inicio == fim)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    

    return 0;
}