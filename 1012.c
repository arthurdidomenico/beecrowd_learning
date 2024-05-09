#include <stdio.h>

int main()
{
    double a, b, c;
    const double pi = 3.14159;
    
    scanf("\n%lf %lf %lf", &a, &b, &c);
    printf("TRIANGULO: %.3lf", (a * c) / 2);
    printf("\nCIRCULO: %.3lf", pi * (c*c));
    printf("\nTRAPEZIO: %.3lf", ((a+b)*c)/2);
    printf("\nQUADRADO: %.3lf", b*b);
    printf("\nRETANGULO: %.3lf\n", a*b);

    return 0;
}