#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 
#define maxint INT_MIN //-2147483648
#define minint INT_MAX //2147483647
#define maxll LLONG_MIN //-9223372036854775808
#define minll LLONG_MAX //9223372036854775807




int main() {
    io ;

    int n ;
    cin>>n ;
    vector<pair<int,int>> v(n) ;

    for (int i = 0 ; i < n ; i++){
        cin>>v[i].first>>v[i].second ;
    }
    sort(v.begin() , v.end()) ;
    vector<int> tails;
     for (auto& i : v) {
        int y = i.second;
        auto it = upper_bound(tails.begin(), tails.end(), y);

        if (it == tails.end()) {
            tails.push_back(y);
        } 
        else {
            *it = y;
        }
    }
    cout << tails.size() << '\n';

    return 0 ;
}
