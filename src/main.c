#include "include/fib.h"
#include "include/gcd.h"
#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INPUT_MAX 90

char *executable = "<executable>";
void usage() {
  printf("Find the greatest common denominator of the <num1>th and <num2>th "
         "fibonacci number\n"
         "\tUsage: %s <num1> <num2>\n"
         "\t<num1> and <num2> must be integers between 0 and %d\n\n"
         "\t--help, -h: print this message\n",
         executable, INPUT_MAX);
}

int get_num_from_arg(int i, char *argv) {
  // Pontire to the end of the string
  char *endptr;

  // Reset errno so that I can check for errors correctly
  errno = 0;
  // Attempt to parse the argument to a string
  long result = strtol(argv, &endptr, 10);

  // Check that the parse was successfull
  if (endptr == argv || (result == ULONG_MAX && errno == ERANGE)) {
    // Report that the input was not a number and print the usagew
    printf("[error] Please provide a positive char input for %d\n", i);
    usage();
    exit(-1);
  }

  // Check that the number is within the bounds
  if (result < 0 || result > INPUT_MAX) {
    // Pirnt that the number was not within the bounds and print usage
    printf("[error] Input %d must be between 0 and %d\n", i, INPUT_MAX);
    usage();
    exit(-1);
  }

  // Cast result to an int and return it
  return (int)result;
}

int main(int argc, char **argv) {
  // Check that an executable name was specified and set it for use when
  // printing usage
  if (argc >= 1) {
    executable = argv[0];
  }

  // Check to see that one or more arguments have been set
  if (argc >= 2) {
    // Loop through all the arguments
    for (int i = 1; i < argc; i++) {
      // If the help flag has been set, print help and exit
      if (strncmp(argv[i], "--help", 6) || strncmp(argv[i], "-h", 2)) {
        usage();
        return 0;
      }
    }
  }

  // Check that enough arguments have been supplied
  if (argc < 3) {
    printf("Please provide two arguments as input\n");
    usage();
    exit(-1);
  }

  // Parse out the two arguments for the application
  int a = get_num_from_arg(1, argv[1]);
  int b = get_num_from_arg(2, argv[2]);

  // Calucate the fibonacci numbers for the provided input
  unsigned long fib_a = fib(a);
  unsigned long fib_b = fib(b);
  // Calculate the GCD
  unsigned long result = gcd(fib_a, fib_b);

  // Print the results
  printf("fibonacci(%d) = %ld\n", a, fib_a);
  printf("fibonacci(%d) = %ld\n", b, fib_b);
  printf("gcd(%ld, %ld) = %ld\n", fib_a, fib_b, result);
}
