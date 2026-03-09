/*
Name: Maddi Clark
KUID: 3162616
Date: 03/08/2026
Description: Reads input for two matrices and provides various functions to manipulate them
*/
#include <stdio.h>
#include "exercise2.h"
#define SIZE 5

void addMatrices(int m1[SIZE][SIZE], int m2[SIZE][SIZE], int m3[SIZE][SIZE]){
    for (int i = 0; i<SIZE; i++){
        for (int j = 0; j<SIZE; j++){
            m3[i][j] = m1[i][j]+m2[i][j];
        }
    }
}

void printMatrix(int m3[SIZE][SIZE]){
    for (int i=0; i<SIZE; i++){
        for (int j=0; j<SIZE; j++){
            printf("%d", m3[i][j]);
        }
    }
}

int main(){
    int m1[SIZE][SIZE] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    int m2[SIZE][SIZE] = {
        {25, 24, 23, 22, 21},
        {20, 19, 18, 17, 16},
        {15, 14, 13, 12, 11},
        {10, 9, 8, 7, 6},
        {5, 4, 3, 2, 1}
    };
    int m3[SIZE][SIZE];
    addMatrices(m1, m2, m3);
    printf("%d", m3);
}