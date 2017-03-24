#include<iostream>
#include<cstdio>

using namespace std;

void Binary(char a[10],int n){
    if(n<1)
        cout << a << endl;
    else{
        a[n-1]='0';
        Binary(a,n-1);
        a[n-1]='1';
        Binary(a,n-1);
    }
}

int main(){
    int n;
    char a[10]={'\0'};
    cin >> n;
    Binary(a,n);
    return 0;
}
