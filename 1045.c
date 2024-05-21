#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, x, y, z;

    scanf("%lf %lf %lf", &x, &y, &z);
    
    if(x >= z && x >= y)
    {
        a = x;
        b = y;
        c = z;
    }
    if (z >= x && z >= y)
    {
        a = z;
        b = y;
        c = x;
    }
    if (y >= z && y >= x)
    {
        a = y;
        b = z;
        c = x;
    }
    

    if (a >= b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (pow(a, 2) == pow(b, 2) + pow(c, 2))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if(pow(a, 2) > pow(b, 2) + pow(c, 2))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(pow(a, 2) < pow(b, 2) + pow(c, 2))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    
    if(a == b && b == c && c == a)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(a == b || b == c || c == a)
    {
        printf("TRIANGULO ISOSCELES\n");
    }




    return 0;
}