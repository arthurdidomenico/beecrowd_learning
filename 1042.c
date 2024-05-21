#include <stdio.h>

int main(){
    int a, b, c, aux, x, y, z;

    scanf("%d %d %d", &a, &b, &c);

    x = a;
    y = b;
    z = c;

    if (a > b)
    {
        aux = a;
        a = b;
        b = aux;
    }
     if (a > c)
    {
        aux = a;
        a = c;
        c = aux;
    }
     if (b > c)
    {
        aux = b;
        b = c;
        c = aux;
    }
    
    printf("%d\n%d\n%d\n\n", a, b, c);
    printf("%d\n%d\n%d\n", x, y, z);
    

    return 0;
}