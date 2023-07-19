#include <stdio.h>

void fibonacci_sequence(int n) {
    unsigned long long int sequence[50];
    sequence[0] = 1;
    sequence[1] = 2;

    for (int i = 2; i < n; i++) {
        sequence[i] = sequence[i - 1] + sequence[i - 2];
    }

    for (int i = 0; i < n; i++) {
        printf("%llu", sequence[i]);

        if (i != n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    fibonacci_sequence(50);
    return 0;
}
