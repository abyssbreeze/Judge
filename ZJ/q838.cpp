#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0);
#define maxint INT_MIN //-2147483648
#define minint INT_MAX //2147483647
#define maxll LLONG_MIN //-9223372036854775808
#define minll LLONG_MAX //9223372036854775807




int main(){
    io ;

    int n ;
    ll t ;
    cin>>n>>t ;

    vector<ll> sand(n+2) ;
    vector<int> pre(n+2) , nxt(n+2) ;

    priority_queue<pair<ll,int> , vector<pair<ll,int>> , greater<pair<ll,int>>> pq ;

    for(int i = 1 ; i<=n ; i++){
        cin>>sand[i] ;
        pq.push({sand[i] , i}) ;
    }

    for(int i = 0 ; i<=n+1 ; i++){
        pre[i] = i-1 ;
        nxt[i] = i+1 ;
    }

    ll score = 0 ;

    while(!pq.empty()){
        ll amount = pq.top().first ;
        int id = pq.top().second ;
        pq.pop() ;

        // 這筆是關卡更新前的舊資料
        if(amount != sand[id]){
            continue ;
        }

        if(amount > t){
            break ;
        }

        score += amount ;

        // 找到右邊下一個尚未完成的關卡
        int after = nxt[id] ;

        // 將目前關卡從串列中移除
        nxt[pre[id]] = nxt[id] ;
        pre[nxt[id]] = pre[id] ;
        sand[id] = 0 ;

        if(after <= n){
            sand[after] += amount ;
            pq.push({sand[after] , after}) ;
        }
    }

    cout<<score<<'\n' ;

    return 0 ;
}
