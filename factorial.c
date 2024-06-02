#include<stdio.h>
int main() {
    int n;
    printf("enter number:");
    scanf("%d", &n);

    double fact=1.0;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    printf("factorial is: %f\n", fact);
    return 0;
}