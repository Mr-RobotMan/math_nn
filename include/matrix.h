#ifndef MATRIX_H
#define MATRIX_H

#include <stdio.h>
#include <stdlib.h>

typedef sstruct {
    int rows;
    int cols;
    double **data;
}Matrix;

// Memory Management

Matrix* CreateMatrix();
void freeMatrix();
void Initialize_Matrix_zero();
void Initialize_Matrix_ones();
void Initialize_Matrix_random();


// Basic Operations

Matrix* add_matrix();
Matrix* sub_matrix();
Matrix* mul_matrix();
Matrix* div_matrix();
Matrix* hadamard_prod();
Matrix* scalar_mul();
Matrix* transpose_matrix();
double determinant();

// Utilities
int compare_matrix();
void getshape();
double* flatten_matrix();
int reshape_matrix();
double frobenius_norm();
double l2_norm();

// Conversions

Matrix* from_array();
double* to_array();

#endif
