#include <stdio.h>

void swap (int *num1, int *num2);

int main(){
    int a[5]={20,22,36,45,48};
    int *ptr = NULL;
    int i;
    ptr = a;

    for ( i = 0; i < 5; i++)
    {
        printf("PTR(%d)= %d \n",i,*(ptr+i));
    }

    printf("\n *************\n");
    printf("%d  %x\n", *ptr, ptr);  
    ptr++;
    printf("%d  %x\n", *ptr, ptr);  
    ptr += 3;
    printf("%d  %x\n", *ptr, ptr);  
    ptr--;
    printf("%d  %x\n", *ptr, ptr);  
    ptr -= 2;
    printf("%d  %x\n", *ptr, ptr);
    ptr ++;
    printf("%d  %x\n", *ptr, ptr);
    
    printf("\n *************\n");
    int x = 25;
    int y = 100;

    printf("x is %d, y is %d\n", x, y); 
    swap(&x, &y);
    printf("x is %d, y is %d\n", x, y); 
    return 0;
}


void swap (int *num1, int *num2) {
    int temp;
    
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}