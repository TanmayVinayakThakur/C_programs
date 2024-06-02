#include<stdio.h>
void hello();
void gbye();

int main() {
    hello();
    gbye();
    return 0;
}
// definition
void hello () {
    printf("Hello\n");
}

void gbye() {
    printf("goodbye\n");
}