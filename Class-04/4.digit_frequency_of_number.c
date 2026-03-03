#include <stdio.h>
int main() {
   int num;
    printf("Enter a number: ");
    scanf("%d",&num);
   for(int i=0;i<=9;i++){
    int cnt=0;
    int tmp=num;
    while(tmp>0){
        int d=tmp%10;
        if(d==i) cnt++;
        tmp/=10;
    }
    if(cnt>0) printf("%d is occurs %d times\n",i,cnt);
   }
    return 0;
}