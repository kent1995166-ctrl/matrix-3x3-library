#include <stdio.h>
#include "matrix.h"

void matrix_print(const Matrix3x3 A) {
    for (int i = 0; i < 3; i++) {
        printf("[ ");
        for (int j = 0; j < 3; j++) {
            printf("%6.2f ", A.m[i][j]);
        }
        printf("]\n");
    }
}
