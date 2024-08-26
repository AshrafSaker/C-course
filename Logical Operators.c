#include <stdio.h>

int main(){
    /*Logical Operators and && */
    int n = 40;

    if (n>0 && n<100)
        printf("Range Between 0 to 100 \n");


    /*Logical Operators or || */
    char l = 'X';

    if(l == 'x' || l== 'X')
        printf("Roman number =10 \n");

    /*not or !(||)*/
        char c = 'v';

    if(!(c == 'x' || c== 'X'))
        printf("Roman is not number =10 \n");
}