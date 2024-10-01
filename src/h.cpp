#include "../include/main.h"
#include <cmath>

int f(int n, int& depth) {
  depth++;
  if (n == 0) {
    return 0;
  }
  if (n % 10 > 0) {
    return n % 10;
  } else {
    return f(n / 10, depth);
  }
}

int S(int p, int q, int& totalDepth) {
  int sum = 0;
  for (int i = p; i <= q; i++) {
    int depth = 0;
    sum += f(i, depth);
    totalDepth += depth;
  }
  return sum;
}