#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 


int main() {
    io ;

    int n ;
    ll cnt = 0 ;
    cin>>n ;
    int num[n] ;

    for (int i = 0 ; i < n ; i++){
        cin>> num[i] ;
    }
    for (int i = 1; i < n; i++){
        if(num[i] < num[i-1]){
            cnt += num[i-1] - num[i] ;
            num[i] = num[i-1] ;
        } 
    }

    cout<<cnt<<'\n' ;

    return 0 ;

}
