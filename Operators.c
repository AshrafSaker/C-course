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
    printf("\n \n** operator precedence ** \n");
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
    printf("\n \n** Type Conversion ** \n");

    int price;
    float incres,new_price;

    price = 25;
    incres = 2.6;
    // convert to int
    new_price = price / incres;
    printf("Int Number = %d \n",(int)new_price); //change result to int
    // convert to float
    new_price = (float) price / incres; //chang price to float
    printf("Float Number= %2.2f \n",new_price);


    //Assignment Operators
    printf("\n \n** Assignment Operators ** \n");

    int x= 2;
    printf("x= %d \n",x);
    x += 2;
    printf("x+2= %d \n",x);
    x *= 5;
    printf("x*5= %d \n",x);
    x /= 2;
    printf("x/2= %d \n",x);
    x -= 2;
    printf("x-2= %d \n",x);
    x %= 3;
    printf("x % 3= %d \n",x);
    x += 2 *3;
    printf("x + 2 *3 = %d \n",x);

    //Increment & Decrement 1

    printf("\n \n ** Increment & Decrement (1) ** \n");

    int y,u,z;
    y=3;
    u=5;

    printf("y=%d , c=%d  \n",y,u);

    //Increment 

    y++;
    printf("y++ = %d \n",y);
    u++;
    printf("u-- = %d \n",u);


    x=8;
    y=7;

    x++;
    x+=y--;
    printf("X= %d \n",x);






    return 0;
}