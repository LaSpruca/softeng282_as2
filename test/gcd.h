#pragma once
#include "assert.h"
#include "include/gcd.h"

#define gcd_x_y(a, b, expected)                                                \
  bool test_gcd_##a##_##b() {                                                  \
    assert_long("test_fib_" #a #b, gcd(a, b), expected);                       \
    return true;                                                               \
  }

gcd_x_y(3, 5, 1l);
gcd_x_y(5, 10, 5l);
gcd_x_y(1496112, 1806098, 142l);

typedef struct GcdResults {
  bool test_3_5;
  bool test_5_10;
  bool test_1496112_1806098;
} GcdResults;

GcdResults gcd_run_test() {
  GcdResults results = {
      .test_3_5 = test_gcd_3_5(),
      .test_5_10 = test_gcd_5_10(),
      .test_1496112_1806098 = test_gcd_1496112_1806098(),
  };

  return results;
}

void gcd_print_results(GcdResults results) {
  print_results("gcd", test_3_5);
  print_results("gcd", test_5_10);
  print_results("gcd", test_1496112_1806098);
}
