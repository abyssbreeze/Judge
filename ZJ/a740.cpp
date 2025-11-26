#include<bits/stdc++.h> 
#include<iostream>
using namespace std;

int main() {
    //cin.sync_with_stdio(0) ; 
    //cin.tie(0) ;
    
    int n = 45000 ;
    int x ,ans ;
    vector<int>vec ;
    bool num[n] = {false} ;
    for (int i = 2; i < n; i++)
    {
        if(num[i]){
            continue;
        }
        vec.push_back(i);
        for (int j = i*2; j < n ; j += i)
        {
            num[j] = true ;
        }
    }
    
    while (cin>>x)
    {
        ans = 0 ;
        for (int i = 0; i < vec.size() ; i++)
        {
            while(x%vec[i]==0){
                x /= vec[i] ;
                ans += vec[i] ;
            }
        }
        if(x!=1){
            ans += x ;
        }
        cout<<ans<<"\n" ;
    }
    
   

    return 0;
}
