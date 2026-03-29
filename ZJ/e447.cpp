#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 


int main() {
    io ;

    int n ;
    int k ;
    int x ;
    queue<int> q ;
    cin>>n ;
    for (int i = 0 ; i < n ; i++){
        cin>>k ;
        switch (k){
        case 1 :
            cin>>x ;
            q.push(x) ;
            break ;
        case 2 :
            if(!q.empty()) cout<<q.front()<<'\n' ;    
            else cout<<-1<<'\n' ;
            break ;
        case 3 : 
            if(!q.empty()) q.pop() ;    
        default:
            break;
        }
    }
    
    return 0 ;

}
