#include "include/fib.h"
#include <stdio.h>

// A list of fibonacci numbers
unsigned long nums[500] = {};

int main() {
  // First two numbers in the fibonacci sequence
  nums[0] = 0;
  nums[1] = 1;

  // Check all the results of fib(n) are expected
  for (int i = 2; i < 500; i++) {
    unsigned long n = nums[i - 1] + nums[i - 2];
    // Check that the correct fibonacci number is returned
    if (n != fib(i)) {
      // Print out at which fibonacci number the algorithem failed
      printf(
          "Maximum correct fib(n) at n = %d\n expected = %ld, fib(%d) = %ld\n",
          i - 1, n, i, fib(i));
      // Exit the program
      break;
    }

    // Store the ith successful fibonacci number in the list
    nums[i] = n;
  }
}
