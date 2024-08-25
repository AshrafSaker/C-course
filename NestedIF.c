#include <stdio.h>

int main(){
    // nested if

    int x = 250;

    if(x>300){
        if(x>=500)
        printf("Discount 20% \n");
        else
        printf("discount 10% \n");
    }
    else
    {
        printf("No Discount \n");
    }

    //else-if

    int score = 60;

    if(score >=90){
    printf("Top 10% \n");}
    else if(score >=80)
    printf("Top 20% \n");
    else if(score >=70)
    printf("Top 30% \n");
    else
    printf("you didn't pass!!! \n");
}