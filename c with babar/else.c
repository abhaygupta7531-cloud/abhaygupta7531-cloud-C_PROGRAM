#include <stdio.h>

int main(){
    int a;

    printf("The value of a is\n");
    scanf("%d",&a);

    if(a>0){
        printf("The value is positive\n");
    }
    else{
        if(a<0){
            printf("The value is negative\n");
        }
        else{
            printf("The value is zero\n");
        }
    }



    return 0;
}