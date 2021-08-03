#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int** A;
    int m, n;
} matrix;

#define SEED 60042

void random_fill(matrix *M);
void print(matrix M);

