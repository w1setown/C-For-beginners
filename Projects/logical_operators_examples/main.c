#include <stdio.h>

int main() {
    _Bool a = 1;
    _Bool b = 1;
    _Bool result1;
    _Bool result2;
    _Bool result3;
    
    result1 = a && b;
    result2 = a || b;
    result3 = !(a && b);
    
    printf("Here is the result for && operator: %d\n", result1);
    printf("Here is the result for || operator: %d\n", result2);
    printf("Here is the result for !(&&) operator: %d\n", result3);
    
    
    return 0;
}
