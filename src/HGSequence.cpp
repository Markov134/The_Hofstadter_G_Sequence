//
// Created by Steph on 9/3/2025.
//

#include "HGSequence.h"

std::map<int, int> memorizedValues;

int Gsequence(int n) {
    if (n <= 1) {
        return n;
    }

    return n - Gsequence(Gsequence(n - 1));
}

int ImprovedGsequence(int n) {
    if (n <= 1) {
        return n;
    }

    auto it = memorizedValues.find(n);
    if (it != memorizedValues.end()) {
        return it->second;
    }

    int temp = ImprovedGsequence(n - 1);
    int result = n - ImprovedGsequence(temp);
    memorizedValues[n] = result;

    return result;
}