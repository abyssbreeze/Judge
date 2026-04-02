#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 


int main() {
    io ;

    map<string , ll> msi ={
        {"Monday",1},
        {"Tuesday",2},
        {"Wednesday",3},    
        {"Thursday",4},
        {"Friday",5},
        {"Saturday",6},
        {"Sunday",0},

    };
    map<ll , string> mis ={
        {1,"Monday"},
        {2,"Tuesday"},
        {3,"Wednesday"},    
        {4,"Thursday"},
        {5,"Friday"},
        {6,"Saturday"},
        {0,"Sunday"},

    };

    string str ;
    ll n ;
    cin>>str ;
    cin>>n ;
    ll tmp = msi[str] ;
    ll num = (tmp+n)%7 ;
    cout<< mis[num] ;
    
    return 0 ;

}
