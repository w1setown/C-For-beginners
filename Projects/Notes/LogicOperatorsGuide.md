# Logical Operators Cheatsheet (C Programming)

## Overview
Logical operators in C are used to combine or modify boolean expressions. They return integer values (1 for true, 0 for false) and are essential for control flow and conditional logic.

## The Three Core Operators

### 1. AND Operator (`&&`)
**Purpose**: Returns `1` only when both operands are non-zero (true)

**Truth Table**:
```
A     | B     | A && B
------|-------|-------
1     | 1     | 1
1     | 0     | 0
0     | 1     | 0
0     | 0     | 0
```

**Examples**:
```c
#include <stdio.h>

int main() {
    int a = 5, b = 10;
    
    printf("%d\n", 1 && 1);     // → 1
    printf("%d\n", 1 && 0);     // → 0
    printf("%d\n", 0 && 1);     // → 0
    printf("%d\n", 0 && 0);     // → 0
    
    // Practical usage
    int age = 25;
    int hasLicense = 1;
    int canDrive = (age >= 18) && hasLicense; // → 1
    
    if (a > 0 && b > 0) {
        printf("Both numbers are positive\n");
    }
    
    return 0;
}
```

**Key Properties**:
- **Short-circuit evaluation**: If the first operand is `0`, the second operand is not evaluated
- **Falsy values**: `0`, `NULL`
- **Truthy values**: Any non-zero value

### 2. OR Operator (`||`)
**Purpose**: Returns `1` when at least one operand is non-zero (true)

**Truth Table**:
```
A     | B     | A || B
------|-------|-------
1     | 1     | 1
1     | 0     | 1
0     | 1     | 1
0     | 0     | 0
```

**Examples**:
```c
#include <stdio.h>

int main() {
    printf("%d\n", 1 || 1);     // → 1
    printf("%d\n", 1 || 0);     // → 1
    printf("%d\n", 0 || 1);     // → 1
    printf("%d\n", 0 || 0);     // → 0
    
    // Practical usage
    char day[] = "Saturday";
    int isWeekend = (strcmp(day, "Saturday") == 0) || (strcmp(day, "Sunday") == 0);
    
    int x = 5;
    if (x < 0 || x > 10) {
        printf("x is out of range\n");
    }
    
    return 0;
}
```

**Key Properties**:
- **Short-circuit evaluation**: If the first operand is non-zero, the second operand is not evaluated
- Often used for boundary checking and validation

### 3. NOT Operator (`!`)
**Purpose**: Inverts the boolean value (logical negation)

**Truth Table**:
```
A     | !A
------|-------
1     | 0
0     | 1
```

**Examples**:
```c
#include <stdio.h>

int main() {
    printf("%d\n", !1);     // → 0
    printf("%d\n", !0);     // → 1
    printf("%d\n", !5);     // → 0 (any non-zero is truthy)
    printf("%d\n", !(-3));  // → 0 (negative numbers are truthy)
    
    // Practical usage
    int isLoggedIn = 1;
    int isNotLoggedIn = !isLoggedIn;  // → 0
    
    int arr[5] = {1, 2, 3, 4, 5};
    int isEmpty = !(sizeof(arr)/sizeof(arr[0])); // → 0
    
    if (!isLoggedIn) {
        printf("Please log in\n");
    }
    
    return 0;
}
```

**Double NOT (`!!`)**:
Converts any value to its boolean equivalent (0 or 1):
```c
int value = 42;
int boolValue = !!value;  // → 1 (converts 42 to 1)

int zero = 0;
int boolZero = !!zero;    // → 0 (converts 0 to 0)
```

## Operator Precedence
When multiple logical operators are used together:

1. `!` (NOT) - Highest precedence
2. `&&` (AND) - Medium precedence  
3. `||` (OR) - Lowest precedence

**Examples**:
```c
int result = !0 && 1 || 0;  // → 1
// Evaluated as: ((!0) && 1) || 0
//              → (1 && 1) || 0
//              → 1 || 0
//              → 1

// Use parentheses for clarity
int clear = (!0 && 1) || 0;  // Same result, clearer intent
```

## Common Patterns

### Conditional Execution
```c
// Range checking
int x = 5;
if (x >= 0 && x <= 10) {
    printf("x is in valid range\n");
}

// Null pointer checking
int *ptr = malloc(sizeof(int));
if (ptr != NULL && *ptr > 0) {
    printf("Valid positive value\n");
}
```

### Complex Conditions
```c
// Multiple conditions
int age = 20;
int hasPermission = 1;
int isEmergency = 0;

if (age >= 18 && (hasPermission || isEmergency)) {
    printf("Access granted\n");
}

// Input validation
int validateInput(int value) {
    return value >= 0 && value <= 100;
}
```

### Boolean Conversion
```c
// Convert to boolean (0 or 1)
int someValue = 42;
int boolValue = !!someValue;  // → 1

// Check if value exists and is positive
int hasPositiveValue(int value) {
    return value > 0;
}
```

## Quick Reference

| Operator | Name | Description | Example | Returns |
|----------|------|-------------|---------|---------|
| `&&` | AND | Both must be non-zero | `a && b` | 1 or 0 |
| `\|\|` | OR | At least one must be non-zero | `a \|\| b` | 1 or 0 |
| `!` | NOT | Inverts boolean value | `!a` | 1 or 0 |

## Memory Tips
- **AND (`&&`)**: "All must be true" - like multiplication (0 × anything = 0)
- **OR (`||`)**: "At least one true" - like addition with ceiling of 1
- **NOT (`!)**: "Opposite" - flips 0 to 1 and anything else to 0

## Common Gotchas
- In C, any non-zero value is considered "true"
- `NULL` pointer is equivalent to 0 (false)
- Short-circuit evaluation can prevent function calls: `ptr && function()`
- Operator precedence: use parentheses for complex expressions
- Don't confuse logical operators with bitwise operators (`&`, `|`, `~`)