#include <stdio.h>

int main(){
    int FavoriteNumber = 0;

	printf("What is your favorite number?\n");
    scanf("%d", &FavoriteNumber);
	printf("Ah! Your favorite number is %d\n", FavoriteNumber); // DO NOT WRITE &FavoriteNumber! The memory address of the
                                                                // variable will be printed, instead of the actual value!
	return 0;
}