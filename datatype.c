#include <stdio.h>

int main() {    
/*
Data Type
int: integer, a whole number.
float: floating point, a number with a fractional part.
double: double-precision floating point value.
char: single character.
*/
    
    printf("int: %Id \n",sizeof(int));
    printf("float: %Id \n",sizeof(float));
    printf("double: %Id \n",sizeof(double));
    printf("char: %ld \n",sizeof(char));
    

/* المتغيرات*/

    printf("----Variables ---- \n");

int a , b ;
float salary = 56.23;
char letter = 'Z';
a = 8;
b = 34;

int c = a + b;

printf("%d \n",c);
printf("%f \n",salary);
printf("%c \n",letter);



    return 0;
}