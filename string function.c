#include <stdio.h>


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

    return 0;
}