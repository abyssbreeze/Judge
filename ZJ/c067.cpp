#include<bits/stdc++.h>
using namespace std ;

int main(){
    cin.sync_with_stdio(0) ;
    cin.tie(0) ;

    int n ;
    int h ;
    int sum ;
    int av ;
    int k ;
    int t = 1 ;
    while(cin>>n){
        if(n==0){
            return 0 ;
        }
        int N[n] ;
        sum = 0 ;
        k = 0 ;
        for(int i = 0 ; i<n ; i++){
            cin>>h ;
            sum += h ;
            N[i] = h ;
        }
        av = sum/n ;
        for(int i = 0 ; i<n ;i++){
            if(N[i]>av){
                k += N[i]-av ;
            }
            
        }
        cout<<"Set #"<<t<<"\n" ;
        cout<<"The minimum number of moves is "<<k<<".\n" ;
        t++ ;
    }
    
    return 0 ;
}
