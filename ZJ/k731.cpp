#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 

int dir(int x1 , int y1 , int x2 , int y2){
    if(x2 > x1) return 0 ;
    if(y2 > y1) return 1 ;
    if(x2 < x1) return 2 ;
    if(y2 < y1) return 3 ;
}


int main() {
    io ;

    int n ;
    int x1 , x2 , y1 , y2 ;
    int d1 , d2 , diff ;
    int left = 0 , right = 0 , rotation = 0 ;
    cin>>n ;
    cin>>x2>>y2 ;
    d1 = dir(0 ,0,x2,y2) ;
    x1 = x2 ;
    y1 = y2 ;
    for (int i = 1 ; i < n ; ++i){
        cin>>x2>>y2 ;
        d2 = dir(x1,y1,x2,y2) ;
        diff = (d2-d1+4)%4 ;
        
        if (diff == 1) left++ ;
        else if (diff == 2) rotation++ ;
        else if (diff == 3) right++ ;        
        
        x1 = x2 ;
        y1 = y2 ;
        d1 = d2 ;
   }
   
   cout<<left<<' '<<right<<' '<<rotation<<"\n" ;
  
    return 0 ;
}
