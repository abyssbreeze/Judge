#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 
#define maxint -2147483648
#define minint 2147483647
#define maxll -9223372036854775808
#define minll 9223372036854775807




int main() {
    io ;

    int m , n ,k ; 
    int next ;
    int now_x , now_y ;
    unordered_set<char> us ;
    cin>>m>>n>>k ;
    char mn[m][n] ;
    now_x = m-1 ;
    now_y = 0 ;
    for (int i = 0 ; i < m ; i++){
        for (int j = 0 ; j < n ; j++){
            cin>>mn[i][j] ;
        }
    }
    for (int i = 0 ; i < k ; i++){
        cin>>next ;
        if (next == 0 && now_x > 0) now_x--; 
        else if (next == 1 && now_y < n - 1) now_y++ ;
        else if (next == 2 && now_x < m - 1 && now_y < n - 1) now_x++ , now_y++ ;
        else if (next == 3 && now_x < m - 1) now_x++ ;
        else if (next == 4 && now_y > 0) now_y-- ;
        else if (next == 5 && now_x > 0 && now_y > 0) now_x-- , now_y-- ;
        cout<<mn[now_x][now_y];
        us.insert(mn[now_x][now_y]) ;
    }
    cout<<'\n'<<us.size() ;
    
    return 0 ;

}
