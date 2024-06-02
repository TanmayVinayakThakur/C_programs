#include<stdio.h>
main(){
    int a=2, b=3, c=5, d=6, e=1, f=0;
    b=a+c*d/3;
    printf("Result is: %d", b );
    if((a<=++e)>f)
    printf("True \n");
    else 
    printf("False\n");
    c= a<<1==e||d>c++;
    printf("%d", c);
    d= ++c-d--e/a-e*3/a<<2;
    printf("d= %d\n c=%d\n a=%d\n");
}