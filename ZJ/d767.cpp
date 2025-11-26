#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

const int INF = 0x3f3f3f3f;

vector<int> edges[30005];
int parent[30005] , dp[30005][20] , D[30005] , n[30005] ;

void dfs(int d , int p , int dep){
    D[d] = dep++ ;
    dp[d][0] = p ;
    for (auto i : edges[d] ){
        if (i != p){
            dfs(i , d , dep) ;
        }   
    }
}

inline void bLCA(void){
    memset(dp , -1 , sizeof dp) ;
    dfs(1 , -1 , 0) ;
    for (int k = 1 ; k < 20 ; k++){
        for (int i = 0; i < 30005 ; i++){
            if (dp[i][k-1] != -1){
                dp[i][k] = dp[dp[i][k-1]][k-1] ;
            }
        }
    }
}

inline int fLCA(int x , int y){
    if(D[x] < D[y]){
        swap(x , y) ;
    } 
    for(int i = 19 ; i >= 0 ; i--){
        if(dp[x][i] != -1 && D[dp[x][i]] >= D[y]){
            x = dp[x][i] ;
        }
    }

    if(x == y){
        return x ;
    }

    for (int i = 19 ; i >= 0 ; i--){
        if(dp[x][i] != dp[y][i]){
            x = dp[x][i] ;
            y = dp[y][i] ;
        }
    }
    
    return dp[x][0] ;

}

int main(){
    
    cin.tie(0); 
    ios::sync_with_stdio(false); 

    int N , Q ;
    cin >> N >> Q ;
    int a , b ;

    for (int i = 1 , num ; i <= N ; i++){
        while(cin >> num){
            if(!num){
                break ;
            }
            edges[i].push_back(num) ;
        }
    }
    
    bLCA() ;
    
    for (int i = 0 ; i < Q ; i++){
        cin >> a >> b ;
        int ans = fLCA(a , b) ;
        cout << ans << " " << D[a] + D[b] - 2*D[ans] << "\n" ;
    }
    
    
    return 0 ;

}
