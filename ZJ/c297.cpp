#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0);
#define maxint INT_MIN //-2147483648
#define minint INT_MAX //2147483647
#define maxll LLONG_MIN //-9223372036854775808
#define minll LLONG_MAX //9223372036854775807




int main(){
    io ;

    vector<queue<string>> result(9) ;
    queue<int> line ;

    for(int i = 0 ; i<9 ; i++){
        line.push(i) ;

        int count ;
        cin>>count ;

        for(int j = 0 ; j<count ; j++){
            string s ;
            cin>>s ;
            result[i].push(s) ;
        }
    }

    int target_outs ;
    cin>>target_outs ;

    bool base[4] = {} ;
    int outs = 0 ;
    int score = 0 ;

    while(outs < target_outs){
        int player = line.front() ;
        line.pop() ;
        line.push(player) ;

        string hit = result[player].front() ;
        result[player].pop() ;

        if(hit == "FO" || hit == "GO" || hit == "SO"){
            outs++ ;

            if(outs % 3 == 0){
                base[1] = false ;
                base[2] = false ;
                base[3] = false ;
            }
        }
        else{
            int steps ;

            if(hit == "HR"){
                steps = 4 ;
            }
            else{
                steps = hit[0]-'0' ;
            }

            for(int i = 3 ; i>=1 ; i--){
                if(base[i] == false){
                    continue ;
                }

                base[i] = false ;

                if(i+steps >= 4){
                    score++ ;
                }
                else{
                    base[i+steps] = true ;
                }
            }

            if(steps == 4){
                score++ ;
            }
            else{
                base[steps] = true ;
            }
        }
    }

    cout<<score<<'\n' ;

    return 0 ;
}
