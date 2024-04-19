#include "include/gcd.h"

typedef struct EuclidDivisionResult {
  unsigned long b;
  unsigned long r;
} EuclidDivisionResult;

// Apply euclidians division lemma to a and q,
// a = q \times b + r & \le r < q,\quad b \in \mathbb{N}
EuclidDivisionResult euclid_division(unsigned long a, unsigned long q) {
  // Find the remainder
  unsigned long r = a % q;
  // Find the correct natural number for the equation
  unsigned long b = (a - r) / q;

  // Return the result of the division
  EuclidDivisionResult res = {.b = b, .r = r};
  return res;
}

// Find the GCD using euclidian algorithem
unsigned long gcd(unsigned long n, unsigned long m) {
  // if n == m then gcd(m, n) = n
  if (n == m) {
    return n;
  }

  // Set a and b equal to n and m such that a > b
  unsigned long a = n > m ? n : m;
  unsigned long b = n > m ? m : n;

  // The initial iteration of the algorithem
  EuclidDivisionResult res = euclid_division(a, b);

  // Keep running until the remainder is zero, in which case the gcd is b
  while (res.r != 0) {
    // If the gcd was not found then update a and b
    a = b;
    b = res.r;

    // Get the result of appling eculids division lemma
    res = euclid_division(a, b);
  }

  // Return the gcd
  return b;
}
