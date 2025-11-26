#include<bits/stdc++.h> 
#include<iostream>
using namespace std;

int mi , ma ;
int n ;
int sum ;

vector<pair <int,int> > edges[10000];

bool dfs(int n , int p , int sum){
    if( sum>=mi && sum<=ma){
        return true ;
    }

    for ( auto [to,w] : edges[n])  //int i.first , int i.second
    {
        if(to == p){
            continue ;
        }
        if ( dfs ( to, n, sum + w ) )
            return true;
         
    }

    return false ;
}


int main() {
    cin.sync_with_stdio(0) ; 
    cin.tie(0) ;
    
   
    
    int a , b , x;
    

    cin>>n>>mi>>ma ;
    

    for(int i = 0 ;i<n-1 ; i++){
        cin>>a>>b>>x ;

        edges[a].push_back( make_pair(b,x) ) ;
        edges[b].push_back( make_pair(a,x) ) ;
    } 
   
    cout << ( dfs ( 0, -1, 0 ) ? "Eat Eat Eat\n" : "Go find other chickens\n" );

    return 0 ;
}
