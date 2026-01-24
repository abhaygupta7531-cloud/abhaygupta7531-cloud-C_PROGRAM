#include <stdio.h>

int main() {
    int a = 10, b = 3;
    float result;

    // Without type casting, integer division happens (10 / 3 = 3)
    // a is explicitly converted to float before division
    result = (float)a / b;

    printf("Result = %f\n", result);  // Output: 3.333333

    return 0;
}