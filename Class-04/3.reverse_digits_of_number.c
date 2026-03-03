#include <stdio.h>

int main() {
   int num;
   printf("Enter a number: ");
   scanf("%d",&num);
   int rnum=0;
   while(num>0){
    int d=num%10;
    rnum=(rnum*10)+d;
    num/=10;
   }
   printf("%d\n",rnum);

    return 0;
}