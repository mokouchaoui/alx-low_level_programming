# Dynamic Libraries in C

This project is about creating and using dynamic libraries in C.

## Learning Objectives

- Understand what a dynamic library is, how it works, how to create one, and how to use it
- Understand the environment variable $LD_LIBRARY_PATH and how to use it
- Understand the differences between static and shared libraries
- Basic usage of nm, ldd, ldconfig

## Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- Code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Not allowed to use global variables
- No more than 5 functions per file
- Not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- Allowed to use _putchar
- The prototypes of all functions and the prototype of the function _putchar should be included in the header file called main.h

## Tasks

### Task 0

Create the dynamic library libdynamic.so containing all the functions listed below:

- int _putchar(char c);
- int _islower(int c);
- int _isalpha(int c);
- int _abs(int n);
- int _isupper(int c);
- int _isdigit(int c);
- int _strlen(char *s);
- void _puts(char *s);
- char *_strcpy(char *dest, char *src);
- int _atoi(char *s);
- char *_strcat(char *dest, char *src);
- char *_strncat(char *dest, char *src, int n);
- char *_strncpy(char *dest, char *src, int n);
- int _strcmp(char *s1, char *s2);
- char *_memset(char *s, char b, unsigned int n);
- char *_memcpy(char *dest, char *src, unsigned int n);
- char *_strchr(char *s, char c);
- unsigned int _strspn(char *s, char *accept);
- char *_strpbrk(char *s, char *accept);
- char *_strstr(char *haystack, char *needle);

### Task 1

Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

## Copyright - Plagiarism

You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.