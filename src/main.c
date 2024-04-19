#include "include/fib.h"
#include "include/gcd.h"
#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define INPUT_MAX 90

char *executable = "<executable>";
void usage() {
  printf("Find the greatest common denominator of the <num1>th and <num2>th "
         "fibonacci number\n"
         "\tUsage: %s <num1> <num2>\n"
         "\t<num1> and <num2> must be integers between 0 and %d\n",
         executable, INPUT_MAX);
}

int get_num_from_arg(int i, char *argv) {
  char *endptr;

  errno = 0;
  long result = strtol(argv, &endptr, 10);

  if (endptr == argv || (result == ULONG_MAX && errno == ERANGE)) {
    printf("[error] Please provide a positive char input for %d\n", i);
    usage();
    exit(-1);
  }

  if (result < 0 || result > INPUT_MAX) {
    printf("[error] Input %d must be between 0 and %d\n", i, INPUT_MAX);
    usage();
    exit(-1);
  }

  return (int)result;
}

int main(int argc, char **argv) {
  if (argc >= 1) {
    executable = argv[0];
  }

  if (argc < 3) {
    printf("Please provide two arguments as input\n");
    usage();
    exit(-1);
  }

  int a = get_num_from_arg(1, argv[1]);
  int b = get_num_from_arg(2, argv[2]);

  unsigned long fib_a = fib(a);
  unsigned long fib_b = fib(b);
  unsigned long result = gcd(fib_a, fib_b);

  printf("fibonacci(%d) = %ld\n", a, fib_a);
  printf("fibonacci(%d) = %ld\n", b, fib_b);
  printf("gcd(%ld, %ld) = %ld\n", fib_a, fib_b, result);
}
