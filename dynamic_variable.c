#include <stdio.h>
#include <stdlib.h>

void func() {
    int* dynamicVar = (int*)malloc(sizeof(int)); 
    *dynamicVar = 20;
    printf("Dynamic Variable: %d\n", *dynamicVar);
    free(dynamicVar);  
}

int main() {
    func();
    return 0;
}