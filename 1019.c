#include <stdio.h>

int main() {
    int segundos, minutos, horas, resto_horas;

    scanf("%d", &segundos);
    horas = segundos / 3600;
    resto_horas = segundos % 3600;
    minutos = resto_horas / 60;
    segundos = segundos % 60;
    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}