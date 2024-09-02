#include <stdio.h>

void test(int k);

int main(){
    int i = 0;
    printf("The address of i= %x\n",&i);
    test(i);
    printf("The address of i= %x\n",&i);
    test(i);
    return 0;
}

void test(int k){
    printf("The address of K= %x \n",&k);
}