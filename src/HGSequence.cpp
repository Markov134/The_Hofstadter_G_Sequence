//
// Created by Steph on 9/3/2025.
//

#include "HGSequence.h"

int Gsequence(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return n - Gsequence(Gsequence(n - 1));
}

int ImprovedGsequence(int n, std::vector<int>& cache) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    if (cache[n] != -1) {
        return cache[n];
    }

    int temp = ImprovedGsequence(n - 1, cache);
    return cache[n] = n - ImprovedGsequence(temp, cache);
}