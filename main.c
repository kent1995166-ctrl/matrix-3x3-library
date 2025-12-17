#include <stdio.h>
#include "matrix.h"

int main() {
    Matrix3x3 A = {{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }};

    Matrix3x3 B = {{
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    }};

    printf("Matrix A:\n");
    matrix_print(A);

    printf("\nMatrix B:\n");
    matrix_print(B);

    printf("\nA + B:\n");
    matrix_print(matrix_add(A, B));

    printf("\nA - B:\n");
    matrix_print(matrix_sub(A, B));

    printf("\nA * B:\n");
    matrix_print(matrix_mul(A, B));

    printf("\nTranspose(A):\n");
    matrix_print(matrix_transpose(A));

    printf("\nDet(A): %.2f\n", matrix_determinant(A));

    printf("\nInverse(B):\n");
    matrix_print(matrix_inverse(B));

    return 0;
}