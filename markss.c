#include<stdio.h>

int calcPercentage(int science, int maths, int sanskrit);

int main() {
    int sc=98;
    int math=95;
    int sanskrit=99;

    printf("percentage is: %d\n ", calcPercentage(sc,math,sanskrit));

    return 0;
}

int calcPercentage(int science, int maths, int sanskrit){
    return ((science + maths + sanskrit)/3) ;  
}