#include <stdio.h>

int main(int argc, char *argv[])
{
    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];
    
    printf("Number of arguments is %i\n", numberOfArguments);
    printf("Argument1 is %s\n", argument1);
    printf("Argument2 is %s\n", argument2);
    
    getchar(); // Keeps terminal running
    return 0;
}
