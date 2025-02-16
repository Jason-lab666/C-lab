#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr = (int*)calloc(5, sizeof(int)); // 分配 5 个 int，并初始化为 0

    if (ptr == NULL) { // 检查是否分配成功
        printf("内存分配失败！\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]); // 输出 0 0 0 0 0
    }

    free(ptr); // 释放内存
    return 0;
}
