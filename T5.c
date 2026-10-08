#include <stdio.h>

int main() {
    int total, attended;
    float attendance;

    printf("Total classes: ");
    scanf("%d", &total);

    printf("Attended classes: ");
    scanf("%d", &attended);

    attendance = (float)attended / total * 100;

    printf("Attendance: %.2f%%\n", attendance);

    if (attendance < 75) {
        printf("Not eligible for exam\n");
    }
    else {
        printf("Eligible for exam\n");
    }

    return 0;
}