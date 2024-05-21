#include <stdio.h>

int main(){
    float n;
    int i, positivos = 0;

    for (i = 0; i < 6; i++)
    {
        scanf("%f", &n);
        if (n > 0)
        {
            positivos++;
        }
        
    }
    printf("%d valores positivos\n", positivos);

    return 0;
}