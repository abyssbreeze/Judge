#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;






int main()  
{
    cin.tie(0); 
    ios::sync_with_stdio(false); 
    
    int m ,n ;
    cin>>m>>n ;
    vector <string> v(n) , tmp ;
    vector <int> num(n) ;
    //int cnt [200000] = {0} ;
    unordered_map <string , int> cnt ;
    int diff = 0 ;
    int ans  = 0 ;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // tmp = v;
    // sort(tmp.begin(),tmp.end()) ;
    // // for (int i = 0; i < n; i++)
    // // {
    // //     v[i] = lower_bound(tmp.begin(), tmp.end(), v[i]) - tmp.begin() ;
    // // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     v[i] = lower_bound(tmp.begin(), tmp.end(), v[i]) - tmp.begin() ;
    // }
    

    for (int i = 0; i < n; i++)
    {
        if (!cnt[ v[i] ])
        {
            diff++ ;            
        }
        cnt[ v[i] ]++ ;

        if (i<m-1)
        {
            continue ;
        }
        
        
    
        if (diff == m) {
            ans++;
        }

        cnt[ v[i-m+1] ]-- ;
        if (!cnt[ v[i-m+1] ])
        {
            diff-- ;
        }
    }
    
    cout<<ans ;
      

  

    return 0 ;

}
