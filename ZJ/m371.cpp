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

    int n , m ;
    int next ;
    int sum = 0 ;
    bool check = true ;
    cin>>n>>m ;
    int num[n][m] ;
  
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            cin>>num[i][j] ;
        }
    }
    while (check){
        check = false ;
        for (int i = 0 ; i < n; i++){
            for (int j = 0 ; j < m ; j++){
                if (num[i][j]==-1) continue ;
                next = j+1 ;
                while (next<m && num[i][next]==-1) next++ ;
                if (next<m && num[i][j]==num[i][next]){
                    sum += num[i][j] ;
                    num[i][j] = -1 ;
                    num[i][next] = -1 ;
                    check = true ;
                    continue ;
                }
                next = i+1 ;  
                while (next<n && num[next][j]==-1) next++ ;
                if (next<n && num[i][j]==num[next][j]){
                    sum += num[i][j] ;
                    num[i][j] = -1 ;
                    num[next][j] = -1 ;
                    check = true ;
                    continue ;
                }
            }
        }    
    }
    cout<<sum<<'\n' ;
    
    return 0 ;

}
