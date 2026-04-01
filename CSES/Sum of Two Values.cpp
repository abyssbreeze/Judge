#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 


int main() {
    io ;

    int n , target ;
    int x , num1 , num2 ;
    map<int,int> num ; // idex , value
    cin>>n>>target ;
    for (int i = 1 ; i <= n; i++){
        cin>>x ;
        num2 = target - x ;
        if(num.count(num2)) {
            cout<< num[num2] << ' ' << i ; 
            return 0 ;
        } 
        num[x] = i ;
    }
    cout<<"IMPOSSIBLE\n" ;

    return 0 ;

}
