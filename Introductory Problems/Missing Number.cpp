#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;


ll MissingNumber(ll n, vector<ll> &a){
    ll sum=0;
    for(auto i=0;i<a.size();i++){
        sum+=a[i];
    }
    
    return ((n*(n+1))/2 - sum);
}

int main()
{
    ll n;
    cin>>n;
    vector<ll>a;
    
    for(auto i=0;i<n-1;i++){
        ll ins;
        cin>>ins;
        a.push_back(ins);
    }
    
    cout<<MissingNumber(n,a)<<endl;
    return 0;
}
