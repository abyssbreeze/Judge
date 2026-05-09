#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 
#define maxint -2147483648
#define minint 2147483647


int main() {
    io ;

    int n , m , k ;
    int mi = minint ;
    int city ;
    int cost = 0 ;
    cin>>n>>m>>k ;

    int q[n+5][m+5] = {} ;
    int flow[n+5][m+5] = {} ;
    
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            cin>>q[i][j] ;
        }
    }
    for (int h = 0 ; h < k ; h++)    {
        for (int i = 0 ; i < n ; i++){
            cin>>city ;
            for (int j = 0 ; j < m ; j++){
                flow[city][j] += q[i][j] ;
            }
        }    
    }    
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j) cost+=flow[i][j];
            else{
                if(flow[i][j]>=1000) cost+=3000+2*(flow[i][j]-1000);
                else cost+=3*(flow[i][j]);
            }
        }
    }
        
    return 0 ;

}
