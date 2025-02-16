#include <stdio.h>
#include <math.h>

#define EPSILON 1e-6  

int main() {
    float a = 0.1f, b = 0.2f, c = 0.3f;
    
    if (a + b == c) {
        printf("a + b == c (Direct comparison, may be incorrect)\n");
    } else {
        printf("a + b != c (Direct comparison failed)\n");
    }

    if (fabs((a + b) - c) < EPSILON) {
        printf("a + b is approximately equal to c (Using epsilon, correct)\n");
    }

    return 0;
}
