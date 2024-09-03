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
    
    return 0;
}