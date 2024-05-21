#include <stdio.h>

int main(){
    int dia, hora, min, seg;
    int dia2, hora2, min2, seg2;
    int totaldia, totalhora, totalmin, totalseg, tempo;
    int resto_dia, resto_hora, resto_min;

    scanf("Dia %d\n", &dia);
    scanf("%d : %d : %d\n", &hora, &min, &seg);
    scanf("Dia %d", &dia2);
    scanf("%d : %d : %d", &hora2, &min2, &seg2);

    tempo = ((dia2*24*60*60) + (hora2*3600) + (min2*60) + seg2) - ((dia*24*60*60) + (hora*3600) + (min*60) + seg);

    if (tempo <= 0)
    {
        tempo += 24*60*60;
    }

    totaldia = tempo / (86400);
    resto_dia = tempo % (86400);

    totalhora  = resto_dia / 3600;
    resto_hora = resto_dia % 3600;

    totalmin = resto_hora / 60;
    resto_min = resto_hora % 60;
    
    totalseg = resto_min;
    

    printf("%d dia(s)\n", totaldia);
    printf("%d hora(s)\n", totalhora);
    printf("%d minuto(s)\n", totalmin);
    printf("%d segundo(s)\n", totalseg);

    return 0;
}