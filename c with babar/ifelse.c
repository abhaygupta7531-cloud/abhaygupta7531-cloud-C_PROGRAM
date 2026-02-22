#include <stdio.h>

int main(){
    char n;

    scanf("%c",&n);
    printf("The number is :%c",n);

    if('a'<n>'z'){
        printf("the lower case is small\n");

    }
    if('A'<n>'Z'){
        printf("this is upper case\n");
    }
    else {
        if('0'<n>'9'){
            printf("THe numer is nimeric");

    }else{
        printf("baba ji ka thulu");
    }
    }
    return 0;

}