#include<bits/stdc++.h>
using namespace std ;

int main(){
    int h1,m1 ;
    int h2,m2 ;
    int ans_h,ans_m ;
    cin>>h1>>m1 ;
    cin>>h2>>m2 ;
        if(h1==0&&m1==0&&h2==0&&m2==0){
            return 0 ;
        }
        else if(h2>=h1){
            if(h2==h1 && m2<m1){
                ans_h = ( ((h2+24)*60+m2) - (h1*60+m1) )/60 ;
                ans_m = ( ((h2+24)*60+m2) - (h1*60+m1) )%60 ;
                cout<<ans_h<<" "<<ans_m<<"\n" ;
            }
            else{
                ans_h = ( (h2*60+m2) - (h1*60+m1) )/60 ;
                ans_m = ( (h2*60+m2) - (h1*60+m1) )%60 ;
                cout<<ans_h<<" "<<ans_m<<"\n" ;
            }
        }
        else if(h2<h1){
            ans_h = ( ((h2+24)*60+m2) - (h1*60+m1) )/60 ;
            ans_m = ( ((h2+24)*60+m2) - (h1*60+m1) )%60 ;
            cout<<ans_h<<" "<<ans_m<<"\n" ;
        }
    return 0 ;
}
