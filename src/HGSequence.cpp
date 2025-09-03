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

int ImprovedGsequence(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    int temp = Gsequence(Gsequence(n - 1));
    return n - temp;
}