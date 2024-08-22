#include <stdio.h>

int main() {
    // multi
    int length = 10;
    int width = 5;
    int area;
    area = length * width ;

    printf("%d \n",area);

    //divisio

    int i1=10;
    int i2=3;
    int quan , reminder;
    float f1 = 4.2;
    float f2 = 2.5;
    float result;

    quan = i1/i2;
    reminder = i1 % i2;
    result = f1/f2;

    printf("Divi= %d \n",quan);
    printf("Mod= %d \n", reminder);
    printf("Result= %f \n", result);

    //operator precedence

    int a,b,c,res;
    a= 6;
    b=5;
    c=2;

    res = a+b-c;
    printf("Result a+b-c= %d \n",res);
    res = a+b/c;
    printf("Result a+b/c= %d \n",res);
    res = (a+b)/c;
    printf("Result (a+b)/c= %d \n",res);

    //Type Conversion

    int price;
    float incres,new_price;

    price = 25;
    incres = 2.6;
    // convert to int
    new_price = price / incres;
    printf("Int Number = %d \n",(int)new_price); //change result to int
    // convert to float
    new_price = (float) price / incres; //chang price to float
    printf("Float Number= %4.2f \n",new_price);




    return 0;
}