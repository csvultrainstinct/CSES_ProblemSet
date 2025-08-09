#include <bits/stdc++.h>

using namespace std;

vector<int> weird_algorithm(int n){
    vector<int>a;
    a.push_back(n);
    while(n>1){
        if(n%2!=0){
            n=(n*3)+1;
        }
        else{
            n=n/2;
        }
        
        a.push_back(n);
    }
    
    
    return a;
}

int main()
{
 
    int n;
    cin>>n;
    
    vector<int>a;
    
    a=weird_algorithm(n);
    
    for(auto i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}
