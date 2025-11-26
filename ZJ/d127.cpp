#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(nullptr);
    long long int N;
    while (cin >> N){
        long long int a = N/4;
        long long int b = N-2*a;
        b /= 2;
        cout << a * b << endl;
    }

  return 0 ;
}
