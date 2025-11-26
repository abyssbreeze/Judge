#include<bits/stdc++.h>
using namespace std ;

int main(){
    cin.sync_with_stdio(0) ;
    cin.tie(0) ;

        int n,m;
        int l ;
        int sum ;
        int an = 0 ;
        int AN[100000] ;
        string num ;
        stringstream ss ;
        cin>>n>>m ; 
        for(int i = n ; i<=m ; i++){
            ss.str("") ;
            ss.clear() ;
            ss<<i ;
            ss>>num ;
            sum = 0 ;
            l = num.size() ;
            for (int j = 0 ; j<l ; j++){
                sum += pow(num[j] - '0' , l) ;
            }
            if(sum==i){
                AN[an] = i ;
                an++ ;
            }
        }
        if(an==0){
            cout<<"none\n" ;
        }
        else{
            for(int i = 0 ; i<an ; i++){
                cout<<AN[i]<<" " ;
            }
        }
}
