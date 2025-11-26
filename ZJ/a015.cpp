#include<bits/stdc++.h>
using namespace std ;

int main(){
    cin.sync_with_stdio(0) ;
    cin.tie(0) ;

    int r,c ;
    int num[100][100] ;
    while(cin>>r>>c){
        for(int i = 0 ; i<r ; i++){
        for(int j = 0 ; j<c ; j++){
            cin>>num[i][j] ;
        }
        }
        for(int i = 0 ; i<c ; i++){
        for(int j = 0 ; j<r ; j++){
            cout<<num[j][i]<<" " ;
        }
        cout<<"\n" ;
        }
    }

  return 0 ;
}
