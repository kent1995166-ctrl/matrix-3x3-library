#include "matrix.h"

Matrix3x3 matrix_scalar_mul(const Matrix3x3 A, float k) {
    Matrix3x3 R;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            R.m[i][j] = A.m[i][j] * k;
    return R;
}

Matrix3x3 matrix_mul(const Matrix3x3 A, const Matrix3x3 B) {
    Matrix3x3 R;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            R.m[i][j] = 0.0f;
            for (int k = 0; k < 3; k++)
                R.m[i][j] += A.m[i][k] * B.m[k][j];
        }
    }
    return R;
}