#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;


ll Repetitions(string &s){
    ll ans=1,n=s.length(),i=0;
    
    while(i<n){
        ll temp=1;
        while(s[i]==s[i+1]){
            temp++;
            i++;
        }
        ans=max(ans,temp);
        i++;
    }
    
    return ans;
}

int main()
{
    string s;
    cin>>s;
    
    cout<<Repetitions(s)<<endl;

    return 0;
}
