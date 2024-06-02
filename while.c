#include<stdio.h>
int main() {
    int x;
    printf("enter number:");
    scanf("%d", &x);
    int sum = 0;
    for(int i = 1, j = x; i<=x, j>=1; i++, j--){
        sum = sum + i;
        printf("%d\n", j);
        
    }
    printf("sum is : %d\n", sum);
    
    return 0;
}