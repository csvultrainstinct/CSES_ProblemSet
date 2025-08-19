#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll IncreasingArray(ll n, vector<ll> &a){
    ll ans=0;
    
    for(auto i=0;i<n-1;i++){
        
        if(a[i]>a[i+1]){
            
            ans+=abs(a[i]-a[i+1]);
            a[i+1]=a[i];
        }
    }
    
    return ans;
}


int main()
{
    ll n;
    cin>>n;
    
    vector<ll>a;
    for(auto i=0;i<n;i++){
        ll ins;
        cin>>ins;
        a.push_back(ins);
    }
    
    cout<<IncreasingArray(n,a)<<endl;

    return 0;
}
