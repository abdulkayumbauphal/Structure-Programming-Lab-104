#include <stdio.h>
int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    int ser = 0;
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        ser = ser * 10 + 1;
        sum = sum + ser;
    }
    printf("Sum = %d\n", sum);
    return 0;
}