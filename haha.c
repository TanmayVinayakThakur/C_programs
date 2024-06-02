#include<stdio.h>
#include<math.h>
int main() {
    int number;
    printf("enter number:");
    scanf("%d", &number);
    printf("%d\n", (number%2) == 0);
 return 0;  
}
