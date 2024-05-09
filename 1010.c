#include <stdio.h>
 
int main() {
    int peca_1, num_pecas1, peca_2, num_pecas2;
    float valor_un_1, valor_un_2, total_pagar;
    
    scanf("%d %d %f", &peca_1, &num_pecas1, &valor_un_1);
    scanf("%d %d %f", &peca_2, &num_pecas2, &valor_un_2);
    total_pagar = (num_pecas1 * valor_un_1) + (num_pecas2 * valor_un_2);
    printf("VALOR A PAGAR: R$ %.2f\n", total_pagar);

    return 0;
}
