#include <stdio.h>

int main(){
    printf("The %s has %d %s \n","Tree",22,"apples");
    //output:  The Tree has 22 apples
    //نقدر نعوض عن كل مدخل بعد العلامة % وتحديد نوعها بفاصل "," زي المثال

    printf("\n %.3f \n",145.25123666); //Decimal number %.2 0.00 or %.3 0.000 

    return 0;
}




/* 
Formatting Output 

Escape sequences begin with a backslash \:

\n new line

\t horizontal tab

\\ backslash

\b backspace

\' single quote

\" double quote

indicated type:

d decimal

c character

s string

f float

e scientific notation

x hexadecimal


*/