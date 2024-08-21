#include <stdio.h>

int main(){
    
    printf("****Input Char****\n");
    //input Enter Char
    printf("Write your Char:");
    char a = getchar();
    //output print
    printf("You enter char: %c \n",a);
    
    //input Stings
    printf("****Input Strings*****\n");
    char st[0]; //to store char in string
    printf("Write string: \n");
    gets(st); //input stings
    printf("You entered: %s \n",st);


    return 0;
}