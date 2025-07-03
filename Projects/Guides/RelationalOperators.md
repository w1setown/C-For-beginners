# Relational Operators (C Programming)

## Overview
Relational operators in C are used to compare values and establish relationships between them. These operators always return either 1 (true) or 0 (false), making them essential for conditional statements, loops, and logical expressions.

## Basic Relational Operators

### 1. Equal To (`==`)
**Purpose:** Checks if two values are equal

**Syntax:** `operand1 == operand2`

**Returns:** 1 if equal, 0 if not equal

**Examples:**
```c
int a = 5, b = 5, c = 3;
printf("%d\n", a == b);  // Output: 1 (true)
printf("%d\n", a == c);  // Output: 0 (false)

char ch1 = 'A', ch2 = 'A';
printf("%d\n", ch1 == ch2);  // Output: 1 (true)

float x = 3.14, y = 3.14;
printf("%d\n", x == y);  // Output: 1 (true)
```

**Use Cases:**
- Checking equality in conditions
- Validating user input
- Comparing array elements
- Loop termination conditions

**Important Notes:**
- Don't confuse with assignment operator `=`
- Be careful with floating-point comparisons
- String comparison requires `strcmp()` function

---

### 2. Not Equal To (`!=`)
**Purpose:** Checks if two values are not equal

**Syntax:** `operand1 != operand2`

**Returns:** 1 if not equal, 0 if equal

**Examples:**
```c
int a = 5, b = 3;
printf("%d\n", a != b);  // Output: 1 (true)

char grade = 'A';
printf("%d\n", grade != 'F');  // Output: 1 (true)

int status = 0;
printf("%d\n", status != 0);  // Output: 0 (false)
```

**Use Cases:**
- Input validation
- Error checking
- Loop continuation conditions
- Filtering operations

**Important Notes:**
- Opposite of `==` operator
- Commonly used in while loops
- Useful for null pointer checks

---

### 3. Greater Than (`>`)
**Purpose:** Checks if left operand is greater than right operand

**Syntax:** `operand1 > operand2`

**Returns:** 1 if left > right, 0 otherwise

**Examples:**
```c
int score = 85, passing = 60;
printf("%d\n", score > passing);  // Output: 1 (true)

double temperature = 98.6, fever = 99.0;
printf("%d\n", temperature > fever);  // Output: 0 (false)

char letter = 'Z';
printf("%d\n", letter > 'A');  // Output: 1 (true, ASCII comparison)
```

**Use Cases:**
- Range checking
- Sorting algorithms
- Performance comparisons
- Threshold validation

**Important Notes:**
- Works with all numeric types
- Character comparison uses ASCII values
- Signed vs unsigned comparisons can be tricky

---

### 4. Less Than (`<`)
**Purpose:** Checks if left operand is less than right operand

**Syntax:** `operand1 < operand2`

**Returns:** 1 if left < right, 0 otherwise

**Examples:**
```c
int age = 16, legal_age = 18;
printf("%d\n", age < legal_age);  // Output: 1 (true)

float price = 9.99, budget = 10.00;
printf("%d\n", price < budget);  // Output: 1 (true)

unsigned int count = 5;
printf("%d\n", count < 10);  // Output: 1 (true)
```

**Use Cases:**
- Boundary checking
- Loop conditions
- Minimum value finding
- Access control

**Important Notes:**
- Opposite of `>=` operator
- Common in for loop conditions
- Watch for underflow with unsigned types

---

### 5. Greater Than or Equal To (`>=`)
**Purpose:** Checks if left operand is greater than or equal to right operand

**Syntax:** `operand1 >= operand2`

**Returns:** 1 if left >= right, 0 otherwise

**Examples:**
```c
int minimum_age = 21, user_age = 25;
printf("%d\n", user_age >= minimum_age);  // Output: 1 (true)

double balance = 100.0, withdrawal = 100.0;
printf("%d\n", balance >= withdrawal);  // Output: 1 (true)

int attempts = 3, max_attempts = 3;
printf("%d\n", attempts >= max_attempts);  // Output: 1 (true)
```

**Use Cases:**
- Minimum requirement checking
- Inclusive range validation
- Resource availability checking
- Permission verification

**Important Notes:**
- Combines `>` and `==` conditions
- Inclusive comparison
- Useful for boundary conditions

---

### 6. Less Than or Equal To (`<=`)
**Purpose:** Checks if left operand is less than or equal to right operand

**Syntax:** `operand1 <= operand2`

**Returns:** 1 if left <= right, 0 otherwise

**Examples:**
```c
int speed = 55, speed_limit = 60;
printf("%d\n", speed <= speed_limit);  // Output: 1 (true)

char grade = 'B';
printf("%d\n", grade <= 'A');  // Output: 0 (false)

float usage = 100.0, quota = 100.0;
printf("%d\n", usage <= quota);  // Output: 1 (true)
```

**Use Cases:**
- Maximum limit checking
- Inclusive upper bound validation
- Resource usage monitoring
- Sorting conditions

**Important Notes:**
- Combines `<` and `==` conditions
- Inclusive comparison
- Common in array bounds checking

---

## Quick Reference Table

| Operator | Description | Example | Returns | Use Case |
|----------|-------------|---------|---------|----------|
| `==` | Equal to | `a == b` | 1 if equal, 0 if not | Equality checking |
| `!=` | Not equal to | `a != b` | 1 if not equal, 0 if equal | Inequality checking |
| `>` | Greater than | `a > b` | 1 if a > b, 0 otherwise | Upper bound checking |
| `<` | Less than | `a < b` | 1 if a < b, 0 otherwise | Lower bound checking |
| `>=` | Greater than or equal | `a >= b` | 1 if a >= b, 0 otherwise | Minimum requirement |
| `<=` | Less than or equal | `a <= b` | 1 if a <= b, 0 otherwise | Maximum limit |

## Complete Example Program

```c
#include <stdio.h>

int main() {
    printf("=== Relational Operators Demo ===\n\n");
    
    int a = 10, b = 20, c = 10;
    float x = 5.5, y = 3.2;
    char ch1 = 'A', ch2 = 'B';
    
    printf("Variables: a=%d, b=%d, c=%d\n", a, b, c);
    printf("Variables: x=%.1f, y=%.1f\n", x, y);
    printf("Variables: ch1='%c', ch2='%c'\n\n", ch1, ch2);
    
    // Equal to (==)
    printf("Equality Comparisons (==):\n");
    printf("a == b: %d\n", a == b);  // 10 == 20 -> 0
    printf("a == c: %d\n", a == c);  // 10 == 10 -> 1
    printf("x == 5.5: %d\n", x == 5.5);  // 5.5 == 5.5 -> 1
    printf("\n");
    
    // Not equal to (!=)
    printf("Inequality Comparisons (!=):\n");
    printf("a != b: %d\n", a != b);  // 10 != 20 -> 1
    printf("a != c: %d\n", a != c);  // 10 != 10 -> 0
    printf("ch1 != ch2: %d\n", ch1 != ch2);  // 'A' != 'B' -> 1
    printf("\n");
    
    // Greater than (>)
    printf("Greater Than Comparisons (>):\n");
    printf("b > a: %d\n", b > a);  // 20 > 10 -> 1
    printf("a > b: %d\n", a > b);  // 10 > 20 -> 0
    printf("x > y: %d\n", x > y);  // 5.5 > 3.2 -> 1
    printf("ch2 > ch1: %d\n", ch2 > ch1);  // 'B' > 'A' -> 1
    printf("\n");
    
    // Less than (<)
    printf("Less Than Comparisons (<):\n");
    printf("a < b: %d\n", a < b);  // 10 < 20 -> 1
    printf("b < a: %d\n", b < a);  // 20 < 10 -> 0
    printf("y < x: %d\n", y < x);  // 3.2 < 5.5 -> 1
    printf("\n");
    
    // Greater than or equal (>=)
    printf("Greater Than or Equal Comparisons (>=):\n");
    printf("b >= a: %d\n", b >= a);  // 20 >= 10 -> 1
    printf("a >= c: %d\n", a >= c);  // 10 >= 10 -> 1
    printf("a >= b: %d\n", a >= b);  // 10 >= 20 -> 0
    printf("\n");
    
    // Less than or equal (<=)
    printf("Less Than or Equal Comparisons (<=):\n");
    printf("a <= b: %d\n", a <= b);  // 10 <= 20 -> 1
    printf("a <= c: %d\n", a <= c);  // 10 <= 10 -> 1
    printf("b <= a: %d\n", b <= a);  // 20 <= 10 -> 0
    printf("\n");
    
    return 0;
}
```

## Practical Applications

### 1. Input Validation
```c
int age;
printf("Enter your age: ");
scanf("%d", &age);

if (age >= 18) {
    printf("You are eligible to vote.\n");
} else {
    printf("You must be 18 or older to vote.\n");
}
```

### 2. Range Checking
```c
int score;
printf("Enter your test score (0-100): ");
scanf("%d", &score);

if (score >= 0 && score <= 100) {
    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else if (score >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
} else {
    printf("Invalid score entered.\n");
}
```

### 3. Loop Control
```c
// Countdown loop
for (int i = 10; i >= 1; i--) {
    printf("%d ", i);
}
printf("Blast off!\n");

// While loop with condition
int attempts = 0;
int max_attempts = 3;
while (attempts < max_attempts) {
    printf("Attempt %d\n", attempts + 1);
    attempts++;
}
```

### 4. Array Searching
```c
int numbers[] = {10, 20, 30, 40, 50};
int target = 30;
int found = 0;

for (int i = 0; i < 5; i++) {
    if (numbers[i] == target) {
        printf("Found %d at index %d\n", target, i);
        found = 1;
        break;
    }
}

if (!found) {
    printf("%d not found in array\n", target);
}
```

### 5. Min/Max Finding
```c
int find_max(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int find_min(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
```

## Important Notes and Best Practices

### Operator Precedence
```c
// Relational operators have lower precedence than arithmetic
int result = 5 + 3 > 2 * 4;  // Evaluated as (5 + 3) > (2 * 4) -> 8 > 8 -> 0
```

### Floating-Point Comparisons
```c
// Be careful with floating-point equality
float a = 0.1 + 0.2;
float b = 0.3;
// a == b might be false due to precision issues

// Better approach:
#include <math.h>
#define EPSILON 1e-9
if (fabs(a - b) < EPSILON) {
    printf("Numbers are equal\n");
}
```

### String Comparisons
```c
// Wrong way:
char str1[] = "hello";
char str2[] = "hello";
if (str1 == str2) {  // This compares addresses, not content!
    printf("Strings are equal\n");  // This won't print
}

// Correct way:
#include <string.h>
if (strcmp(str1, str2) == 0) {
    printf("Strings are equal\n");  // This will print
}
```

### Common Pitfalls
1. **Assignment vs. Comparison:** `if (x = 5)` assigns 5 to x, while `if (x == 5)` compares x to 5
2. **Signed vs. Unsigned:** Comparing signed and unsigned integers can lead to unexpected results
3. **Chained Comparisons:** `if (a < b