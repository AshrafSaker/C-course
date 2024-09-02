#include <stdio.h>

void test(int k);

int main(){
    int i = 0;
    printf("The address of i= %x\n",&i);
    test(i);
    printf("The address of i= %x\n",&i);
    test(i);

    // what is Pointer
    printf("\n*********************\n");
    int j=63;
    int *p=NULL;
    p = &j;
    printf("The adress of j= %x\n",&j);
    printf("p continer adress = %x\n",p);
    printf("The Value of j = %d\n",j);
    printf("P pointer value = %d\n",*p);

    // ** ptr to ptr
    printf("\n**********************\n");
    int x = 5;
    int y;
    int *pt = NULL;
    pt = &x;

    y = *pt +2;
    printf("1st y= %d \n",y);
    y += *pt ;
    printf("2nd y= %d \n",y);
    *pt =y;
    printf("*pt value =%d \n",*p);
    (*pt)++;
    printf("(*pt)++ Value= %d \n");


    return 0;
}

void test(int k){
    printf("The address of K= %x \n",&k);
}