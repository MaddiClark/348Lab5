/*
Name: Maddi Clark
KUID: 3162616
Date: 03/08/2026
Lab05
Description: Takes in a file of sales figures and generates various reports
*/
#include <stdio.h>

void monthlyReport(input){
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("Monthly Sales Report for 2024");
    printf("Month \tSales\n");
    for (int i=0; i>sizeof(input); i++){
        printf("%s \t%f\n", months[i], input[i]);
    }
}

void main(){
    FILE *fptr;
    fptr = open("ex1input.txt", "r");
    float figures[12];
    fgets(figures, 12, fptr);
    monthlyReport(figures);
}