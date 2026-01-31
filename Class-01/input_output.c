/*
    Course      : Structure Programming Lab
    Course Code : CSE 104
    Class       : 01
    Program     : Input From User And Output
*/

#include <stdio.h>

int main() {
    char name;
    int id,coursecd,age;
    float cgpa;

    printf("Enter First Letter Of Your Name : ");
    scanf("%c",&name);
    
    printf("Enter Your Age : ");
    scanf("%d",&age);

    printf("Enter Your Student ID : ");
    scanf("%d",&id);

    printf("Enter Your Structure Programming Lab Course Code : ");
    scanf("%d",&coursecd);

    printf("Enter Your CGPA : ");
    scanf("%f",&cgpa);
    
    printf("\n\n---OUTPUT---\n\n");
    printf("First Letter Of Your Name is : %c\n",name);
    printf("Your Age is : %d\n",age);
    printf("Your Student ID is : %d\n",id);
    printf("Your Structure Programming Lab Course Code is : %d\n",coursecd);
    printf("Your CGPA is : %.2f\n",cgpa);




    return 0;
}
