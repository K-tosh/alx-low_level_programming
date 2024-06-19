# 0x02. C - Functions, Nested Loops

## Overview
This project covers the fundamentals of using functions and nested loops in C programming. The tasks are designed to teach how to define, declare, and use functions effectively, as well as how to work with nested loops.


## Learning Objectives
- Understand and use nested loops.
- Define and use functions in C.
- Differentiate between a declaration and a definition of a function.
- Understand and use function prototypes.
- Understand the scope of variables.
- Use gcc flags: `-Wall`, `-Werror`, `-pedantic`, `-Wextra`, `-std=gnu89`.
- Use header files with `#include`.

## Resources
- **Read or Watch:**
  - [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)
  - [C - Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm)
  - [Learning to Program in C (Part 06)](https://www.youtube.com/watch?v=qMlnFwYdqIw) (stop at 14:00)
  - [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
  - [C - Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm) (stop before the “Once-Only Headers” paragraph)
- **Additional Resources:**
  - [C Programming Loops & Functions](https://www.youtube.com/watch?v=3i1IPkzFVcM)
  - [Functions in C programming](https://www.youtube.com/watch?v=u40rF7zCYaQ)

## Requirements
- **Editors:** `vi`, `vim`, `emacs`
- **Compilation:** Ubuntu 20.04 LTS using gcc with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Code Style:** Follow Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- **Restrictions:**
  - No global variables
  - No more than 5 functions per file
  - No standard library functions like `printf`, `puts`, etc.
  - Use `_putchar` for printing
- **Header File:** `main.h` should include prototypes of all functions and `_putchar`.

## Tasks
### Mandatory Tasks
1. **_putchar**
   - **File:** `0-putchar.c`
   - **Description:** Print `_putchar` followed by a new line.

2. **I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**
   - **File:** `1-alphabet.c`
   - **Description:** Function to print the alphabet in lowercase followed by a new line.
   - **Prototype:** `void print_alphabet(void);`

3. **10 x alphabet**
   - **File:** `2-print_alphabet_x10.c`
   - **Description:** Function to print the alphabet in lowercase 10 times followed by a new line.
   - **Prototype:** `void print_alphabet_x10(void);`

4. **islower**
   - **File:** `3-islower.c`
   - **Description:** Function to check for lowercase characters.
   - **Prototype:** `int _islower(int c);`

5. **isalpha**
   - **File:** `4-isalpha.c`
   - **Description:** Function to check for alphabetic characters.
   - **Prototype:** `int _isalpha(int c);`

6. **Sign**
   - **File:** `5-sign.c`
   - **Description:** Function to print the sign of a number.
   - **Prototype:** `int print_sign(int n);`

7. **There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you**
   - **File:** `6-abs.c`
   - **Description:** Function to compute the absolute value of an integer.
   - **Prototype:** `int _abs(int);`

8. **There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important**
   - **File:** `7-print_last_digit.c`
   - **Description:** Function to print the last digit of a number.
   - **Prototype:** `int print_last_digit(int);`

9. **I'm federal agent Jack Bauer, and today is the longest day of my life**
   - **File:** `8-24_hours.c`
   - **Description:** Function to print every minute of the day starting from 00:00 to 23:59.
   - **Prototype:** `void jack_bauer(void);`

10. **Learn your times table**
    - **File:** `9-times_table.c`
    - **Description:** Function to print the 9 times table starting with 0.
    - **Prototype:** `void times_table(void);`

11. **a + b**
    - **File:** `10-add.c`
    - **Description:** Function to add two integers and return the result.
    - **Prototype:** `int add(int, int);`

12. **98 Battery Street, the OG**
    - **File:** `11-print_to_98.c`
    - **Description:** Function to print all natural numbers from `n` to `98`, followed by a new line.
    - **Prototype:** `void print_to_98(int n);`

### Advanced Tasks
1. **The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself**
   - **File:** `100-times_table.c`
   - **Description:** Function to print the `n` times table starting with 0. If `n` is greater than 15 or less than 0, the function should not print anything.
   - **Prototype:** `void print_times_table(int n);`


## Notes
- **Prototypes and Header Files:** Ensure all function prototypes and the `_putchar` prototype are included in `main.h`.
- **Compilation:** Use the provided `main.c` files for testing, but do not push them to your repository