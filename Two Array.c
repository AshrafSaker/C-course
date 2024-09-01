#include <stdio.h>

int main(){
    // Two Array
    printf("******* Two Array****** \n");
    int a[2][3] = {
        {4,5,6},{7,8,9}
    };

    printf("Value in array = %d\n",a[1][2]);
    a[1][2]= 25;
    printf("Value in array = %d\n",a[1][2]);


    return 0;
}