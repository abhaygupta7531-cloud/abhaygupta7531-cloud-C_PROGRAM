#include <stdio.h>

int main() {
    int result;

    // Multiplication (*) has higher precedence than addition (+)
    // So 5 * 2 is evaluated first, then added to 10
    result = 10 + 5 * 2;
    printf("Result of 10 + 5 * 2 = %d\n", result);  // Output: 20

    // Parentheses () have the highest precedence
    // Expression inside parentheses is evaluated first
    result = (10 + 5) * 2;
    printf("Result of (10 + 5) * 2 = %d\n", result);  // Output: 30

    // Relational operator (>) has lower precedence than arithmetic (+)
    // First 10 + 5 is calculated, then compared with 12
    result = 10 + 5 > 12;
    printf("Result of 10 + 5 > 12 = %d\n", result);  // Output: 1 (true)

    // Equality (==) has lower precedence than relational (>)
    // First 5 > 2 is evaluated, then compared with 1
    result = 5 > 2 == 1;
    printf("Result of 5 > 2 == 1 = %d\n", result);  // Output: 1

    return 0;   
}