/*
Requirements:
 * In this challenge, you are to create a C program that displays
   the perimter and area of a rectangle

 * The program should create 4 variable of type double
   * One variable to store the width of the rectangle 
   * One variable to store the height of the rectangle
   * One variable to store the perimeter of the rectangle
   * One variable to store the area of the rectangle

 * The program should perform the calculation for the perimeter
   of a rectangle
   * Use the '+' operator addtion and the '*' operator for multipli
     -cation
   * Perimeter is calculated by adding the height and width, and
     then multiplying by two
   * Area is calculated by multiplying the width * height variables

  * The program should display the height, width and the perimeter var-
    iables in the correct format in one print statement
  
  * The program should display the height, width and area variables in
    the correct format in one print statem

Hints
 * Create a project in code::blocks

 * Edit the main.c that is auto-generated for you as part of creating the
   project

 * Declare and initialize the height and width variables to any value (
   need to be of type double)

 * Declare  the perimeter and area values to 0.0

 * Assign to the perimeter and area values the correct data based on calcu-
   lations 
   * perimeter = 2.0 * (height + width);
   * area = width * height;
*/


#include <stdio.h>

int main() {
    // Variables
    double height = 0;
    double width = 0;
    double perimeter = 0;
    double area = 0;
    
    // Get input
    printf("The height of your rectangle: ");
    scanf("%lg", &height);
    printf("The width of your rectangle: ");
    scanf("%lg", &width);
    
    // Calculations
    perimeter = 2.0 * (height + width);
    area = width * height;
    
    // Output
    printf("If the height is %g, and the width is %g, then the perimeter must be %.2g\n", height, width, perimeter);
    printf("If the height is %g, and the width is %g, then the areamust be  %.2g\n", height, width, area);
    
    return 0;
}
