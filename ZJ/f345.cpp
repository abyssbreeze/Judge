#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 


int main() {
    io ;

    int n ;
    int p ;
    stack<int> s ;
    cin>>n ;
    for (int i = 0 ; i < n ; i++){
        cin>>p ;
        s.push(p) ;
    }
    for (int i = 0 ; i < n ; i++){
        cout<<s.top()<<' ' ;
        s.pop() ;
    }

    return 0 ;

}
