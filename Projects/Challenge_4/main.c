/*  Requirements

 * In this challenge, you are to create a C program that converts
   the number of minutes to days and years.

 * The program should ask the user to enter the number of minutes
   via the terminal

 * The program should display as output the minutes and then its
   equivalent in years and days

 * The program should create variables to store (should all be of type double)
    * minutes (int)
    * minutes in year
    * years
    * days

 * Need to perform a calculation and use arithmetic operators
    * You have to figure out the conversion 🙂

 */


#include <stdio.h>

int main() {
    // Variables
    int minutes = 0;
    double days = 0.0;
    double years = 0.0;
    double minutesPerYear = 365 * 24 * 60;
    
    // Input
    printf("How many minutes?\n");
    scanf("%d", &minutes);
    
    // Logic
    days = minutes / (24.0 * 60);
    years = minutes / minutesPerYear;
    
    // Output
    printf("That is %.3f days.\n", days);
    printf("That is %.3f years.\n", years);
    
    return 0;
}
