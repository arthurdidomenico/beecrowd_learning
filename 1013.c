#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, maior_ab, maior_abc;
    
    scanf("\n%d %d %d", &a, &b, &c);
    maior_ab = (a+b+abs(a-b)) / 2;
    maior_abc = (maior_ab+c+abs(maior_ab-c)) / 2;
    printf("%d eh o maior\n", maior_abc);
    

    return 0;
}