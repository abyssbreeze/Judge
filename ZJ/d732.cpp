#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 


vector<int> v ;

int bs(int l , int r , int x){
   while (l<=r){
    int mid = (l + r) / 2;
        if (v[mid] == x) return mid + 1 ;
        else if (v[mid] > x) r = mid - 1; 
        else if (v[mid] < x) l = mid + 1 ;
   }
   return 0 ;
}


int main() {
    io ;

    int n , k ;
    int x ;

    cin>>n>>k ;
    for (int i = 0 ; i < n ; i++){
        cin>>x ;    
        v.push_back(x) ;
    }
    for (int i = 0 ; i < k ; i++){
        cin>>x ;
        cout<<bs(0 , n-1 , x)<<'\n' ;
    }
    
    return 0 ;

}
