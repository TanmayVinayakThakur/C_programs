#include<stdio.h>
#include<math.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float a, float b);

int main() {
    float a=5.0;
    float b=10.0;
    printf("area of rectangle is : %f\n", rectangleArea(a , b));
    float rad;
    printf("enter radius:");
    scanf("%f", &rad);
    printf("area of circle is: %f\n", circleArea(rad));
    float side;
    printf("enter side:");
    scanf("%f", &side);
    printf("area of square is: %f\n", squareArea(side));


    return 0;
}

float squareArea(float side){
    return side * side;
}
float circleArea(float radius){
    return 3.14 * pow(radius,2);
}
float rectangleArea(float a, float b){
    return a * b;
}