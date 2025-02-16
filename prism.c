#include <stdio.h>
#include <math.h>

int main() {
    float L,s;

    printf("enter the length of each side of the equilateral triangle:\n");
    scanf("%f",&s);

    printf("enter the length of the triangular prism: \n");
    scanf("%f",&L);

    double prismVolume = L * s * s * sqrt(3) / 4.0 ;

    printf("The volume of the triangular prism is %.2f cubic centimeters \n", prismVolume);

    return 0;

}