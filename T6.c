#include <stdio.h>

int main() {
    int length;

    printf("Enter password length: ");
    scanf("%d", &length);

    if (length < 6) {
        printf("Weak password\n");
    }
    else if (length <= 10) {
        printf("Medium password\n");
    }
    else {
        printf("Strong password\n");
    }

    return 0;
}