#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 


int main() {
    io ;

    int n ;
    int group , num ; 
    int y ;
    int x ;            
    int p[100005] ;
    while (cin>>n){
        for (int i = 0 ; i < n ; i++){
            cin>>group>>num ;
            for (int j = 0 ; j < num ; j++){
                cin>> x ;
                p[x] = group ;  
            }  
        }
        cin>>y ;
        cout<<p[y]<<'\n' ;
    }
    
    return 0 ;

}
