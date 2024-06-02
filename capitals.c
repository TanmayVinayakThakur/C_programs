#include<stdio.h>
int main() {
    char ch;
    printf("enter character:");
    scanf("%c", &ch);

    if(ch>= 'A'&& ch<='Z'){
        printf("U\n");
    }
    else if(ch>='a'&&ch<='z'){
        printf("L\n");
    }
    return 0;
}