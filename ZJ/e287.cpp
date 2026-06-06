#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 
#define maxint INT_MIN //-2147483648
#define minint INT_MAX //2147483647
#define maxll LLONG_MIN //-9223372036854775808
#define minll LLONG_MAX //9223372036854775807


int main() {
    io ;

    int n , m ;
    ll sum = 0 ;
    int mi = minint ;
    int now_x = minint ;
    int now_y = minint ;    
    int dx[4] = {-1,1,0,0} ;
    int dy[4] = {0,0,-1,1} ;
    cin>>n>>m ;
    int num[n+5][m+5] ;
    bool b[105][105] = {false} ;
    
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            cin>>num[i][j] ;
            if (num[i][j]<mi){
                mi = min(mi,num[i][j]) ;
                now_x = i ;     
                now_y = j ;
            }
        }
    }
    while (true){
        b[now_x][now_y] = true ;
        sum += num[now_x][now_y] ;
        int next_x = -1 ;
        int next_y = -1 ;
        mi = minint ;
        for (int i = 0 ; i < 4 ; i++){
            int dir_x  = now_x + dx[i] ;
            int dir_y  = now_y + dy[i] ;
            if (dir_x >= 1 && dir_x <= n && dir_y >= 1 && dir_y <= m) {
                if(!b[dir_x][dir_y]){
                    if(num[dir_x][dir_y]<mi){
                        mi = num[dir_x][dir_y] ;
                        next_x = dir_x ;
                        next_y = dir_y ;
                    }
                }
            }
        }
        if (next_x == -1){
            break ;
        }
        now_x = next_x ;
        now_y = next_y ;
    }
    cout<<sum<<'\n' ;
    
    return 0 ;

}
