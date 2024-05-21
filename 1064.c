#include <stdio.h>

int main(){
    float n, aux = 0, media;
    int i, positivos = 0;

    for (i = 0; i < 6; i++)
    {
        scanf("%f", &n);
        if (n > 0)
        {
            positivos++;
            aux = aux + n;
            media = aux / positivos;
        }
        
    }

    printf("%d valores positivos\n", positivos);
    printf("%.1f\n", media);
    
    return 0;
}