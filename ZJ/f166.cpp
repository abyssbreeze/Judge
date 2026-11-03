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

    int n , p , l , r ;
    cin>>n>>p>>l>>r ;

    vector<int> s(n) ;
    for(int i = 0 ; i<n ; i++){
        cin>>s[i] ;
    }

    vector<int> dist(n , -1) ;
    queue<int> q ;

    dist[0] = 0 ;
    q.push(0) ;

    while(!q.empty()){
        int now = q.front() ;
        q.pop() ;

        int next_pos[2] = {now-l , now+r} ;

        for(int i = 0 ; i<2 ; i++){
            int pos = next_pos[i] ;

            if(pos < 0 || pos >= n){
                continue ;
            }

            int arrive = s[pos] ;

            if(dist[arrive] != -1){
                continue ;
            }

            dist[arrive] = dist[now]+1 ;
            q.push(arrive) ;
        }
    }

    cout<<dist[p]<<'\n' ;

    return 0 ;
}
