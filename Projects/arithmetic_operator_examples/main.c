#include <stdio.h>

int main() {
    int a = 33;
    int b = 15;
    int result1 = 0;
    int result2 = 0;
    int result3 = 0;
    int result4 = 0;
    int result5 = 0;
    
    result1 = a + b;
    result2 = a - b;
    result3 = a * b;
    result4 = a / b;
    result5 = a % b;
    
    printf("The result of a + b is %d\n", result1);
    printf("The result of a - b is %d\n", result2);
    printf("The result of a * b is %d\n", result3);
    printf("The result of a / b is %d\n", result4);
    printf("The result of a %% b is %d\n", result5);  // note %% to print %

    // Postfix increment
    printf("Postfix increment (a++) returns %d\n", a++);
    // Prefix increment
    printf("Prefix increment (++a) returns %d\n", ++a);

    // Postfix decrement
    printf("Postfix decrement (b--) returns %d\n", b--);
    // Prefix decrement
    printf("Prefix decrement (--b) returns %d\n", --b);
    
    return 0;
}
