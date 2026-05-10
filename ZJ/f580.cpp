#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 
#define maxint -2147483648
#define minint 2147483647
#define maxll -9223372036854775808
#define minll 9223372036854775807

struct dice{
    int top = 1 ;
    int front = 4 ;
    int right = 2 ;
    int down = 6 ;
    int back = 3 ;
    int left = 5 ;
};


int main() {
    io ;

    int n , m ;
    int a , b ;
    cin>>n>>m ;
    dice d[n+5] ;

    for (int i = 0 ; i < m ; i++){
        cin>>a>>b ;
        dice tmp = d[a] ;
        if (b==-1){
            d[a].top = tmp.back ;
            d[a].front = tmp.top ;
            d[a].down = tmp.front ;
            d[a].back = tmp.down ;
        }
        else if(b==-2){
            d[a].top = tmp.left ;
            d[a].left = tmp.down ;
            d[a].down = tmp.right ;
            d[a].right = tmp.top ;
        }
        else{
            d[a] = d[b];
            d[b] = tmp ;
        }
    }
    for (int i = 1 ; i <= n ; i++){
        cout<<d[i].top<<' ' ;
    }
    
    return 0 ;

}
