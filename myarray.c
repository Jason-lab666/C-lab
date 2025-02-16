#include <stdio.h>

int main() {
    int myArray[5] = {0};  
    int count = 6;         

    myArray[5] = 3;  

    
    for (int i = 0; i < 5; i++) {
        printf("myArray[%d] = %d\n", i, myArray[i]);
    }

    return 0;
}
