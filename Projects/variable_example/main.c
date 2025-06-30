#include <stdio.h>

int main() {
    int favoriteNumber = 9;
    char myName[100] = "Gabriel";
    float float_pi = 3.141592653589793f;
    double double_pi = 3.141592653589793;
    
    favoriteNumber = 12; // we are overwriting the already declared and initialized variable 

    printf("%d\n%s\n%.15f\n%.15lf\n", favoriteNumber, myName, float_pi, double_pi);

    return 0;
}
