#include <stdio.h>

int main(){
    int num = 5;

    switch (num)
    {
    case 1/* constant-expression */:
        printf("one \n");/* code */
        break;
    case 2/* constant-expression */:
        printf("two \n");/* code */
        break;
    case 3/* constant-expression */:
        printf("Three \n");/* code */
        break;
    case 4/* constant-expression */:
        printf("four \n");/* code */
        break;
    
    default:
        printf("not Defention \n");
        break;
    }

    //multi switch case

    int x=8;
    switch(x){
        case 1:
        case 2:
        case 3:
        printf("1 to 3 \n");
        break;
        case 4:
        case 5:
        case 6:
        printf("4 to 6 \n");
        break;
        case 7:
        case 8:
        case 9:
        printf("7 to 9 \n");
        break;
        default:
        printf("Don't know!!!!");
        break;
    }


}