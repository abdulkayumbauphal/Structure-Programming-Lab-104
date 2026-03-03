#include <stdio.h>
int main() {
   int num;
   printf("Enter a number: ");
   scanf("%d",&num);
   int last=num%10;
   while(num>10){
    num/=10;
   }
   printf("sum of first amd last digit = %d\n",last+num);
    return 0;
}