# SOFTENG 282 Assignment

This is a implementation of the SOFTENG 282 2024 assigment in C

## Source structure
- **`/include`**: Location of header files
- **`/src`**: Location of source files
- **`/test`**: Location of all tests and code required to run the tests

## Running
This project has been designed to run in a unix-like environment. It uses make
for the build system.

The main application can be executed with `make run`, and tests can be run with
`make test`.

To generate `compile_commands.json` for use with clangd, ensure that 
[bear](https://github.com/rizsotto/Bear) is instealled on the system and run 
`make cc_db`.

By default the clang compiler is used if you wish to use GCC or any other 
compiler (i.e. `gcc`) run `make <target> CC=<compiler>` (i.e. 
`make run CC=gcc`)
