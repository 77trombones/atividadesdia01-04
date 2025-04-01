#include <stdio.h>

int main(void) {
    int num = 0;
    int soma = 0;
    
    while (1) {
        printf("escreva seu número (entre 1 e 6): ");
        scanf("%d", &num);
        
        if (num % 2 != 0) {
            break; // Se o número for ímpar, encerra o loop
        }
        
        soma += num;
    }
    
    printf("\nsoma total: %d\n", soma);
    return 0;
}