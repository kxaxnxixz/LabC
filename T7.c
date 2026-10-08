#include <stdio.h>

int main() {
    int expense;
    int total = 0;

    for (int i = 1; i <= 7; i++) {
        printf("Enter expense for day %d: ", i);
        scanf("%d", &expense);

        total = total + expense;
    }

    printf("Total weekly expense: %d\n", total);

    return 0;
}