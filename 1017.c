#include <stdio.h>

int main()
{
    float horas, velocidade_media, quantidade_litros;
    
    scanf("%f\n", &horas);
    scanf("%f", &velocidade_media);
    quantidade_litros = (horas * velocidade_media) / 12;
    printf("%.3f\n", quantidade_litros);
    

    return 0;
}