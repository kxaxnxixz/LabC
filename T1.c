#include <stdio.h>

int main() {
    int glasses;

    printf("Enter glasses of water: ");
    scanf("%d", &glasses);

    if (glasses < 8) {
        printf("Drink more water. Daily goal not completed.\n");
    }
    else {
        printf("Daily goal completed.\n");
    }

    return 0;
}