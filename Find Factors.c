#include <stdio.h>

int main() {
    int N;

    // Input the number
    printf(" ");
    scanf("%d", &N);

    // Output the factors of the number
    printf(" ", N);
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {  // If i is a factor of N
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
