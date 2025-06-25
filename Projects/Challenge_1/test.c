#include <stdio.h>

int main(){
    
    char MyName[25];  // Basic declariation pattern: "type variablename;"
                      // For arrays: "type variablename[size];"
    printf("Write name:\n");    
    scanf("%s", MyName);
    printf("Hi, my name is %s\n", MyName);
    
    return 0;
}