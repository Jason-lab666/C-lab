#include <stdio.h>
#include <string.h>

struct CarInfo {
    int year;
    char make[64];
    int mileage;
    float price;
};

int main() {
    struct CarInfo myCar = {2023, "Toyota", 5000, 25000.50};

    printf("Car Information:\n");
    printf("Year: %d\n", myCar.year);
    printf("Make: %s\n", myCar.make);
    printf("Mileage: %d\n", myCar.mileage);
    printf("Price: %.2f\n", myCar.price);

    return 0;
}