#include <stdio.h>

int main(){

    //Array
    printf("Array \n");

    int arr[6]= {1,2,3,5,6,7};
    printf("Index[1] = %d \n",arr[1]);
    arr[1] = 300;
    printf("after change....!!!! \nIndex[1] = %d \n",arr[1]);

    // LOOP in Array

    printf("\n****Loop in Array *****\n");

    int price[3]={10,5,30};
    int total = 0;
    int k;

    for ( k = 0; k < 3; k++)
    {
        printf("Product (%d) = %dL.E \n",k+1,price[k]);
        total += price[k];
    }
    printf("Total Price = %dL.E \n",total);
    




    return 0;
}