#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer using scanf: ");
    if (scanf("%d", &num) == 1) {
        printf("You entered: %d\n", num);
    } else {
        printf("Invalid input for scanf.\n");
    }

    return 0;
}


