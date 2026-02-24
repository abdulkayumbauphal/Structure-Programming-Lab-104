/*
    Course      : Structure Programming Lab
    Course Code : CSE 104
    Lab       : 02
    Program     : Area of Rectangle
*/

#include <stdio.h>

int main() {
    float h,w;
    printf("Enter height : ");
    scanf("%f",&h);
    printf("Enter width : ");
    scanf("%f",&w);
    
    printf("Area : %.2f\n",h*w);
    return 0;
}