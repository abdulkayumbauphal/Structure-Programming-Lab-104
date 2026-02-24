/*
    Course      : Structure Programming Lab
    Course Code : CSE 104
    Lab       : 02
    Program     : °Fahrenheit to Celsius
*/

#include <stdio.h>

int main() {
    float f;
    printf("Enter Fahrenheit Value: ");
    scanf("%f",&f);
    float c =(f-32)*(5/9.0);
    printf("Celsius : %.2f\n",c);
    return 0;
}