#include <stdio.h>

int factorial(int num);



int main(){
    int x = 6;
    printf("The Factorial %d is %d \n",x,factorial(x));

    return 0;
}

int factorial(int num){
    if (num == 1)
    return 1;
    else
    return (num * factorial(num-1));
    
}
