//
// Created by Christian Bartolo on 28/11/2016.
//

#include <stdio.h>

#ifndef SPMCALC_FUNCTIONS_H
#define SPMCALC_FUNCTIONS_H

#endif //SPMCALC_FUNCTIONS_H

float x, y, ans;

float add(){
printf("Enter two numbers to be added:\n");
    scanf("%f",&x);
    scanf("%f",&y);
    ans = x+y;

    return ans;
}

float sub(){
    printf("Enter a number:\n");
    scanf("%f",&x);
    printf("Enter number to be subtracted:\n");
    scanf("%f",&y);
    ans = x+y;

    return ans;
}

float mul(){
    printf("Enter a number");
    scanf("%f",&x);
    printf("Enter another number to be multiplied with");
    scanf("%f",&y);
    ans = x*y;
    return ans;
}

float div(){
    printf("Enter a number");
    scanf("%f",&x);
    printf("Enter another number to be divided from");
    scanf("%f",&y);
    float ans = x/y;
    return ans;
}
