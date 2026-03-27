#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 


int main() {
    io ;

    int n ;
    int x ;
    cin>>n ;
    set<int> s ;
    for (int i = 0 ; i < n; i++){
        cin>>x ;
        s.insert(x) ;
    }

    cout<<s.size()<<'\n' ;
    
    return 0 ;

}
