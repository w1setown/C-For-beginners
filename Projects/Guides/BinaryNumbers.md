# Binary Numbers: A Complete Guide

## What are Binary Numbers?

Binary numbers are a base-2 number system that uses only two digits: **0** and **1**. Unlike our familiar decimal system (base-10) that uses digits 0-9, binary is the fundamental language of computers and digital systems.

## Why Binary?

Computers use binary because digital circuits can easily represent two states:
- **0** = OFF (no electrical current)
- **1** = ON (electrical current present)

## Binary vs Decimal Comparison

| Decimal | Binary |
|---------|--------|
| 0       | 0      |
| 1       | 1      |
| 2       | 10     |
| 3       | 11     |
| 4       | 100    |
| 5       | 101    |
| 6       | 110    |
| 7       | 111    |
| 8       | 1000   |
| 9       | 1001   |
| 10      | 1010   |
| 11      | 1011   |
| 12      | 1100   |
| 13      | 1101   |
| 14      | 1110   |
| 15      | 1111   |

## Understanding Place Values

In binary, each position represents a power of 2:

| Position | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
|----------|---|---|---|---|---|---|---|---|
| **Power of 2** | 2⁷ | 2⁶ | 2⁵ | 2⁴ | 2³ | 2² | 2¹ | 2⁰ |
| **Decimal Value** | 128 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |

### Example: Converting Binary 10110101 to Decimal

| Position | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
|----------|---|---|---|---|---|---|---|---|
| **Binary Digit** | 1 | 0 | 1 | 1 | 0 | 1 | 0 | 1 |
| **Place Value** | 128 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |
| **Contribution** | 128 | 0 | 32 | 16 | 0 | 4 | 0 | 1 |

**Calculation:** 128 + 0 + 32 + 16 + 0 + 4 + 0 + 1 = **181**

## Converting Between Binary and Decimal

### Binary to Decimal
1. Write down the place values (powers of 2)
2. Multiply each binary digit by its place value
3. Add all the results together

### Decimal to Binary
1. Divide the decimal number by 2
2. Record the remainder (0 or 1)
3. Divide the quotient by 2
4. Repeat until quotient is 0
5. Read remainders from bottom to top

### Example: Converting Decimal 45 to Binary

| Step | Division | Quotient | Remainder |
|------|----------|----------|-----------|
| 1    | 45 ÷ 2   | 22       | 1         |
| 2    | 22 ÷ 2   | 11       | 0         |
| 3    | 11 ÷ 2   | 5        | 1         |
| 4    | 5 ÷ 2    | 2        | 1         |
| 5    | 2 ÷ 2    | 1        | 0         |
| 6    | 1 ÷ 2    | 0        | 1         |

**Reading remainders from bottom to top: 101101**

**Verification:** 32 + 8 + 4 + 1 = 45 ✓

## Common Binary Patterns

| Pattern | Name | Description |
|---------|------|-------------|
| 1111    | All ones | Maximum value for 4 bits (15) |
| 0000    | All zeros | Minimum value (0) |
| 1010    | Alternating | Common test pattern |
| 1100    | Two high, two low | Another test pattern |

## Powers of 2 Reference Table

| Power | Value | Binary |
|-------|-------|--------|
| 2⁰    | 1     | 1      |
| 2¹    | 2     | 10     |
| 2²    | 4     | 100    |
| 2³    | 8     | 1000   |
| 2⁴    | 16    | 10000  |
| 2⁵    | 32    | 100000 |
| 2⁶    | 64    | 1000000|
| 2⁷    | 128   | 10000000|
| 2⁸    | 256   | 100000000|

## Binary Arithmetic

### Addition Rules
- 0 + 0 = 0
- 0 + 1 = 1
- 1 + 0 = 1
- 1 + 1 = 10 (carry the 1)

### Example: 1011 + 1101

```
  1011
+ 1101
------
 11000
```

## Practice Exercises

### Binary to Decimal
Convert these binary numbers to decimal:
1. 1010
2. 1111
3. 10001
4. 101010

### Decimal to Binary
Convert these decimal numbers to binary:
1. 25
2. 63
3. 100
4. 255

## Answer Key

### Binary to Decimal Answers
1. 1010 = 8 + 2 = **10**
2. 1111 = 8 + 4 + 2 + 1 = **15**
3. 10001 = 16 + 1 = **17**
4. 101010 = 32 + 8 + 2 = **42**

### Decimal to Binary Answers
1. 25 = **11001**
2. 63 = **111111**
3. 100 = **1100100**
4. 255 = **11111111**