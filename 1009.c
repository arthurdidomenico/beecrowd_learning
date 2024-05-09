#include <stdio.h>
 
int main() {
    char vendedor;
    double fix_sal, total_vendas, total_sal;
    
    scanf("%s\n", &vendedor);
    scanf("%lf\n", &fix_sal);
    scanf("%lf", &total_vendas);
    total_sal = fix_sal + (total_vendas * 0.15);
    printf("TOTAL = R$ %.2lf\n", total_sal);


    return 0;
}
