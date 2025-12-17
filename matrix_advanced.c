#include "matrix.h"

Matrix3x3 matrix_transpose(const Matrix3x3 A) {
    Matrix3x3 R;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            R.m[i][j] = A.m[j][i];
    return R;
}

float matrix_determinant(const Matrix3x3 A) {
    float det = 
        A.m[0][0] * (A.m[1][1] * A.m[2][2] - A.m[1][2] * A.m[2][1]) -
        A.m[0][1] * (A.m[1][0] * A.m[2][2] - A.m[1][2] * A.m[2][0]) +
        A.m[0][2] * (A.m[1][0] * A.m[2][1] - A.m[1][1] * A.m[2][0]);

    return det;
}

Matrix3x3 matrix_inverse(const Matrix3x3 A) {
    Matrix3x3 R;
    float det = matrix_determinant(A);

    if (det == 0) { 
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                R.m[i][j] = 0;
        return R;
    }

    float invDet = 1.0f / det;

    R.m[0][0] =  (A.m[1][1] * A.m[2][2] - A.m[1][2] * A.m[2][1]) * invDet;
    R.m[0][1] = -(A.m[0][1] * A.m[2][2] - A.m[0][2] * A.m[2][1]) * invDet;
    R.m[0][2] =  (A.m[0][1] * A.m[1][2] - A.m[0][2] * A.m[1][1]) * invDet;

    R.m[1][0] = -(A.m[1][0] * A.m[2][2] - A.m[1][2] * A.m[2][0]) * invDet;
    R.m[1][1] =  (A.m[0][0] * A.m[2][2] - A.m[0][2] * A.m[2][0]) * invDet;
    R.m[1][2] = -(A.m[0][0] * A.m[1][2] - A.m[0][2] * A.m[1][0]) * invDet;

    R.m[2][0] =  (A.m[1][0] * A.m[2][1] - A.m[1][1] * A.m[2][0]) * invDet;
    R.m[2][1] = -(A.m[0][0] * A.m[2][1] - A.m[0][1] * A.m[2][0]) * invDet;
    R.m[2][2] =  (A.m[0][0] * A.m[1][1] - A.m[0][1] * A.m[1][0]) * invDet;

    return R;
}