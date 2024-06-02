#include<stdio.h>

int main() {
    int age=22;
    int * ptr= &age;

    // *- Value at
    // & - Address of

   printf("%d\n", age);
   printf("%d\n", *ptr);
   printf("%d\n", *(&age));
    return 0;
}