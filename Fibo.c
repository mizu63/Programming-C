#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 1, sum;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);

        sum = a + b;
        a = b;
        b = sum;
    }

    return 0;
}