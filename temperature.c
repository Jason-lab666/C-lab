#include <stdio.h>

int main() {

    float Tstart = -10.2;
    float Troom = 21.8;

    int hours;
    int mins;
    printf("enter the number of full hours since the power failed: ");
    scanf("%d", &hours);
    printf("enter the number of additional minutes since the power failed: ");
    scanf("%d", &mins);

    double TAfterPowOff = hours + (mins/60.0);
    printf("The power has been off for %.2f hours\n", TAfterPowOff);

    double t = Tstart + 0.05 * TAfterPowOff * (Troom - Tstart);
    if (t > Troom){
        t=Troom;
    }
    
    printf("Estimated present temperature in freezer is %.2f degrees Celsius\n", t);

    return 0;
}