#include <stdio.h>

int main(void) { 
    int contador = 1; 
    int fim = 3; 
    int num = 0;

do {
    printf("Digite seu número: ");
    scanf("%d", &num);
    
    printf("\nNúmero: %d\n", num);
    
    if (num == 7) {
        puts("Você ganhou!");
        break;
    } else {
        printf("Número errado.\nTentativas restantes: %d\n", fim - contador);
    }
    
    contador++;
} while (contador <= fim);

if (num != 7) {
    printf("Fim de jogo!\n");
}

return 0;

}