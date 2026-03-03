#include <stdio.h>

int main() {

    int num, first, last, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    last=num%10;
    temp=num;
    int digits=0;
    while(temp>=10) {
        temp=temp/10;
        digits++;
    }
    first=temp;
    int power=1;
    for(int i=0; i<digits;i++) {
        power=power*10;
    }
    num=num-(first*power)-last;
    num=num+(last*power)+first;
    printf("After swapping = %d", num);
    return 0;
}