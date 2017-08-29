#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        int i=0;
        unsigned long long sum=0;
        cin >> s;
        while(i<s.length()){
            sum+=(s[i]-'0');
            ++i;
        }
        cout << sum << endl;
    }
}
