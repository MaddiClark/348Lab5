/*
Name: Maddi Clark
KUID: 3162616
Date: 03/08/2026
Lab05
Description: Takes in a file of sales figures and generates various reports
*/
#include <stdio.h>

void monthlyReport(float input[]){
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("Monthly Sales Report for 2024\n");
    printf("Month \tSales\n");
    for (int i=0; i<12; i++){
        printf("%s \t%f\n", months[i], input[i]);
    }
}

int main(){
    FILE *fptr;
    fptr = fopen("ex1input.txt", "r");
    float figures[12];
    int i = 0;
    while(i < 12 && fscanf(fptr, "%f", &figures[i])==1){
        i++;
    }
    fclose(fptr);
    monthlyReport(figures);
}