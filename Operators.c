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



    return 0;
}