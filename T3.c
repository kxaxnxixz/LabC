#include <stdio.h>

int main() {
    int units;
    int bill;

    printf("Enter units: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    }
    else {
        bill = units * 8;
    }

    printf("Electricity Bill: %d taka\n", bill);

    return 0;
}