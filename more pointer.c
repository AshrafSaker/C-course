#include <stdio.h>
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
    
    return 0;
}