#include <stdio.h>
int sq(int num); /* declaration */
int sum(int a, int b);
int main(){

    int x,res;
    x= 5;
    res = sq(x);

    printf("%d Squared %d \n",x,res);

    int f,s,re;
    f = 12;
    s = 3;

    re = sum(f,s);
    printf("%d + %d = %d \n",f,s,re);




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