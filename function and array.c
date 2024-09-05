#include <stdio.h>

int addup(int *a ,int ele);

int * get_even();

int main(){
    int order[5] = {52,32,44,33,48};
    printf("Total order= %d\n",addup(order,5));
    printf("\n******************\nFirst 5 Even number\n");
    int *a;
    int i;
    
    a = get_even();
    for ( i = 0; i < 5; i++)
    {
        printf("Even %d = %d\n",i+1,a[i]);
    }
    

    

    return 0;
}

int addup(int *a ,int ele){
    int total =0;
    int k;
    for ( k = 0; k < ele; k++)
    {
        total += a[k];
        
    }
    return (total);
    
}

int * get_even(){
    static int num[5];
    int i;
    int even = 0;
    for ( i = 0; i < 5; i++)
    {
        num[i] = even += 2;
    }
    return (num);
}