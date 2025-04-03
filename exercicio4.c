#include <stdio.h>

int main() {
    int A;
    int B;
    
    printf("(&&):\n\n");
    
    for (A = 0; A <= 1; A++) {
        for (B = 0; B <= 1; B++) {
            printf("%d || %d   %d && %d = %d\n", A, B, A, B, A && B);
        }
    }
    
    return 0;
}
