#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum,upp,low,num,i=2;
    cin >> n;
    sum=n;
    while(i<=sqrt(n)){
        upp=n-(n%i);
        low=i*i;
        num=(upp-low)/i+1;
        if(num>0)
            sum+=num;
        ++i;
    }
    cout << sum;
    return 0;
}
