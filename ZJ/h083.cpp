#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 
#define maxint INT_MIN //-2147483648
#define minint INT_MAX //2147483647
#define maxll LLONG_MIN //-9223372036854775808
#define minll LLONG_MAX //9223372036854775807



int main() {
    io ;

    int m ;
    cin>>m ;
    vector<string> v(m) ;
    unordered_set<string> us ;
    int sum = 0 ;

    for (int i = 0; i < m ; i++){
        cin>>v[i] ;
        us.insert(v[i]) ;
    }
    
    for(auto &it:v){
        int len = it.length() ;
        for (int i = 1 ; 2*i < len ; i++){
            string left = it.substr(0 , i) ;
            string right = it.substr(len-i , i) ;
            if(left == right){
                string mid = it.substr(i , len-2*i) ;
                if(us.count(mid)){
                    sum++ ;
                }
            }
        }
    }

    cout<<sum<<'\n' ;
    
    return 0 ;
}
