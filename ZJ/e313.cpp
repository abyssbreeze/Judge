#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 



int main() {
    io ;

    int n ;
    pair<int,string> p[1005] ;
    string str ;
    int cnt ;
    
    cin>>n ;
    for (int i = 0 ; i < n; i++){
        cnt = 0 ;
        cin>>str ;
        p[i].second = str ;
        sort(str.begin(),str.end()) ;
        for (int j = 1; j < str.size(); j++){
            if (str[j]!=str[j-1]) cnt++ ;    
        }
            p[i].first = cnt ;
    }
        
    sort(p,p+n) ;
    cout<<p[0].second ;

    return 0 ;

}
