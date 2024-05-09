#include <stdio.h>

int main() {
    float aux_quant, preco1, preco2, preco3, preco4, preco5;    
    int cod, quant;

    scanf("%d %d", &cod, &quant);
    preco1 = 4;
    preco2 = 4.5;
    preco3 = 5;
    preco4 = 2;
    preco5 = 1.5;
    aux_quant = quant;

    switch (cod)
    {
    case 1:
        printf("Total: R$ %.2f\n", preco1 * aux_quant);
        break;
    case 2:
        printf("Total: R$ %.2f\n", preco2 * aux_quant);
        break;
    case 3:
        printf("Total: R$ %.2f\n", preco3 * aux_quant);
        break;
    case 4:
        printf("Total: R$ %.2f\n", preco4 * aux_quant);
        break;
    case 5:
        printf("Total: R$ %.2f\n", preco5 * aux_quant);
        break;
    default:
        break;
    }


    return 0;
} 