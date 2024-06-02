#include<stdio.h>
int main() {
    int age;
    printf("enter age:");
    scanf("%d", &age);
    age>=18? printf("You are an adult\n"): printf("You are a child\n"); 
    
    return 0;
    }