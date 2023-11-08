#include <stdio.h>

void collatz(int n) {
    while (n != 1) {
        printf("%d -> ", n);
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    printf("1\n");
}

int main() {
    int number;

    printf("Δώσε έναν θετικό ακέραιο: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Ο αριθμός πρέπει να είναι θετικός.\n");
        return 1;
    }

    collatz(number);

    return 0;
}






