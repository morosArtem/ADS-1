// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
  int k = 0;
  for (int i = 1; i <= value; i++) {
    if ((value % i == value) || (value % i == 0)) {
      k++;
    }
  }
  if (k == 2) {
    return true;
  } else {
    return false;
  }
}

uint64_t nPrime(uint64_t n) {
  int k = 0;
  int chislo = 0;
  while (k < n) {
    chislo++;
    if (checkPrime(chislo)) {
      k++;
    }
  }
  return chislo;
}

uint64_t nextPrime(uint64_t value) {
  int k = 0;
  while (k < 1) {
    value++;
    if (checkPrime(value)) {
      k++;
    }
  }
  return value;
}

uint64_t sumPrime(uint64_t hbound) {
  int sum = 0;
  for (int i = 0; i < hbound; i++) {
    if (checkPrime(i)) {
      sum += i;
    }
  }
  return sum;
}

uint64_t twinPrimes(uint64_t lbound, uint64_t hbound) {
  int k = 0;
  while (lbound < hbound) {
    if (checkPrime(lbound)) {
      if (nextPrime(1) - lbound == 2) {
        k++;
      }
    } else {
      lbound += 1;
    }
  }
  return k;
}
