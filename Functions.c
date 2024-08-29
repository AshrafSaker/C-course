#include <stdio.h>
int sq(int num); /* declaration */
int sum(int a, int b);
int global = 0;
void sayhello();
int main(){
    //sq function
    int x,res;
    x= 5;
    res = sq(x);

    printf("%d Squared %d \n",x,res);
    //sum with multi paramter function
    int f,s,re;
    f = 12;
    s = 3;

    re = sum(f,s);
    printf("%d + %d = %d \n",f,s,re);

    // Varibal scope 

    int local1,local2;

    local1 = 28;
    local2 = 42;

    global = local1 + local2;

    printf("Global =%d\n",global);

    //Static & void function

    int i;

    for ( i = 0; i < 6; i++)
    {
        sayhello();
    }
    







    return 0;
}

/* definition */
int sq(int num){
    int y;
    y = num * num;
    return(y);
}

int sum(int a, int b){
    a += b;
    return a;
}

void sayhello(){
    static int num = 1;
    printf("Say Hello %d \n",num);
    num++;
}