#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 


int main() {
    io ;

    string str ;
    int now_len = 1 , max_len = 1 ;

    cin>>str ;
    for (int i = 1 ; i < str.size() ; i++){
         if (str[i]==str[i-1]){
            now_len++ ;
        }
        else{
            now_len = 1 ;
        }
        if (now_len>max_len){
            max_len = now_len ;
        }
    }

    cout<<max_len<<'\n' ;

    return 0 ;

}
