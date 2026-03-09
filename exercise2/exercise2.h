#ifndef EXERCISE2_H
# define EXERCISE2_H
#define SIZE 5
void addMatrices(int m1[SIZE][SIZE], int m2[SIZE][SIZE], int m3[SIZE][SIZE], int r1, int c1, int r2, int c2);
void printMatrix(int m[SIZE][SIZE]);
void multiplyMatrices(int m1[SIZE][SIZE], int m2[SIZE][SIZE], int m3[SIZE][SIZE], int c1, int r2);
void transposeMatrix(int m[SIZE][SIZE]);
#endif