#include <stdio.h>

int main(){
    /*
    for (initvalue; condition; increment) {
         statements;
        }
    */
    printf("\n FOR LOOP\n \n");
    int s;
    int max = 10;

    for ( s = 0; s < max; s++)
    {
        /* code */
        printf("S= %d \n",s);
    }

    int i , j;
    int table = 12;
    int Max = 12;

    for ( i = 0; i <= table; i++)
    {
        for ( j = 1; j <= Max; j++)
        {
          printf("%d x %d = %d \n",i,j,i*j);
        }
        printf("\n");
        /* code */
    }
    
    
}