#include <stdio.h> 

int main(){
    int hora1, minuto1, hora2, minuto2, tempo;

    scanf("%d %d %d %d", &hora1, &minuto1, &hora2, &minuto2);
    tempo = ((hora2*60) + minuto2) - ((hora1*60) + minuto1);

    if (tempo <= 0)
    {
        tempo = tempo + (24*60);
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempo/60, tempo%60);

    return 0;
}