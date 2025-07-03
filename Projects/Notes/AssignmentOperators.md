# Assignment Operators (C Programming)

## Overview
Assignment operators in C are used to assign values to variables and perform operations simultaneously. They provide a concise way to update variable values based on arithmetic operations.

## Basic Assignment Operators

### 1. Simple Assignment (`=`)
**Purpose:** Assigns a value to a variable

**Syntax:** `variable = value`

**Example:**
```c
int x = 10;
char name[] = "John";
float pi = 3.14159;
```

**Key Points:**
- Assigns the value on the right to the variable on the left
- Most fundamental assignment operator
- Returns the assigned value

---

### 2. Addition Assignment (`+=`)
**Purpose:** Adds a value to the variable and assigns the result back

**Syntax:** `variable += value`

**Equivalent to:** `variable = variable + value`

**Examples:**
```c
int count = 5;
count += 3;  // count is now 8

double total = 100.5;
total += 25.3;  // total is now 125.8

char str[50] = "Hello";
// Note: += doesn't work for string concatenation in C
// Use strcat() instead
```

**Use Cases:**
- Incrementing counters
- Accumulating totals
- Loop increments

---

### 3. Subtraction Assignment (`-=`)
**Purpose:** Subtracts a value from the variable and assigns the result back

**Syntax:** `variable -= value`

**Equivalent to:** `variable = variable - value`

**Examples:**
```c
int balance = 1000;
balance -= 250;  // balance is now 750

int lives = 3;
lives -= 1;  // lives is now 2

float temperature = 75.5;
temperature -= 10.2;  // temperature is now 65.3
```

**Use Cases:**
- Decrementing counters
- Reducing quantities
- Loop decrements

---

### 4. Multiplication Assignment (`*=`)
**Purpose:** Multiplies the variable by a value and assigns the result back

**Syntax:** `variable *= value`

**Equivalent to:** `variable = variable * value`

**Examples:**
```c
int score = 10;
score *= 2;  // score is now 20

double area = 5.0;
area *= 3.14159;  // area is now 15.70795

int factorial = 1;
for(int i = 1; i <= 5; i++) {
    factorial *= i;  // Calculate 5!
}
// factorial is now 120
```

**Use Cases:**
- Scaling values
- Calculating powers in loops
- Mathematical computations

---

## Quick Reference Table

| Operator | Description | Example | Equivalent |
|----------|-------------|---------|------------|
| `=` | Simple assignment | `x = 5` | N/A |
| `+=` | Addition assignment | `x += 3` | `x = x + 3` |
| `-=` | Subtraction assignment | `x -= 2` | `x = x - 2` |
| `*=` | Multiplication assignment | `x *= 4` | `x = x * 4` |

## Complete Example Program

```c
#include <stdio.h>

int main() {
    // Simple assignment
    int number = 10;
    printf("Initial value: %d\n", number);
    
    // Addition assignment
    number += 5;
    printf("After += 5: %d\n", number);
    
    // Subtraction assignment
    number -= 3;
    printf("After -= 3: %d\n", number);
    
    // Multiplication assignment
    number *= 2;
    printf("After *= 2: %d\n", number);
    
    return 0;
}
```

**Output:**
```
Initial value: 10
After += 5: 15
After -= 3: 12
After *= 2: 24
```

## Important Notes

**Data Type Compatibility:**
- The variable and value must be compatible types
- Implicit type conversion may occur
- Watch for potential data loss with narrowing conversions

**Operator Precedence:**
- Assignment operators have right-to-left associativity
- They have lower precedence than arithmetic operators
- Use parentheses for clarity when needed

**Common Pitfalls:**
- Don't confuse `=` (assignment) with `==` (comparison)
- Be careful with integer division when using `/=`
- Watch for overflow/underflow with numeric types

## Practice Exercises

1. **Counter Program:** Use `+=` to increment a counter in a loop
2. **Account Balance:** Use `-=` to simulate withdrawals from a bank account
3. **Compound Interest:** Use `*=` to calculate compound interest over time
4. **Temperature Converter:** Use assignment operators to convert between temperature scales