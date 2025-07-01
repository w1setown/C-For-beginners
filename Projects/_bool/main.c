#include <stdio.h>

int main(void);{
    int integerVar = 100;
    float floatingVar = 331.793;
    double doubleVar = 8.44e+11;
    
    _Bool boolVar = 0
    
    return 0;
}


/* In we C89 standard we have to do as shown above, but in C99 standard we can use true or false
 * How? See the example below:

#include <stdio.h>
#include <stdbool.h>

int main(void);{
    int integerVar = 100;
    float floatingVar = 331.793;
    double doubleVar = 8.44e+11;
    
    bool boolVer1 = true; 1
    bool boolVer2 = false; 0
    
    return 0;
}

*/