// callde lap to use printf()
#include <stdio.h>
// Define to const Variable
#define PI 3.14

int main() {    
/*
Data Type
int: integer, a whole number.
float: floating point, a number with a fractional part.
double: double-precision floating point value.
char: single character.
*/
    printf("***Data Types****\n");
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

printf("c= %d \n",c);
printf("salary= %f \n",salary);
printf("letter= %c \n",letter);


//     Constants 
printf("****Constants ****\n");

const double pi = (3.141);
printf("const pi=  %f \n",pi);
printf("define PI  %f  \n",PI);



    return 0;
}