#include "matrix.h"

Matrix3x3 matrix_add(const Matrix3x3 A, const Matrix3x3 B) {
    Matrix3x3 R;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            R.m[i][j] = A.m[i][j] + B.m[i][j];
    return R;
}

Matrix3x3 matrix_sub(const Matrix3x3 A, const Matrix3x3 B) {
    Matrix3x3 R;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            R.m[i][j] = A.m[i][j] - B.m[i][j];
    return R;
}