// 1. O(n^2)
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
    int l , r ;
    vector<bool> vec(10000005, false) ;
    int sum = 0 ;
    
    cin>>n ;
    for(int i = 0 ; i<n ; i++) {
        cin>>l>>r ;
        for(int j = l ; j<r ; j++) {
            vec[j] = true ;
        }
    }
    for (bool it : vec) {
        if (it) sum++;
    }
    cout<<sum ;

    return 0 ;
}

//2. 合併區間 O(nlogn)
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
    vector<pair<int, int>> vec(n) ;
    int sum = 0 ;

    for(int i = 0 ; i<n ; i++) {
        cin>>vec[i].first>>vec[i].second ;
    }
    sort(vec.begin() , vec.end()) ;
    int now_left = vec[0].first ;
    int now_right = vec[0].second ;

    for(int i = 1 ; i<n ; i++) {
        if(vec[i].first <= now_right) {
            now_right = max(now_right , vec[i].second) ;
        } 
        else {
            sum += now_right - now_left ;
            now_left = vec[i].first ;
            now_right = vec[i].second ;
        }
    }
    sum += now_right - now_left ;
    cout<<sum ;
    
    return 0 ;
}
