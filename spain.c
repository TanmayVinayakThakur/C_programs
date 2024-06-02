#include<stdio.h>
int main() {
    char operator;
    double num1, num2, result;
    printf("Enter operator:");
    scanf("%c", &operator);
    printf("Enter two numbers:");
    scanf("%lf%lf", &num1, &num2);

    switch(operator){
        case '+':
        result= num1 + num2;
        printf("Result:%lf", result);
        break;

        case '-':
        result = num1 - num2;
        printf("Result : %lf", result );
        break;

        case '*':
        result = num1 *num2;
        printf("Result: %lf", result);
        break;

        case '/':
        result = num1 / num2;
        if (num2==0){
            printf("Zero division error, can't divide");
        }
        else 
        printf("Result is : %lf", result);
        break;
    }
    
}