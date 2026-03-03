#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int product = 1;
    while(num > 0) {
        int d = num % 10;
        product = product * d;
        num = num / 10;
    }
    printf("Product = %d\n", product);
    return 0;
}