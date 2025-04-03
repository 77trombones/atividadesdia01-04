#include <stdio.h>

int main() {
    int n1, n2, n3, n4;

    printf("Digite um número (0-10): ");
    scanf("%d", &n1);
    printf("Digite um número (0-10): ");
    scanf("%d", &n2);
    printf("Digite um número (0-10): ");
    scanf("%d", &n3);
    printf("Digite um número (0-10): ");
    scanf("%d", &n4);

    printf("%d %d %d %d\n", n1, n2, n3, n4);

    for(int i = 1; i <= n1; i++) {
        printf("*");
    }
    printf("\n");

    for(int i = 1; i <= n2; i++) {
        printf("*");
    }
    printf("\n");

    for(int i = 1; i <= n3; i++) {
        printf("*");
    }
    printf("\n");

    for(int i = 1; i <= n4; i++) {
        printf("*");
    }
    printf("\n");

    return 0;
}