#include <stdio.h>

int main(){
    //Datatypes
    enum gender {male, female};
    enum gender hisGender;
    enum gender herGender;
    
    hisGender = 0;
    herGender = 1;
    
    
    printf("Male is:%d\n", hisGender);
    printf("Female is:%d", herGender);
    
    return 0;
}