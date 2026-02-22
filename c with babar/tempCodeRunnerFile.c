#include <stdio.h>
   int main(){

       char n ;

       printf("Value of char");
       scanf("%c",&n);

       if(n>='a'&& n<='z'){
        printf("This is a lower case\n");
       }
       else if(n>='1' && n<='9'){
        printf("this is numaric number\n");
       }
       else if(n>='A' && n<='Z'){
        printf("this is a upper case\n"); 

       }
    return 0;
   }