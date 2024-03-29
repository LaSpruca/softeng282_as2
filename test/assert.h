#pragma once

#include <stdio.h>

typedef int bool;
#define true 1
#define false 0

#define assert_long(test, left, right)                                         \
  if (left != right) {                                                         \
    fprintf(stderr,                                                            \
            __FILE__ ":%d, " test "\n"                                         \
                     "Assertion failed: left %ld, right %ld\n\n",              \
            __LINE__, left, right);                                            \
    return false;                                                              \
  }

#define assert_int(test, left, right)                                          \
  if (left != right) {                                                         \
    fprintf(stderr,                                                            \
            __FILE__ ":%d, " test "\n"                                         \
                     "Assertion failed: left %d, right %d\n\n",                \
            __LINE__, left, right);                                            \
    return false;                                                              \
  }

#define print_results(path, name)                                              \
  if (results.name) {                                                          \
    printf("\x1b[32m" path "/" #name ": Pass\x1b[0m\n");                       \
  } else {                                                                     \
    printf("\x1b[31m" path "/" #name ": Fail\x1b[0m\n");                       \
  }
