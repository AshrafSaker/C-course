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
}