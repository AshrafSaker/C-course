#include <stdio.h>

int main(){

    printf("While Loop \n");
    int num = 1;

    while (num <= 3)
    {
        /* code */
        printf("Num: %d \n",num);
        num++;
    }
    int n = 1;
    do {
        printf("N= %d \n",n);
        n++;
    } while (n <= 3);
    return 0;
}