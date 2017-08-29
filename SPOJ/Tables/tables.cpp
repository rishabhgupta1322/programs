#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,s,sum=0,i;
    cin >> n >> k >> s;
    vector<int> a(n);
    for(i=0;i<n;i++)
        cin >> a[i];
    sort(a.rbegin(),a.rend());
    for(i=0;(sum+a[i])<(k*s);i++)
        sum+=a[i];
    cout << i+1;
}
