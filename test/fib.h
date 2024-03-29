#pragma once
#include "assert.h"
#include "include/fib.h"

#define fib_n(n)                                                               \
  bool test_fib_##n() {                                                        \
    assert_long("test_fib_" #n, fib(n), fib_nums[n]);                          \
    return true;                                                               \
  }

typedef struct FibResults {
  bool test_fib_0;
  bool test_fib_1;
  bool test_fib_2;
  bool test_fib_3;
  bool test_fib_4;
  bool test_fib_5;
  bool test_fib_6;
  bool test_fib_7;
  bool test_fib_8;
  bool test_fib_9;
  bool test_fib_10;
  bool test_fib_11;
  bool test_fib_12;
  bool test_fib_13;
  bool test_fib_14;
  bool test_fib_15;
  bool test_fib_16;
  bool test_fib_17;
  bool test_fib_18;
  bool test_fib_19;
  bool test_fib_20;
  bool test_fib_21;
  bool test_fib_22;
  bool test_fib_23;
  bool test_fib_24;
  bool test_fib_25;
  bool test_fib_26;
  bool test_fib_27;
  bool test_fib_28;
  bool test_fib_29;
  bool test_fib_30;
  bool test_fib_31;
  bool test_fib_32;
  bool test_fib_33;
  bool test_fib_34;
  bool test_fib_35;
  bool test_fib_36;
  bool test_fib_37;
  bool test_fib_38;
  bool test_fib_39;
  bool test_fib_40;
  bool test_fib_41;
  bool test_fib_42;
  bool test_fib_43;
  bool test_fib_44;
  bool test_fib_45;
  bool test_fib_46;
  bool test_fib_47;
  bool test_fib_48;
  bool test_fib_49;
  bool test_fib_50;
} FibResults;

const unsigned long fib_nums[] = {
    0,          1,          1,           2,          3,          5,
    8,          13,         21,          34,         55,         89,
    144,        233,        377,         610,        987,        1597,
    2584,       4181,       6765,        10946,      17711,      28657,
    46368,      75025,      121393,      196418,     317811,     514229,
    832040,     1346269,    2178309,     3524578,    5702887,    9227465,
    14930352,   24157817,   39088169,    63245986,   102334155,  165580141,
    267914296,  433494437,  701408733,   1134903170, 1836311903, 2971215073,
    4807526976, 7778742049, 12586269025, 20365011074};

fib_n(0);

fib_n(1);
fib_n(2);
fib_n(3);
fib_n(4);
fib_n(5);
fib_n(6);
fib_n(7);
fib_n(8);
fib_n(9);

fib_n(10);
fib_n(11);
fib_n(12);
fib_n(13);
fib_n(14);
fib_n(15);
fib_n(16);
fib_n(17);
fib_n(18);
fib_n(19);

fib_n(20);
fib_n(21);
fib_n(22);
fib_n(23);
fib_n(24);
fib_n(25);
fib_n(26);
fib_n(27);
fib_n(28);
fib_n(29);

fib_n(30);
fib_n(31);
fib_n(32);
fib_n(33);
fib_n(34);
fib_n(35);
fib_n(36);
fib_n(37);
fib_n(38);
fib_n(39);

fib_n(40);
fib_n(41);
fib_n(42);
fib_n(43);
fib_n(44);
fib_n(45);
fib_n(46);
fib_n(47);
fib_n(48);
fib_n(49);

fib_n(50);

FibResults fib_run_tests() {
  FibResults results = {
      .test_fib_0 = test_fib_0(),
      .test_fib_1 = test_fib_1(),
      .test_fib_2 = test_fib_2(),
      .test_fib_3 = test_fib_3(),
      .test_fib_4 = test_fib_4(),
      .test_fib_5 = test_fib_5(),
      .test_fib_6 = test_fib_6(),
      .test_fib_7 = test_fib_7(),
      .test_fib_8 = test_fib_8(),
      .test_fib_9 = test_fib_9(),

      .test_fib_10 = test_fib_10(),
      .test_fib_11 = test_fib_11(),
      .test_fib_12 = test_fib_12(),
      .test_fib_13 = test_fib_13(),
      .test_fib_14 = test_fib_14(),
      .test_fib_15 = test_fib_15(),
      .test_fib_16 = test_fib_16(),
      .test_fib_17 = test_fib_17(),
      .test_fib_18 = test_fib_18(),
      .test_fib_19 = test_fib_19(),

      .test_fib_20 = test_fib_20(),
      .test_fib_21 = test_fib_21(),
      .test_fib_22 = test_fib_22(),
      .test_fib_23 = test_fib_23(),
      .test_fib_24 = test_fib_24(),
      .test_fib_25 = test_fib_25(),
      .test_fib_26 = test_fib_26(),
      .test_fib_27 = test_fib_27(),
      .test_fib_28 = test_fib_28(),
      .test_fib_29 = test_fib_29(),

      .test_fib_30 = test_fib_30(),
      .test_fib_31 = test_fib_31(),
      .test_fib_32 = test_fib_32(),
      .test_fib_33 = test_fib_33(),
      .test_fib_34 = test_fib_34(),
      .test_fib_35 = test_fib_35(),
      .test_fib_36 = test_fib_36(),
      .test_fib_37 = test_fib_37(),
      .test_fib_38 = test_fib_38(),
      .test_fib_39 = test_fib_39(),

      .test_fib_40 = test_fib_40(),
      .test_fib_41 = test_fib_41(),
      .test_fib_42 = test_fib_42(),
      .test_fib_43 = test_fib_43(),
      .test_fib_44 = test_fib_44(),
      .test_fib_45 = test_fib_45(),
      .test_fib_46 = test_fib_46(),
      .test_fib_47 = test_fib_47(),
      .test_fib_48 = test_fib_48(),
      .test_fib_49 = test_fib_49(),

      .test_fib_50 = test_fib_50(),
  };

  return results;
}

void fib_print_results(FibResults results) {
  print_results("fib", test_fib_0);
  print_results("fib", test_fib_1);
  print_results("fib", test_fib_2);
  print_results("fib", test_fib_3);
  print_results("fib", test_fib_4);
  print_results("fib", test_fib_5);
  print_results("fib", test_fib_6);
  print_results("fib", test_fib_7);
  print_results("fib", test_fib_8);
  print_results("fib", test_fib_9);

  print_results("fib", test_fib_10);
  print_results("fib", test_fib_11);
  print_results("fib", test_fib_12);
  print_results("fib", test_fib_13);
  print_results("fib", test_fib_14);
  print_results("fib", test_fib_15);
  print_results("fib", test_fib_16);
  print_results("fib", test_fib_17);
  print_results("fib", test_fib_18);
  print_results("fib", test_fib_19);

  print_results("fib", test_fib_20);
  print_results("fib", test_fib_21);
  print_results("fib", test_fib_22);
  print_results("fib", test_fib_23);
  print_results("fib", test_fib_24);
  print_results("fib", test_fib_25);
  print_results("fib", test_fib_26);
  print_results("fib", test_fib_27);
  print_results("fib", test_fib_28);
  print_results("fib", test_fib_29);

  print_results("fib", test_fib_30);
  print_results("fib", test_fib_31);
  print_results("fib", test_fib_32);
  print_results("fib", test_fib_33);
  print_results("fib", test_fib_34);
  print_results("fib", test_fib_35);
  print_results("fib", test_fib_36);
  print_results("fib", test_fib_37);
  print_results("fib", test_fib_38);
  print_results("fib", test_fib_39);

  print_results("fib", test_fib_40);
  print_results("fib", test_fib_41);
  print_results("fib", test_fib_42);
  print_results("fib", test_fib_43);
  print_results("fib", test_fib_44);
  print_results("fib", test_fib_45);
  print_results("fib", test_fib_46);
  print_results("fib", test_fib_47);
  print_results("fib", test_fib_48);
  print_results("fib", test_fib_49);

  print_results("fib", test_fib_50);
}
