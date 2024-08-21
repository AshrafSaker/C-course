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
    printf("char: %Id \n",sizeof(char));
    return 0;
}