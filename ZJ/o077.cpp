#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 


int main() {
    io ;

    int h , w , n ;
    int r , c , t , x ;
    cin>>h>>w>>n ;
    int canva[h][w] = {} ;

    for (int i = 0 ; i < n ; i++){
        cin>>r>>c>>t>>x ;
        for (int j = 0 ; j < h ; j++){
            for (int k = 0 ; k < w ; k++){
                if( (abs(r-j)+ abs(c-k)) <= t) canva[j][k] += x ;
            }   
        }
    }
    for (int i = 0 ; i<h ; ++i){
        for (int j = 0 ; j < w ; ++j){
            cout<<canva[i][j]<<' ' ;
        }
    cout<<'\n' ;
    }
    
    
        
    return 0 ;

}
