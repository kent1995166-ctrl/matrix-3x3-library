#ifndef MATRIX_H
#define MATRIX_H

typedef struct {
    float m[3][3];
} Matrix3x3;


Matrix3x3 matrix_add(const Matrix3x3 A, const Matrix3x3 B);
Matrix3x3 matrix_sub(const Matrix3x3 A, const Matrix3x3 B);
Matrix3x3 matrix_scalar_mul(const Matrix3x3 A, float k);
Matrix3x3 matrix_mul(const Matrix3x3 A, const Matrix3x3 B);


Matrix3x3 matrix_transpose(const Matrix3x3 A);
float matrix_determinant(const Matrix3x3 A);
Matrix3x3 matrix_inverse(const Matrix3x3 A);


void matrix_print(const Matrix3x3 A);

#endif