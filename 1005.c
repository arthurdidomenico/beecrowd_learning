#include <stdio.h>
 
int main() {
    double A, B, MEDIA;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    A = A * 3.5;
    B = B * 7.5;
    MEDIA = (A + B) / 11;
    MEDIA >= 0 && MEDIA <= 10 ;
    printf("MEDIA = %.5lf\n", MEDIA);
   
    return 0;
}