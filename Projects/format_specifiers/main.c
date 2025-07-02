#include <stdio.h>

int main()
{
    int integerVar = 100;
    float floatVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';
    
    _Bool boolVar = 0;
    
    
	printf("integerVar is %i\n", integerVar);
	printf("floatVar is %f\n", floatVar);
	printf("doubleVar is %e\n", doubleVar);
	printf("doubleVar is %g\n", doubleVar);
	printf("charVar is %c\n", charVar);
    
	printf("boolVar is %i\n", boolVar);
    
	return 0;
}


/* Output:
 * integerVar is 100
 * floatVar is 331.790009
 * doubleVar is 8.440000e+11
 * doubleVar is 8.44e+11
 * charVar is W
 * boolVar is 0
 * */