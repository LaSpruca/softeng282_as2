#include "fib.h"
#include "gdc.h"

int main() {
  printf("\n----- Running Tests -----\n");
  FibResults fib = fib_run_tests();
  printf("\n----- Test Results ------\n");
  fib_print_results(fib);
}
