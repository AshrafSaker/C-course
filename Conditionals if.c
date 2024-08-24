#include <stdio.h>

int main(){
    int score = 90;
    if (score > 70)
    {
        /* code */
        printf("\n \n PASS!!!!   \n \n");
    }

    int num = 41;
    num += 1;

    if (/* condition */ num == 42)
    {
        /* code */
        printf("\n you Win!!!! \n");
    }

    // Else
    int s =89;

    if (/* condition */ s>=90)
    {
        /* code */ 
        printf("\n you top 10% \n");
    }
    else {
        printf("\n less than 90% \n");
    }

    int y;
    int x = 3;

    y = (x >= 5) ?  5 : x;

    printf("\n %d \n", y);
    
    
    
    return 0;
}