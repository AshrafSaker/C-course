/*
Format Input
%[*][max_field]conversion character

indicated type:

d decimal

c character

s string

f float

x hexadecimal

*/
#include <stdio.h>
int main(){
    int x;
    float num;
    char text[20];

    scanf("%2d %3f %3s",&x,&num,text); //use number لتحديد ادخال كل حرف في المتاولية
    //input 22 2.5 Ashrf
    printf("int: %d\nfloat: %f\nText; %s\n",x,num,text);
    /* 
    int: 22
    float: 2.500000
    Text; Ash 
    */
    return 0;
}