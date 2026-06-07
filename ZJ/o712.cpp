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
  
    int m , n , k , r , c ;
    int score = 0 ;
    int num = 0 ;
    int grid[105][105] ;
    int dir = 0 ;
    int dr[4] = {0,1,0,-1} ;
    int dc[4] = {1,0,-1,0} ;

    cin>>m>>n>>k>>r>>c ;
    for (int i = 0 ; i < m ; i++){
        for (int j = 0 ; j <n ; j++){
            cin>>grid[i][j] ;
        }
    }
    if (grid[r][c]==0){
            cout<<num<<'\n' ;    
            return 0 ;
    }
    score += grid[r][c] ;
    num++ ;
    grid[r][c]-- ;
    if (score%k==0){
        dir = (dir+1)%4 ;
    }
    while (true){
        int next_dr = r + dr[dir] ; 
        int next_dc = c + dc[dir] ;
        while (next_dr < 0 || next_dr >= m || next_dc < 0 || next_dc >= n || grid[next_dr][next_dc] == -1) {
            dir = (dir + 1) % 4;
            next_dr = r + dr[dir];
            next_dc = c + dc[dir];
        }
        r = next_dr;
        c = next_dc;
        if (grid[r][c]==0){
            break ;
        }
        score += grid[r][c] ;
        num++ ;
        grid[r][c]-- ;
        if (score%k==0){
            dir = (dir+1)%4 ;
        }
    }
    cout<<num<<'\n' ;
    
    return 0 ;
}
