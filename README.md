# SOFTENG 282 Assignment

This is a implementation of the SOFTENG 282 2024 assigment in C

# Source structure
- **`/include`**: Location of header files
- **`/src`**: Location of source files
- **`/test`**: Location of all tests and code required to run the tests

# Usage
`<executable> <num1> <num2>`, find the greatest common denominator of `num1` and 
`num2`. `executable` will be out/main if built using the Makefile, otherwise it
is whatever you have configured the compiler to output. To view the output use
`<executable> --help`.

# Running
This project has been designed to run in a unix-like environment. It uses make
for the build system.

The main application can be executed with `make run`, and tests can be run with
`make test`.

To generate `compile_commands.json` for use with clangd, ensure that 
[bear](https://github.com/rizsotto/Bear) is instealled on the system and run 
`make cc_db`.

By default the clang compiler is used if you wish to use GCC or any other 
compiler (i.e. `gcc`) run `make <target> CC=<compiler>` (i.e. 
`make CC=gcc run`)

When using `make run`, aditional arguments to the application can be sepcified 
after `run`, --help will not work though as make will caputre that arg and print
it's own help, to print the help dialog, either run `make run` with no args or 
`out/main --help`.

## Without using make
If you do not want to compile the application with make, use
```bash
gcc -I./ -lm src/main.c src/gcd.c src/fib.c -o main
```

# Maximum input
The maximum input of 70 was chosen by comparing the result of the `fib` function
with a fibonacci sequence calculated by summing the two previous fibonacci 
numbers. Once the expected and the resulting fibonacci numbers do not equal 
each other, then the script prints out the maximum correct fibonacci numberp

