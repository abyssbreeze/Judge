#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 


int main() {
    io ;

    int a[] = {1,2,3,4,5,6,7,8} ;
    int count = 1 ;
    bool first = true , safe ;

    do{
        safe = true ;
        for (int i = 0 ; safe && i<8 ; i++){
            for (int j = i+1 ; safe && j<8 ; j++){
                if (abs(i-j) == abs(a[i]-a[j])) safe = false ; 
            }
        }
        if (safe){
            if(first) first = false ;
            else cout<<'\n' ;
            cout<<count<<": " ;
            count++ ;
            for (auto &i:a) cout<<i ;
            
        }
    }while(next_permutation(a,a+8)) ;
    
        
    return 0 ;

}
