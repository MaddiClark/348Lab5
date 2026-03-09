/*
Name: Maddi Clark
KUID: 3162616
Date: 03/08/2026
Description: Reads input for two matrices and provides various functions to manipulate them
*/
#include <stdio.h>
#include "exercise2.h"
#define SIZE 5

int addMatrices(int m1[SIZE][SIZE], int m2[SIZE][SIZE], int r1, int c1, int r2, int c2){
    int m3[SIZE][SIZE];
    if (r1==r2 && c1==c2){
    for (int i = 0; i<SIZE; i++){
        for (int j = 0; j<SIZE; j++){
            m3[i][j] = m1[i][j]+m2[i][j];
        }
    }
    return m3[SIZE][SIZE];}
    else{
        printf("Cannot add matrices of differing sizes\n");
        return 0;
    }
}

void printMatrix(int m3[SIZE][SIZE]){
    for (int i=0; i<SIZE; i++){
        for (int j=0; j<SIZE; j++){
            printf("%d", m3[i][j]);
        }
        printf("\n");
    }
}

int multiplyMatrices(int m1[SIZE][SIZE], int m2[SIZE][SIZE],int c1, int r2){
    if(c1==r2){
    int m3[SIZE][SIZE];
    for (int i=0; i<SIZE;i++){
        for (int j = 0; j<SIZE; j++){
            for (int k=0; k<c1;k++){
                m3[i][j]+=m1[i][j]*m2[i][j];
            }
        }
    }}
    else{
        printf("Invalid Matrix Sizes\n");
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
    m3[SIZE][SIZE] = addMatrices(m1, m2, SIZE, SIZE, SIZE, SIZE);
    printMatrix(m3);
    m3[SIZE][SIZE] = multiplyMatrices(m1, m2, SIZE, SIZE);
    printMatrix(m3);
}