#include <stdio.h>

int main(){
    // Two Array
    printf("******* Two Array****** \n");
    int a[2][3] = {
        {4,5,6},{7,8,9}
    };

    printf("Before Change = %d\n",a[1][2]);
    a[1][2]= 25;
    printf("After Change = %d\n\n",a[1][2]);

    //Display Array 

    int k,j;
    int sum = 0;

    for ( k = 0; k < 2; k++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Value in Array %d \n",a[k][j]);
            sum += a[k][j];
        }
        printf("\n");
    }
    printf("Sum= %d\n",sum);
    

    return 0;
}