// 初始化一个文件，1~100，把不是3 和 5 倍数的都扔了

#include <stdio.h>

int main() {

    int myinteger[100];
    int multiple[100];
    int count = 0;

    for (int i = 0; i < 100; i++) {
        myinteger[i] = i + 1;
    }

    for (int i = 0; i < 100; i++) {
        if (myinteger[i] % 3 == 0 || myinteger[i] % 5 == 0) {
            multiple[count] = myinteger[i];
            count++;
        }
    }

    printf("Multiples of 3 or 5: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", multiple[i]);
    }
    printf("\n");

    return 0;
}