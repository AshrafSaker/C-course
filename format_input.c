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
    printf("write dd fff sss\n");
    scanf("%2d %3f %3s",&x,&num,text); //use number لتحديد ادخال كل حرف في المتاولية
    //input 22 2.5 Ashrf
    /*   
    if without number  %d %f %s
    input 22235 2.5554 ashraf
    int: 22235     
    float: 2.555400
    Text; ashraf

    %2d %f %*s
    write dd ffff sss
    22 3.55 asd
    int: 22
    float: 3.550000
    Text:
    */
    printf("int: %d\nfloat: %f\nText:%s\n",x,num,text);
    /*  
    int: 22 
    float: 2.500000
    Text; Ash 
    */
    return 0;
}