#include "include/gcd.h"

typedef struct EuclidDivisionResult {
  unsigned long b;
  unsigned long r;
} EuclidDivisionResult;

// Apply euclidians division lemma to a and q,
// a = q \times b + r & \le r < q,\quad b \in \mathbb{N}
EuclidDivisionResult euclid_divisian(unsigned long a, unsigned long q) {
  // Find the remainder
  unsigned long r = a % q;
  // Find the correct natural number for the equation
  unsigned long b = (a - r) / q;

  // Return the result of the division
  EuclidDivisionResult res = {.b = b, .r = r};
  return res;
}

unsigned long gcd(unsigned long n, unsigned long m) {
  if (n == m) {
    return n;
  }

  unsigned long a = n > m ? n : m;
  unsigned long b = n > m ? m : n;

  EuclidDivisionResult res = euclid_divisian(a, b);

  while (res.r != 0) {
    a = b;
    b = res.r;

    res = euclid_divisian(a, b);
  }

  return b;
}
