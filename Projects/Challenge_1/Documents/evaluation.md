# Challenge 1 - Self Evaluation

## Assignment Overview
**Original Task:** Create a simple C program that displays my first name using a modified `printf` statement.

**Required Output:** A static message showing my name (e.g., "Hi, my name is {MyName}")

## What I Actually Implemented
Instead of the simple static output, I created an interactive program that:
- Prompts the user to enter their name
- Reads string input from the terminal
- Displays the entered name back to the user

**Final Working Code:**
```c
#include <stdio.h>
int main(){
    char MyName[25];
    printf("Write name:\n");    
    scanf("%s", MyName);
    printf("Hi, my name is %s\n", MyName);
    return 0;
}
```

## Challenges Encountered

### Technical Issues
1. **Variable Declaration Confusion:** Initially declared `MyName` as a single `char` instead of a character array, causing compiler warnings about type mismatches.

2. **Syntax Errors:** Made several attempts with invalid C syntax when trying to correct the declaration:
   - `char = MyName;`
   - `MyName = char;`
   - `char str[25], MyName;` (which made MyName a single char, not an array)

3. **Understanding Data Types:** Struggled to grasp that strings in C are arrays of characters, not a built-in string type.

### Learning Process
- Required multiple iterations and debugging to understand the relationship between data types and format specifiers
- Learned through trial and error, with guidance on syntax rules
- Developed understanding of array declarations vs. single variable declarations

## What I Learned

### Core Concepts Mastered
- **String Handling in C:** Strings are character arrays, requiring proper array declaration syntax
- **Variable Declarations:** Understanding the pattern `type variablename[size]` for arrays
- **Input/Output Operations:** Using `scanf()` for string input and the differences from integer input
- **Memory Management Basics:** Understanding why arrays don't need the `&` operator in `scanf()`

### Programming Skills Developed
- Debugging compiler warnings and error messages
- Reading and interpreting error messages to identify root causes
- Systematic problem-solving approach through incremental changes