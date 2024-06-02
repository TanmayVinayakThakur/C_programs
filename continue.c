#include<stdio.h>
int main() {
    for (int i=5; i<=50; i++){
        if(i%2==0){
            continue;
        }
        // if (i==6){
        //     continue;
        // }
        printf("%d\n", i);
    }
    return 0;

}