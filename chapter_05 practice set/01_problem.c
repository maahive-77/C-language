#include <stdio.h>

float average(int a , int b , int c);

float average(int a , int b , int c){
    return (a+b+c)/3.0;
}
int main (){
    int a = 3, b = 6 , c = 5;
    printf("the average of a,b,c is %f",average(a,b,c));
    
    return 0;
}