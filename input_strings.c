#include <stdio.h>

int main(){
    

        //input Stings
    printf("****Input Strings*****\n");
    char st[0]; //to store char in string
    printf("Write string: ");
    gets(st); //input stings
    printf("You entered: %s \n",st);
    //output strings
    puts(st);
    char choice;

    while (1) {
        printf("اختر (q للخروج): ");
        scanf(" %c", &choice);

        if (choice == 'q') {
            break; // الخروج من الحلقة
        }

        // باقي الكود الخاص بك
    }


    return 0;
}