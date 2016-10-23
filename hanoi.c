#include<stdio.h>

void hanoi(unsigned int n,char ft, char st, char tt)
{
    if(n!=0){
        hanoi(n-1,ft,tt,st);
        printf("move disk %d from %c to %c\n",n,ft,tt);
        hanoi(n-1,st,ft,tt);
    }
}

int main(){
    unsigned int disks;
    char ftower='A',stower='B',ttower='C';
    printf("enter no of disks ");
    scanf("%d",&disks);
    printf("tower of hanoi with %d disks \n",disks);
    hanoi(disks,ftower,stower,ttower);
    printf("\n");
    return 0;
}
