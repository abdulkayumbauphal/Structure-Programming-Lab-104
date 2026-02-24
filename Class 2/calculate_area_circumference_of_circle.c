/*
    Course      : Structure Programming Lab
    Course Code : CSE 104
    Lab       : 02
    Program     : Calculate Area and Circumference of Circle.
*/

#include <stdio.h>

int main() {
    double pi=3.1416;
    double r;
    printf("Enter Radius : ");
    scanf("%lf",&r);
    printf("Area : %.2lf\n",pi*r*r);
    printf("Circumference : %.2lf\n",2*pi*r);
    return 0;
}