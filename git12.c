#include <stdio.h>

int main() {
    int day = 2; // අපි පරීක්ෂා කරන අගය

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid Day\n");

    }


        printf("Switch statement is done.\n");
        printf("This will be printed regardless of the case.\n");
        printf("This is outside the switch statement.\n");

    return 0;
}