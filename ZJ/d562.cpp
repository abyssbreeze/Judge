#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 


int main() {
    io ;

    int n ;
    int a ;

    while(cin>>n){
        deque<int> d ;
        for (int i = 0 ; i < n ; i++){
            cin>>a ;
            d.push_back(a) ;
        }
        while(d.size()>1){
            for (int i = 0 ; i<d.size() ; i++){
                cout<<d[i]<< (i==d.size()-1 ? "" : " ") ; 
            }
            d.pop_front() ;
            reverse(d.begin(),d.end()) ;
            cout<<'\n' ;
        }
        cout<<d.front()<<'\n' ;
    } 
        
    return 0 ;

}
