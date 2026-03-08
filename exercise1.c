/*
Name: Maddi Clark
KUID: 3162616
Date: 03/08/2026
Lab05
Description: Takes in a file of sales figures and generates various reports
*/
#include <stdio.h>

void monthlyReport(float input[], const char *months[]){
    printf("Monthly Sales Report for 2024\n");
    printf("Month \tSales\n");
    for (int i=0; i<12; i++){
        printf("%s \t%.2f\n", months[i], input[i]);
    }
}

void salesSummary(float input[], const char *months[]){
    printf("Sales Summary Report: \n");
    float min = input[0];
    float max = input[0];
    float sum = 0;

    for (int i = 0; i < 12; i++){
        if (input[i] < min) {
            min = input[i];
        }
        if (input[i] > max) {
            max = input[i];
        }
        sum+=input[i];
    }

    float avg = sum/12;

    printf("Minimum sales: %.2f\n", min);
    printf("Maximum sales: %.2f\n", max);
    printf("Average sales: %.2f\n", avg);
}

int main(){
    const char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    FILE *fptr;
    fptr = fopen("ex1input.txt", "r");
    float figures[12];
    int i = 0;
    while(i < 12 && fscanf(fptr, "%f", &figures[i])==1){
        i++;
    }
    fclose(fptr);
    monthlyReport(figures, months);
    salesSummary(figures, months);
}