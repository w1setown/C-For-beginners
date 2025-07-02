# C printf Format Specifiers Reference Sheet

## Basic Format Specifiers

| Specifier | Type | Description | Example |
|-----------|------|-------------|---------|
| `%d` | `int` | Signed decimal integer | `printf("%d", 42)` → `42` |
| `%i` | `int` | Signed decimal integer (same as %d) | `printf("%i", 42)` → `42` |
| `%u` | `unsigned int` | Unsigned decimal integer | `printf("%u", 42U)` → `42` |
| `%o` | `unsigned int` | Unsigned octal | `printf("%o", 42)` → `52` |
| `%x` | `unsigned int` | Unsigned hexadecimal (lowercase) | `printf("%x", 255)` → `ff` |
| `%X` | `unsigned int` | Unsigned hexadecimal (uppercase) | `printf("%X", 255)` → `FF` |
| `%f` | `double` | Decimal floating point | `printf("%f", 3.14159)` → `3.141590` |
| `%F` | `double` | Decimal floating point (uppercase) | `printf("%F", 3.14159)` → `3.141590` |
| `%e` | `double` | Scientific notation (lowercase) | `printf("%e", 1234.5)` → `1.234500e+03` |
| `%E` | `double` | Scientific notation (uppercase) | `printf("%E", 1234.5)` → `1.234500E+03` |
| `%g` | `double` | Shorter of %f or %e | `printf("%g", 1234.5)` → `1234.5` |
| `%G` | `double` | Shorter of %F or %E | `printf("%G", 1234.5)` → `1234.5` |
| `%c` | `int` | Single character | `printf("%c", 65)` → `A` |
| `%s` | `char*` | String of characters | `printf("%s", "Hello")` → `Hello` |
| `%p` | `void*` | Pointer address | `printf("%p", &var)` → `0x7fff5fbff61c` |
| `%%` | - | Literal % character | `printf("%%")` → `%` |

## Size Modifiers

| Modifier | Use With | Description | Example |
|----------|----------|-------------|---------|
| `h` | `d, i, o, u, x, X` | `short int` | `printf("%hd", (short)42)` |
| `hh` | `d, i, o, u, x, X` | `signed char` | `printf("%hhd", (char)42)` |
| `l` | `d, i, o, u, x, X` | `long int` | `printf("%ld", 42L)` |
| `ll` | `d, i, o, u, x, X` | `long long int` | `printf("%lld", 42LL)` |
| `L` | `f, F, e, E, g, G` | `long double` | `printf("%Lf", 3.14L)` |
| `z` | `d, i, o, u, x, X` | `size_t` | `printf("%zu", sizeof(int))` |
| `j` | `d, i, o, u, x, X` | `intmax_t` | `printf("%jd", (intmax_t)42)` |
| `t` | `d, i, o, u, x, X` | `ptrdiff_t` | `printf("%td", ptr1 - ptr2)` |

## Width and Precision

### Field Width
- `%5d` - Right-aligned in 5 characters: `   42`
- `%-5d` - Left-aligned in 5 characters: `42   `
- `%05d` - Zero-padded to 5 characters: `00042`
- `%*d` - Width specified by argument: `printf("%*d", 5, 42)`

### Precision
- `%.2f` - 2 decimal places: `3.14`
- `%.6f` - 6 decimal places (default): `3.141593`
- `%.*f` - Precision specified by argument: `printf("%.*f", 2, 3.14159)`
- `%.5s` - Maximum 5 characters from string: `Hello`
- `%10.5s` - 5 chars max, right-aligned in 10: `     Hello`

## Flags

| Flag | Description | Example | Output |
|------|-------------|---------|---------|
| `-` | Left-justify | `printf("%-10d", 42)` | `42        ` |
| `+` | Always show sign | `printf("%+d", 42)` | `+42` |
| ` ` (space) | Space for positive numbers | `printf("% d", 42)` | ` 42` |
| `#` | Alternate form | `printf("%#x", 255)` | `0xff` |
| `0` | Zero-pad | `printf("%05d", 42)` | `00042` |

## Common Examples

```c
int num = 42;
float pi = 3.14159;
char *str = "Hello";
char ch = 'A';
void *ptr = &num;

printf("Integer: %d\n", num);                    // Integer: 42
printf("Hex: 0x%x\n", num);                      // Hex: 0x2a
printf("Float: %.2f\n", pi);                     // Float: 3.14
printf("Scientific: %e\n", pi);                  // Scientific: 3.141590e+00
printf("String: %s\n", str);                     // String: Hello
printf("Character: %c\n", ch);                   // Character: A
printf("Pointer: %p\n", ptr);                    // Pointer: 0x7fff5fbff61c
printf("Padded: %05d\n", num);                   // Padded: 00042
printf("Width: %10s\n", str);                    // Width:      Hello
printf("Left: %-10s|\n", str);                   // Left: Hello     |
printf("Precision: %.3s\n", str);                // Precision: Hel
```

## Special Cases

### Printing Literal %
```c
printf("Discount: 50%%\n");  // Discount: 50%
```

### Dynamic Width/Precision
```c
printf("%*.*f\n", 10, 2, 3.14159);  //      3.14
```

### Multiple Arguments
```c
printf("Name: %s, Age: %d, Height: %.1f\n", "John", 25, 5.9);
// Name: John, Age: 25, Height: 5.9
```

## Return Value
- `printf()` returns the number of characters printed
- Returns negative value on error

```c
int count = printf("Hello World");  // count = 11
```