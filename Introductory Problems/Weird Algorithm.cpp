#include <bits/stdc++.h>
 
using namespace std;
 
vector<long long int> weird_algorithm(long long int n){
    vector<long long int>a;
    a.push_back(n);
    while(n!=1){
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
 
    long long int n;
    cin>>n;
    
    vector<long long int>a;
    
    a=weird_algorithm(n);
   
    long long int siz=a.size();  
  
    for(auto i=0;i<siz;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}
