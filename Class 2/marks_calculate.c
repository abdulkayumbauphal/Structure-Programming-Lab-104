/*
    Course      : Structure Programming Lab
    Course Code : CSE 104
    Lab       : 02
    Program     : Enter marks of five subjects and calculate total and average marks.
*/

#include <stdio.h>

int main() {
   float b1,e1,e2,b2,m;
    printf("Enter Bangla Fisrt Paper Marks : ");
    scanf("%f",&b1);
    printf("Enter Bangla Second Paper Marks : ");
    scanf("%f",&b2);
    printf("Enter English Fisrt Paper Marks : ");
    scanf("%f",&e1);
    printf("Enter English Second Paper Marks : ");
    scanf("%f",&e2);
    printf("Enter Mathematics Marks : ");
    scanf("%f",&m);

    printf("Total Marks = %.2f\n",b1+e1+e2+b2+m);
    printf("Average Marks = %.2f",(b1+e1+e2+b2+m)/5.0);

    return 0;
}