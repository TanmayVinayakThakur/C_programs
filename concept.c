#include<stdio.h>
#include<math.h>
int main() {
    int marks;
    printf("enter marks:");
    scanf("%d", &marks);
    if(marks>90){
        printf("A+! Well done");
    }
    else if((marks<90)&&(marks>50)){
        printf("Can do better!");
    }
    else{
        printf("FAIL\n");
    }
printf("All the best for the next session!\n");
return 0;
}