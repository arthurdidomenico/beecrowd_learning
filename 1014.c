#include <stdio.h>

int main()
{
    int distancia_km;
    float combustivel_gasto_litros, consumo_medio;
    
    scanf("\n%d", &distancia_km);
    scanf("\n%f", &combustivel_gasto_litros);
    consumo_medio = distancia_km / combustivel_gasto_litros;
    printf("%.3f km/l\n", consumo_medio);

    return 0;
}