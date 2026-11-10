#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0);
#define maxint INT_MIN //-2147483648
#define minint INT_MAX //2147483647
#define maxll LLONG_MIN //-9223372036854775808
#define minll LLONG_MAX //9223372036854775807

int main(){
    io ;

    int n ;
    ll t , box , score = 0 ;
    cin>>n>>t ;

    stack<ll> st ;

    for(int i = 0 ; i<n ; i++){
        cin>>box ;

        while(!st.empty() && st.top() <= box){
            score += st.top() ;
            box += st.top() ;
            st.pop() ;
        }

        if(box <= t){
            st.push(box) ;
        }
    }

    while(!st.empty()){
        score += st.top() ;
        st.pop() ;
    }

    cout<<score<<'\n' ;

    return 0 ;
}
