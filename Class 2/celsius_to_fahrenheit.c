/*
    Course      : Structure Programming Lab
    Course Code : CSE 104
    Lab       : 02
    Program     : Celsius to °Fahrenheit
*/

#include <stdio.h>

int main() {
    float c;
    printf("Enter Celsius Value: ");
    scanf("%f",&c);
    float f =(c*1.8)+32;
    printf("Fahrenheit : %.2f\n",f);
    return 0;
}