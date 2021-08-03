#include "matrix_utils.h"


void random_fill(matrix *M) {
    int value = SEED;

    M->A = (int **) calloc(M->n, sizeof(int *));
    for (int i = 0; i < M->n; i++) {
        M->A[i] = (int *) calloc(M->m, sizeof(int *));
    }

    for (int i = 0; i < M->n; i++) {
        for (int j = 0; j < M->m; j++) {
            M->A[i][j] = value;
            value = value & 1 ? 3 * value + 1: value / 2;
        }
    }
}


void print(matrix M) {
    for (int i = 0; i < M.n; i++) {
        for (int j = 0; j < M.m; j++) {
            printf("%d ", M.A[i][j]);
        }
        printf("\n");
    }
}
