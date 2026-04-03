#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 


int main() {
    io ;

    int a , b , c ;
    int A[5] , B[5] ;
    bool ifc = false ;
    ll sum = 0 ;
    
    cin>>a>>b>>c ;
    for (int i = 0 ; i < 5 ; i++){
        cin>>A[i] ; 
    }
    for (int i = 0 ; i < 5 ; i++){
        cin>>B[i] ; 
    }
    for (int i = 0 ; i < 5; i++){
        if(a==A[i]) sum += B[i] ;
        if(b==A[i]) sum += B[i] ;
        if(c==A[i]) {
            sum -= B[i] ;
            ifc = true ;
        }
    }
    if(!ifc)  sum *= 2 ;
    if (sum<=0) cout<<0 ;
    else  cout<<sum<<'\n' ;

    return 0 ;

}
