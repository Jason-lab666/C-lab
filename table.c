#include <stdio.h>
#include <math.h>

int main (){
    int rows;
    float angle, increment;

    printf("Enter the number of rows in the table to be produced \n ");
    printf("The number of rows must be between 0 and 35 \n ");
    scanf("%d", &rows);

    printf("Enter the starting angle in degrees (e.g. 3.45) \n");
    scanf("%f",&angle);

    printf("Enter increment in angle between rows in degrees (e.g. 0.5) \n ");
    scanf("%f", &increment);

    printf("%14s%14s%14s\n","Angle","Sine","Cosine");

    for (int i = 0; i < rows; i++) {
        double angle_final = angle + i * increment;
        double rad = angle_final * M_PI / 180.0; 
        printf("%14.2f%14.4f%14.4f\n", angle_final, sin(rad), cos(rad));
    }

    return 0;

}
