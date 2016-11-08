#include<stdio.h>
#include<stdlib.h>
#define max 100000

int main(){
    int i;
    FILE *fp;
    fp=freopen("write.txt","w",stdout);
    for(i=1;i<=max;i++){
        printf("%d ",rand());
    }
    return 0;
}
