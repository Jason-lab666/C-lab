#include <stdio.h>
#include <stdbool.h>



int main() {

    int number;
    printf("Enter:");
    scanf("%d",&number);




    int count=1;

    while(count<=5){
       int product = number * count;
       printf("%d\n",product);
       count= count +1;
    }

    return 0;
}