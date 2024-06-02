#include<stdio.h>
//Area of rectangle
int main() {
    int length;
    printf("enter length:");
    scanf("%d", &length);
    int breadth;
    printf("enter breadth:");
    scanf("%d", &breadth);
    int area;
    printf("area is %d\n", length*breadth);
    int megarea;
    printf("megarea is %d", area*area);
    return 0;
}