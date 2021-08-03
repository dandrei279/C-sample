#include "matrix_utils.h"

int main (void) {
    matrix M;
    M.n = 2;
    M.m = 3;

    random_fill(&M);
    print(M);

    return 0;
}

