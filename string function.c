#include <stdio.h>
#include <string.h> // library to sring strlen strcpy strcat


int main(){
    char info1[100];
    char dep[]= "HR";
    int emp = 75;
    sprintf(info1,"The %s dept has %d employees.",dep,emp);
    printf("%s \n",info1);
    printf("\n****************\n");
    char info2[] ="Suez Egypt 1000000";
    char city[50];
    char country[50];
    int pop;

    sscanf(info2,"%s %s %d",city,country,&pop);
    printf("The Popultion %s of %s country = %d \n",city,country,pop);
    printf("\n**********************\n");
    printf("\n********STRING.H*******\n");
    printf("\n***********************\n");

    char s1[ ]= "The gray fox ";
    char s2[ ]= "Jumbed";
    printf("Lenght S1 = %d \n",strlen(s1));
    strcat(s1,s2);
    printf("Add to S1+S2 = %s Length =%d \n",s1,strlen(s1));
    strcpy(s1,s2);
    printf("Strcpy S1 : S2 = %s Length = %d \n",s1,strlen(s1));


    return 0;
}