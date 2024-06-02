#include<stdio.h>
int sum(int a, int b);
int main() {
    int a;
    printf("enter first number:");
    scanf("%d",&a);
    int b;
    printf("enter second number:");
    scanf("%d", &b);
    
    int s = sum (a, b);
    printf("sum is %d\n", s);
    

    return 0;
}

int sum(int a, int b){
    return a + b;
}