#include <stdio.h>
 
int main() {
    int num_func, num_horas; 
    float sal_hora, salary;
    
    scanf("%d\n", &num_func);
    scanf("%d\n", &num_horas);
    scanf("%f", &sal_hora);
    salary = num_horas * sal_hora;
    printf("NUMBER = %d\n", num_func);
    printf("SALARY = U$ %.2f\n", salary);
    
    return 0;
}