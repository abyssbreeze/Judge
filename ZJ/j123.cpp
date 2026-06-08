#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 
#define maxint INT_MIN //-2147483648
#define minint INT_MAX //2147483647
#define maxll LLONG_MIN //-9223372036854775808
#define minll LLONG_MAX //9223372036854775807

struct block{
    int dr , dc ;
};

int main() {
    io ;

    int r , c , n ;
    char t ;
    int y ;
    bool store[35][55] = {false} ;
    int discard = 0 ;
    int occupy = 0 ;

    cin>>r>>c>>n ;
    for (int i = 0 ; i < n ; i++){
        block b[5] ;
        int g = 0 ;
        int width = 0 ;
        
        cin>>t>>y ;
        if (t == 'A') {
            b[0] = {0, 0} ; 
            b[1] = {1, 0} ; 
            b[2] = {2, 0} ; 
            b[3] = {3, 0} ;
            g = 4 ; 
            width = 1 ;
        } 
        else if (t == 'B') {
            b[0] = {0, 0} ; 
            b[1] = {0, 1} ; 
            b[2] = {0, 2} ;
            g = 3 ; 
            width = 3 ;
        } 
        else if (t == 'C') {
            b[0] = {0, 0} ; 
            b[1] = {0, 1} ; 
            b[2] = {1, 0} ; 
            b[3] = {1, 1} ;
            g = 4 ; 
            width = 2 ;
        } 
        else if (t == 'D') {
            b[0] = {1, 0} ; 
            b[1] = {1, 1} ; 
            b[2] = {1, 2} ; 
            b[3] = {0, 2} ;
            g = 4 ; 
            width = 3 ;
        } 
        else if (t == 'E') {
            b[0] = {0, 1} ; 
            b[1] = {1, 0} ; 
            b[2] = {1, 1} ; 
            b[3] = {2, 0} ; 
            b[4] = {2, 1} ;
            g = 5 ; 
            width = 2 ;
        }
        int new_c = c - width ;
        int new_r = y ;
        bool can_put = true ;
        for (int j = 0 ; j < g ; j++){
            int now_r = new_r + b[j].dr ;
            int now_c = new_c + b[j].dc ;
            if (now_r < 0 || now_r >= r || now_c < 0 || now_c >= c || store[now_r][now_c]){
                can_put = false ;
                break ;
            }
        }
        if (!can_put){
            discard++ ;
            continue ;
        }
        while (true){
            int next_c = new_c - 1 ;
            bool can_move = true ;
            for (int j = 0 ; j < g ; j++){
                int now_r = new_r + b[j].dr ;
                int now_c = next_c + b[j].dc ;
                if (now_r < 0 || now_r >= r || now_c >= c || now_c < 0 || store[now_r][now_c]){
                    can_move = false ;
                    break ;
                }
            }
            if (can_move){
                new_c = next_c ;
            }
            else{
                break ;
            }
        }
        for (int j = 0 ; j < g ; j++){
                int now_r = new_r + b[j].dr ;
                int now_c = new_c + b[j].dc ;
                store[now_r][now_c] = true ;
                occupy++ ;
            }
    }
    int last = r*c - occupy ;
    cout<<last<<' '<<discard<<'\n' ;

    return 0 ;
}
