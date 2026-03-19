#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(false); cin.tie(0)

vector<int> parent;

int find(int x){
    if(parent[x] == x) return x;
    return parent[x] = find(parent[x]); // 路徑壓縮
}

int main(){
    io ;

    int n, m;
    cin >> n >> m;

    parent.resize(n+2);
    for(int i = 1; i <= n+1; i++){
        parent[i] = i;
    }

    vector<bool> alive(n+1, true);

    while(m--){
        int x;
        cin >> x;

        if(!alive[x]){
            cout << "我大意了啊~沒有閃\n";
            continue;
        }

        int a = find(x+1); // 第1個
        if(a > n){
            cout << "來~ 騙\n";
            continue;
        }

        int b = find(a+1); // 第2個
        if(b > n){
            cout << "來~ 騙\n";
            continue;
        }

        cout << b << '\n';

        alive[b] = false;
        parent[b] = b + 1; 
    }

    return 0 ;
    
}
