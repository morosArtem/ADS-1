// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
    int d = 2;
    while ((d * d <= value) && (value % d != 0)) {
        d += 1;
    }
    return d * d > value;
}

uint64_t nPrime(uint64_t n) {
    int k = 0;
    int chislo = 0;
    while (k <= n) {
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
    uint64_t sum = 0;
    for (uint64_t i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
            sum += i;
        }
    }
    return sum;
}

uint64_t twinPrimes(uint64_t lbound, uint64_t hbound) {
    uint64_t k = 0;
    for (uint64_t i = lbound; i <= hbound; i++) {
        if (checkPrime(i)) {
            if (nextPrime(i) - i == 2) {
                k++;
            }
        }
    }
    return k;
}
