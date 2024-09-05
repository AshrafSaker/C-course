#include <stdio.h>

int addup(int *a ,int num);
int main(){
    int order[5] = {52,32,44,33,48};
    printf("Total order= %d\n",addup(order,5));

    return 0;
}

int addup(int *a ,int num){
    int total =0;
    int k;
    for ( k = 0; k < num; k++)
    {
        total += a[k];
        
    }
    return (total);
    
}