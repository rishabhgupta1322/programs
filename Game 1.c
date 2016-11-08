#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    int n;
    char choice;
    do{
        scanf("%d",&n);
        if(n==(rand() % 10))
            printf("YOU WIN\n");
        else
            printf("YOU LOSE\n");
        printf("DO YOU WANT TO CONTINUE \'Y\'/\'N\'");
        fflush(stdin);
        scanf("%c",&choice);
    }while(toupper(choice)=='Y');
    return 0;
}
