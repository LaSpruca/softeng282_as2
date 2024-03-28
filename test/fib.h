#pragma once
#include "assert.h"
#include "include/fib.h"

typedef struct FibResults {
  bool test_1;
} FibResults;

const unsigned long fib_nums[] = {
    1,          1,           2,          3,          5,          8,
    13,         21,          34,         55,         89,         144,
    233,        377,         610,        987,        1597,       2584,
    4181,       6765,        10946,      17711,      28657,      46368,
    75025,      121393,      196418,     317811,     514229,     832040,
    1346269,    2178309,     3524578,    5702887,    9227465,    14930352,
    24157817,   39088169,    63245986,   102334155,  165580141,  267914296,
    433494437,  701408733,   1134903170, 1836311903, 2971215073, 4807526976,
    7778742049, 12586269025, 20365011074};

bool test_1() {
  for (int i = 1; i < 51; i++) {
    assert_long("test_1", fib_nums[i], fib(i));
  }

  return true;
}

FibResults fib_run_tests() {
  FibResults results = {.test_1 = test_1()};
  return results;
}

void fib_print_results(FibResults results) { print_results("fib", test_1); }
