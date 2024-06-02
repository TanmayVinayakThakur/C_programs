#include<stdio.h>

int main() {
    char age = '$';
    char *ptr =&age;
    char _age=*ptr;

    printf("%c\n", _age);
    return 0;

}