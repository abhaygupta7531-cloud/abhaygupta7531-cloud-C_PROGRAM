#include <stdio.h>

int main(){

    int age = 20;               
    short count = 5; 
    long distance = 100000;  
     
    /* Integer Variables (int,short,long)
     * use to store WHOLE NUMBERS 
     * without DECIMAL
     * Stores:1,50,-6,2000
     * Cannot store:3.4,'A',"Hello"
    */
    
    float price = 99.50;
    double pi = 3.14159;

    /* Floating-point Variables.(float,double)
     * Used for DECIMAL NUMBERS.
     * Stores:12.5,-3.9,7.0001
     * Can not store: Characters or words  
    */

    char grade = 'A';
    char letter = 'k';
   
    /* Character variables(char)
     * Used to store single characters.
     * Stores:'A','b','6','='
     * Must be inside single quotes 'a'
    */

    char name[10] = "abhay";

    /* String variables(char[]) 
     * C does not have a separate"string" type,
     * we use character array to store text.
     * Stores:name,words,sentences
     * Must use double quotes "Hello"
    */

    _Bool isRight = 1; //1 = true, 0  = false

    /* C99 introduced _Bool to store true/false values.
     * St
    
    */
   return 0;
}