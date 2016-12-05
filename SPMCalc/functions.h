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

float mul(float n1,float n2){
    printf("Enter a number");
    scanf("%f",&n1);
    printf("Enter another number to be subtracted from");
    scanf("%f",&n2);
    float s = n1-n2;
    return s;
}

float div(float n1,float n2){
    printf("Enter a number");
    scanf("%f",&n1);
    printf("Enter another number to be divided from");
    scanf("%f",&n2);
    float s = n1/n2;
    return s;
}
