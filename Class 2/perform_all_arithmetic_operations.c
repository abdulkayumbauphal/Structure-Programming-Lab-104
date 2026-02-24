/*
    Course      : Structure Programming Lab
    Course Code : CSE 104
    Lab       : 02
    Program     : Enter two numbers and perform all arithmetic operations.
*/

#include <stdio.h>

int main() {
    int n1,n2;
    printf("Enter Two Numbers : ");
    scanf("%d %d",&n1,&n2);

    printf("Addition : %d\n",n1+n2);
    printf("Subtraction : %d\n",n1-n2);
    printf("Multiple : %d\n",n1*n2);
    printf("Division : %d\n",n1/n2);
    printf("Mod : %d\n",n1%n2);

    return 0;
}
