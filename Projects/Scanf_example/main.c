#include <stdio.h>

int main() {
    char str[100]; // We create a string array of 100
    int i; 
    
    printf("Enter value:");
    scanf("%d %s", &i, str); // We require an integer and a string (name for example)
    
    printf("\nYou entered: %d:::::%s\n", i, str);
    
    return 0;
}


/*
 To read a double we would have to do it like so:

int main(){
    double x;

    scanf("%lf", &x)
 
    return 0;
} 
  
 
 */