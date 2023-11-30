# 0x1A - Hash Tables in C

This repository contains the implementation of a hash table in C. A hash table is a data structure that implements an associative array abstract data type, a structure that can map keys to values. A hash table uses a hash function to compute an index into an array of buckets or slots, from which the desired value can be found.

## Files

- `hash_tables.h`: This is the header file that contains the declarations of all the functions used in the hash table implementation.
- `hash_table_create.c`: This file contains the implementation of the `hash_table_create` function, which creates a new hash table.
- `djb2.c`: This file contains the implementation of the `djb2` function, which is a hash function used in the hash table.
- `key_index.c`: This file contains the implementation of the `key_index` function, which calculates the index for a given key in the hash table.
- `hash_table_set.c`: This file contains the implementation of the `hash_table_set` function, which sets a value for a given key in the hash table.
- `hash_table_get.c`: This file contains the implementation of the `hash_table_get` function, which gets the value for a given key in the hash table.
- `hash_table_print.c`: This file contains the implementation of the `hash_table_print` function, which prints the hash table.
- `hash_table_delete.c`: This file contains the implementation of the `hash_table_delete` function, which deletes the hash table.
- `6-main.c`: This is the main file that uses all the functions to create a hash table, set values, get values, print the hash table, and delete the hash table.

## Compilation

To compile the program, use the following command:

```bash
gcc -Wall -pedantic -Werror -Wextra 6-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c -o hash_table
```

This will compile all the C files and create an executable named `hash_table`.

## Running the Program

To run the program, use the following command:

```bash
./hash_table
```

This will run the program and print the hash table.

## Errors

If you encounter any compilation errors, make sure that all the header files are correctly included and that the function names match exactly with the function names in the definition and where they're used. Also, ensure that the header file containing the declaration of `hash_table_delete` is included before the file where the function is used.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
