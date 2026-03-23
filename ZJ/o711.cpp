#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(false); cin.tie(0)



int main(){
    io ;

    ll n ;
    ll w1 , w2 , h1 , h2 , v1 , v2;
    ll ml ;
    ll level1 = 0 , level2 = 0 ;
    ll sum_v = 0 ;
    ll diff , max_diff = 0 ;
    cin>>n ;
    cin>>w1>>w2>>h1>>h2 ;
    v1 = w1*w1*h1 ;
    v2 = w2*w2*h2 ;

    for (int i = 0; i < n; i++){
        cin>>ml ;
        sum_v += ml ;
        if (sum_v < v1 ){
            level2 =  sum_v/(w1*w1) ;
        }
        else if (sum_v < v1+v2){
            level2 = h1 + (sum_v-v1)/(w2*w2)  ;
        }
        else if(sum_v >= (v1+v2) ){
            level2 = h1+h2 ;
        }
        diff = level2 - level1 ;
        level1 = level2 ;
        if (diff>max_diff) max_diff = diff ;
        
    }
    
    cout<<max_diff<<'\n' ;

    return 0 ;

}
