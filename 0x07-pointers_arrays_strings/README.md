# C - Even more pointers, arrays, and strings

## Tasks

1. **memset**

    Write a function that fills memory with a constant byte.

    - Prototype: `char *_memset(char *s, char b, unsigned int n);`
    - The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`.
    - Returns a pointer to the memory area `s`.

2. **memcpy**

    Write a function that copies a memory area.

    - Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
    - The `_memcpy()` function copies `n` bytes from the memory area `src` to the memory area `dest`.
    - Returns a pointer to `dest`.
    - Note: The standard library provides a similar function: `memcpy`. Run `man memcpy` to learn more.

3. **strchr**

    Write a function that locates a character in a string.

    - Prototype: `char *_strchr(char *s, char c);`
    - Returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found.
    - Note: The standard library provides a similar function: `strchr`. Run `man strchr` to learn more.

4. **strspn**

    Write a function that gets the length of a prefix substring.

    - Prototype: `unsigned int _strspn(char *s, char *accept);`
    - Returns the number of bytes in the initial segment of `s` which consist only of bytes from `accept`.
    - Note: The standard library provides a similar function: `strspn`. Run `man strspn` to learn more.

5. **strpbrk**

    Write a function that searches a string for any of a set of bytes.

    - Prototype: `char *_strpbrk(char *s, char *accept);`
    - The `_strpbrk()` function locates the first occurrence in the string `s` of any of the bytes in the string `accept`.
    - Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found.
    - Note: The standard library provides a similar function: `strpbrk`. Run `man strpbrk` to learn more.

6. **strstr**

    Write a function that locates a substring.

    - Prototype: `char *_strstr(char *haystack, char *needle);`
    - The `_strstr()` function finds the first occurrence of the substring `needle` in the string `haystack`.
    - Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found.
    - Note: The standard library provides a similar function: `strstr`. Run `man strstr` to learn more.

7. **Chess is mental torture**

    Write a function that prints the chessboard.

    - Prototype: `void print_chessboard(char (*a)[8]);`

8. **The line of life is a ragged diagonal between duty and desire**

    Write a function that prints the sum of the two diagonals of a square matrix of integers.

    - Prototype: `void print_diagsums(int *a, int size);`

9. **Double pointer, double fun**

    Write a function that sets the value of a pointer to a char.

    - Prototype: `void set_string(char **s, char *to);`

10. **My primary goal of hacking was the intellectual curiosity, the seduction of a**

    Create a file that contains the password for the `crackme2` executable.

    - Your file should contain the exact password, no new line, no extra space.
    - Use tools like `ltrace`, `ldd`, `gdb`, and `objdump` to help.
    - You may need to install the openssl library to run the `crakme2` program: `sudo apt install libssl-dev`.
    - Edit the source list: `sudo nano /etc/apt/sources.list` to add the following line: `deb http://security.ubuntu.com/ubuntu xenial-security main`. Then run `sudo apt update` and `sudo apt install libssl1.0.0
