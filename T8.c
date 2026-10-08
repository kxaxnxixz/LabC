#include <stdio.h>

int main() {
    int start, end;
    int count = 0;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Numbers: ");

    for (int i = start; i <= end; i++) {
        printf("%d ", i);
        count++;
    }

    printf("\nCount: %d\n", count);

    return 0;
}