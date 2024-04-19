#include "fib.h"
#include "gcd.h"

int main() {
  printf("\n----- Running Tests -----\n");
  FibResults fib = fib_run_tests();
  GcdResults gcd = gcd_run_test();
  printf("\n----- Test Results ------\n");
  fib_print_results(fib);
  gcd_print_results(gcd);
}
