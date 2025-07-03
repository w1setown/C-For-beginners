# C Arithmetic Operators Guide & Cheat Sheet

## Overview
Arithmetic operators in C are used to perform mathematical operations on variables and values. These operators work with numeric data types like `int`, `float`, `double`, and `char`.

## Basic Arithmetic Operators

### Addition (+)
**Purpose:** Adds two operands together

**Syntax:** `operand1 + operand2`

**Examples:**
```c
int a = 5, b = 3;
int sum = a + b;        // Result: 8

float x = 2.5, y = 1.3;
float result = x + y;   // Result: 3.8

// Adding different types
int num = 10;
float decimal = 3.14;
float mixed = num + decimal;  // Result: 13.14
```

### Subtraction (-)
**Purpose:** Subtracts the second operand from the first

**Syntax:** `operand1 - operand2`

**Examples:**
```c
int a = 10, b = 4;
int difference = a - b;  // Result: 6

float x = 7.5, y = 2.2;
float result = x - y;    // Result: 5.3

// Negative numbers
int positive = 15;
int negative = -positive; // Result: -15
```

### Multiplication (*)
**Purpose:** Multiplies two operands

**Syntax:** `operand1 * operand2`

**Examples:**
```c
int a = 6, b = 4;
int product = a * b;     // Result: 24

float x = 2.5, y = 3.0;
float result = x * y;    // Result: 7.5

// Multiplication with zero
int zero_result = 100 * 0;  // Result: 0
```

### Division (/)
**Purpose:** Divides the first operand by the second

**Syntax:** `operand1 / operand2`

**Important Notes:**
- Integer division truncates the decimal part
- Floating-point division preserves decimal places
- Division by zero causes undefined behavior

**Examples:**
```c
// Integer division
int a = 15, b = 4;
int quotient = a / b;    // Result: 3 (not 3.75)

// Floating-point division
float x = 15.0, y = 4.0;
float result = x / y;    // Result: 3.75

// Mixed division
float mixed = 15.0 / 4;  // Result: 3.75
float mixed2 = 15 / 4.0; // Result: 3.75
```

### Modulus (%)
**Purpose:** Returns the remainder of integer division

**Syntax:** `operand1 % operand2`

**Important Notes:**
- Only works with integer operands
- Cannot be used with floating-point numbers
- Useful for checking if a number is even/odd

**Examples:**
```c
int a = 17, b = 5;
int remainder = a % b;   // Result: 2

// Checking if even or odd
int num = 42;
if (num % 2 == 0) {
    printf("Even");      // This will execute
}

// Common use cases
int hours = 25;
int display_hours = hours % 12;  // Result: 1 (for 12-hour format)
```

## Increment and Decrement Operators

### Pre-increment (++variable)
**Purpose:** Increments the variable by 1, then returns the new value

**Examples:**
```c
int a = 5;
int result = ++a;  // a becomes 6, result is 6
printf("a = %d, result = %d", a, result);  // Output: a = 6, result = 6
```

### Post-increment (variable++)
**Purpose:** Returns the current value, then increments the variable by 1

**Examples:**
```c
int a = 5;
int result = a++;  // result gets 5, then a becomes 6
printf("a = %d, result = %d", a, result);  // Output: a = 6, result = 5
```

### Pre-decrement (--variable)
**Purpose:** Decrements the variable by 1, then returns the new value

**Examples:**
```c
int a = 5;
int result = --a;  // a becomes 4, result is 4
printf("a = %d, result = %d", a, result);  // Output: a = 4, result = 4
```

### Post-decrement (variable--)
**Purpose:** Returns the current value, then decrements the variable by 1

**Examples:**
```c
int a = 5;
int result = a--;  // result gets 5, then a becomes 4
printf("a = %d, result = %d", a, result);  // Output: a = 4, result = 5
```

## Practical Examples

### Loop Counter
```c
// Using increment in a for loop
for (int i = 0; i < 5; i++) {
    printf("Count: %d\n", i);
}

// Using decrement
for (int i = 5; i > 0; i--) {
    printf("Countdown: %d\n", i);
}
```

### Calculator Function
```c
#include <stdio.h>

void calculator() {
    int a = 20, b = 6;
    
    printf("a = %d, b = %d\n", a, b);
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", a, b, a / b);
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);
    
    printf("Pre-increment: ++a = %d\n", ++a);   // a is now 21
    printf("Post-increment: a++ = %d\n", a++); // prints 21, a becomes 22
    printf("Current value of a: %d\n", a);     // prints 22
}
```

## Quick Reference Table

| Operator | Name | Example | Result |
|----------|------|---------|--------|
| + | Addition | 5 + 3 | 8 |
| - | Subtraction | 5 - 3 | 2 |
| * | Multiplication | 5 * 3 | 15 |
| / | Division | 5 / 3 | 1 (integer) |
| % | Modulus | 5 % 3 | 2 |
| ++ | Increment | ++a or a++ | a + 1 |
| -- | Decrement | --a or a-- | a - 1 |

## Common Pitfalls

1. **Integer Division:** `7 / 2` equals `3`, not `3.5`
2. **Modulus with Negatives:** `-7 % 3` might give `-1` (implementation-defined)
3. **Division by Zero:** Always check for zero before dividing
4. **Increment/Decrement Confusion:** Remember the difference between pre and post operations

## Best Practices

- Use parentheses to clarify operator precedence
- Be explicit about data types when mixing integers and floats
- Always initialize variables before using arithmetic operators
- Check for edge cases like division by zero
- Use meaningful variable names in complex expressions