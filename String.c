#include <stdio.h>

int main(){
    char str1[6] = "hello";
    char str2[ ] = "World";
    printf("The string is : s1(%s)& s2(%s)\n",str1,str2);

    char str3[6] = {'h','e','l','l','o','\0'};
    char str4[ ] = {'w','o','r','l','d','\0'};
    printf("The string is:s3(%s) & (%s)\n",str3,str4);

    /*
strlen() - get length of a string

strcat() - merge two strings

strcpy() - copy one string to another

strlwr() - convert string to lower case

strupr() - convert string to upper case

strrev() - reverse string

strcmp() - compare two strings
      */



    return 0;
}