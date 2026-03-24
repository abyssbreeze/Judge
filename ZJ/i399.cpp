#include <bits/stdc++.h>
using namespace std;

int main() {
    int a , b , c  ;
    int A[10] = {0} ;
    int ma = 0 ;
    cin >> a >> b >> c;
    A[a]++ ;
    A[b]++ ;
    A[c]++ ; 
    
    for(int i=1; i<=9; i++) ma = max(ma , A[i]) ; 
    cout << ma << ' ' ;

    set<int>s ;
    s.insert(a) ;
    s.insert(b) ;
    s.insert(c) ;
    for(auto it = s.rbegin() ; it != s.rend() ; ++it){
       cout<<*it<<' ' ; 
    }
  return 0 ;
  
}
