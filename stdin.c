#include <stdio.h>

int main() {
    char user_input[100];

    printf("Please type something：");
    fgets(user_input, sizeof(user_input), stdin);

    if (user_input[0] != '\0') {
        printf("You have typed：%s", user_input);
    } else {
        printf("No valid input\n");
    }

    return 0;
}
