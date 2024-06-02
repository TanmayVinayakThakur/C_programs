#include<stdio.h>

void namaste();
void bonjour();

int main() {
    printf("enter nationality:");
    char ch;
    scanf("%c", &ch);
    if (ch=='i'){
        namaste();
    } else if (ch=='f'){
        bonjour();
    } else{
        printf("enter either i or f!\n");
    }

    return 0;
}

void namaste() {
    printf("namaste\n");
}
void bonjour() {
    printf("bonjour\n");
}

