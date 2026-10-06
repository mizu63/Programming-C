#include <stdio.h>

int main() {
    int amount, i;
    int notes[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    printf("Enter amount: ");
    scanf("%d", &amount);

    for (i = 0; i < 10; i++) {
        if (amount >= notes[i]) {
            printf("%d Tk = %d note(s)\n", notes[i], amount / notes[i]);
            amount = amount % notes[i];
        }
    }

    return 0;
}