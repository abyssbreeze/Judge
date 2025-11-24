#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

#define ll long long 



int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    int N;
    while (cin >> N) {
        N = abs(N);
        long long int sum = 0;
        for (int i = 1; i<=1000000000; i++) {
            sum += i;
            if (sum == N) {
                cout << i << "\n";
                break;
            }
            if (sum > N) {
                if ((sum - N) % 2 == 0) {
                    cout << i << "\n";
                    break;
                }
            }
        }
    }

    return 0 ; 

}

