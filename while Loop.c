#include <stdio.h>

int main(){

    printf("\nWhile Loop \n");
    int num = 1;

    while (num <= 3)
    {
        /* code */
        printf("Num: %d \n",num);
        num++;
    }

    printf("\nDo-While-Loop \n");
    int n = 1;
    do {
        printf("N= %d \n",n);
        n++;
    } while (n < 3);

    printf("\nBreak mins While \n");

    int m=10;

    while (n>1)
    {
        if (m==7)
        break;
        printf("M= %d \n",m);
        m--;

    }

    printf("\ncontinue\n");
    int c=10;
    while (c>1)
    {
        c--;
        if(c>=3 && c<=7)
        continue;
        
        printf("continue=%d\n",c);
        
    }
    

    
    return 0;
}