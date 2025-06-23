# C Piscine

A comprehensive 1-month C programming bootcamp challenge covering fundamental programming concepts and system programming basics.

## Overview

This repository contains solutions to various C programming exercises organized by modules. Each module focuses on specific programming concepts, from basic syntax to advanced topics like memory management and shell scripting.

## Project Structure

### C00 - Basic Functions
Introduction to C programming fundamentals and basic function implementation.

- **ex00** - `ft_putchar.c` - Print a single character
- **ex01** - `ft_print_alphabet.c` - Print the alphabet
- **ex02** - `ft_print_reverse_alphabet.c` - Print alphabet in reverse
- **ex03** - `ft_print_numbers.c` - Print numbers 0-9
- **ex04** - `ft_is_negative.c` - Check if number is negative
- **ex05** - `ft_print_comb.c` - Print all different combinations of three digits
- **ex06** - `ft_print_comb2.c` - Print all different combinations of two two-digit numbers
- **ex07** - `ft_putnbr.c` - Print an integer
- **ex08** - `ft_print_combn.c` - Print all different combinations of n digits

### C01 - Pointers and Memory
Working with pointers, memory addresses, and basic memory operations.

- **ex00** - `ft_ft.c` - Set a pointer to 42
- **ex01** - `ft_ultimate_ft.c` - Set a pointer to pointer to pointer to 42
- **ex02** - `ft_swap.c` - Swap two integers using pointers
- **ex03** - `ft_div_mod.c` - Division and modulo operations
- **ex04** - `ft_ultimate_div_mod.c` - Division and modulo using pointers
- **ex05** - `ft_putstr.c` - Print a string
- **ex06** - `ft_strlen.c` - Calculate string length
- **ex07** - `ft_rev_int_tab.c` - Reverse an integer array
- **ex08** - `ft_sort_int_tab.c` - Sort an integer array

### C02 - String Manipulation
String operations and character manipulation functions.

- **ex00** - `ft_strcpy.c` - Copy a string
- **ex01** - `ft_strncpy.c` - Copy n characters from a string
- **ex02** - `ft_str_is_alpha.c` - Check if string contains only alphabetic characters
- **ex03** - `ft_str_is_numeric.c` - Check if string contains only numeric characters
- **ex04** - `ft_str_is_lowercase.c` - Check if string contains only lowercase letters
- **ex05** - `ft_str_is_uppercase.c` - Check if string contains only uppercase letters
- **ex06** - `ft_str_is_printable.c` - Check if string contains only printable characters
- **ex07** - `ft_strupcase.c` - Convert string to uppercase
- **ex08** - `ft_strlowcase.c` - Convert string to lowercase
- **ex09** - `ft_strcapitalize.c` - Capitalize first letter of each word
- **ex10** - `ft_strlcpy.c` - Safe string copy with length limit
- **ex11** - `ft_putstr_non_printable.c` - Print string with non-printable characters in hex

### C03 - String Comparison and Concatenation
Advanced string operations including comparison and concatenation.

- **ex00** - `ft_strcmp.c` - Compare two strings
- **ex01** - `ft_strncmp.c` - Compare n characters of two strings
- **ex02** - `ft_strcat.c` - Concatenate two strings
- **ex03** - `ft_strncat.c` - Concatenate n characters from one string to another
- **ex04** - `ft_strstr.c` - Find substring in string
- **ex05** - `ft_strlcat.c` - Safe string concatenation with length limit

### C04 - Recursion and Advanced Functions
Recursive functions and more complex programming concepts.

- **ex00** - `ft_strlen.c` - String length (recursive)
- **ex01** - `ft_putstr.c` - Print string (recursive)
- **ex02** - `ft_putnbr.c` - Print number (recursive)
- **ex03** - `ft_atoi.c` - Convert string to integer
- **ex04** - *(Empty)*
- **ex05** - `ft_atoi_base.c` - Convert string to integer with custom base

### C05 - Mathematical Functions
Mathematical operations and algorithms.

- **ex00** - `ft_iterative_factorial.c` - Calculate factorial (iterative)
- **ex01** - `ft_recursive_factorial.c` - Calculate factorial (recursive)
- **ex02** - `ft_iterative_power.c` - Calculate power (iterative)
- **ex03** - `ft_recursive_power.c` - Calculate power (recursive)
- **ex04** - `ft_fibonacci.c` - Calculate Fibonacci number
- **ex05** - `ft_sqrt.c` - Calculate square root
- **ex06** - `ft_is_prime.c` - Check if number is prime
- **ex07** - `ft_find_next_prime.c` - Find next prime number

### C06 - Command Line Arguments
Working with command line arguments and program parameters.

- **ex00** - `ft_print_program_name.c` - Print program name
- **ex01** - `ft_print_params.c` - Print all command line arguments
- **ex02** - `ft_rev_params.c` - Print command line arguments in reverse
- **ex03** - `ft_sort_params.c` - Print command line arguments in sorted order

### C07 - Dynamic Memory Allocation
Memory management and dynamic allocation.

- **ex00** - `ft_strdup.c` - Duplicate a string
- **ex01** - `ft_range.c` - Create array of integers in range
- **ex02** - `ft_ultimate_range.c` - Create array with pointer to pointer
- **ex03** - `ft_strjoin.c` - Join multiple strings

### C08 - Header Files and Structures
Working with header files, macros, and data structures.

- **ex00** - `ft.h` - Header file with function declarations
- **ex01** - `ft_boolean.h` - Boolean type definition
- **ex02** - `ft_abs.h` - Absolute value macro
- **ex03** - `ft_point.h` - Point structure definition
- **ex04** - `ft_strs_to_tab.c` - Convert string array to structure array
- **ex05** - `ft_show_tab.c` - Display structure array

### C09 - Libraries and Advanced Topics
Creating libraries and advanced C programming concepts.

- **ex00** - Library creation with shell script
  - `ft_putchar.c`, `ft_putstr.c`, `ft_strcmp.c`, `ft_strlen.c`, `ft_swap.c`
  - `libft_creator.sh` - Script to create static library
- **ex01** - `Makefile` - Build system configuration
- **ex02** - `ft_split.c` - Split string by delimiter

## Additional Projects

### Rush Projects
- **rush00** - Display patterns using characters
- **rush01** - Number combination puzzle solver
- **rush02** - Number to words converter with dictionary support

### Shell Scripting
#### Shell00 - Basic Shell Commands
- **ex00** - `z` - Shell script
- **ex01** - `testShell00` - Shell testing
- **ex02** - Various test files and tar archives
- **ex03** - `id_rsa_pub` - SSH key management
- **ex04** - `midLS` - Custom ls command
- **ex05** - `git_commit.sh` - Git automation script
- **ex06** - `git_ignore.sh` - Git ignore management
- **ex07** - `b` - Shell script
- **ex08** - `clean` - Cleanup script
- **ex09** - `ft_magic`, `ftwo` - Magic number and file operations

#### Shell01 - Advanced Shell Scripting
- **ex01** - `print_groups.sh` - Print group information
- **ex02** - `find_sh.sh` - Find shell scripts
- **ex03** - `count_files.sh` - Count files in directory
- **ex04** - `MAC.sh` - MAC address operations
- **ex05** - `"\?$*'MaRViN'*$?\""` - Special character handling
- **ex06** - `skip.sh` - Skip script

## Getting Started

1. Navigate to any exercise directory
2. Compile the C files using gcc:
   ```bash
   gcc -Wall -Wextra -Werror *.c -o program_name
   ```
3. Run the compiled program:
   ```bash
   ./program_name
   ```

## Learning Objectives

This bootcamp covers:
- C programming fundamentals
- Memory management and pointers
- String manipulation
- Recursion and algorithms
- Command line programming
- Shell scripting
- Build systems (Makefiles)
- Library creation
- Data structures

## Requirements

- GCC compiler
- Unix-like environment (macOS, Linux, or WSL)
- Basic understanding of terminal commands

## Note

This is a learning project from a C programming bootcamp. The exercises are designed to teach fundamental programming concepts through practical implementation. Each exercise builds upon previous knowledge, creating a comprehensive learning experience.
