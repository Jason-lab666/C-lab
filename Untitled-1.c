#include <stdio.h>

int main()
{
    int grade =0;
    const int PASS_THRESHOLD=50;

    fprintf( stdout, "Please enter the grade:" );
    scanf("%d", &grade);

    if (grade < PASS_THRESHOLD)
    {
        printf("You have failed");
    }

    else
    {
        printf("You have passed");
    }

}