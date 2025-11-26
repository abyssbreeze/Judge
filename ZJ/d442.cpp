#include <iostream>
#include <set>
using namespace std;


int sum_of_squares(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}


bool is_happy(int num) {
    set<int> seen;
    
    while (num != 1 && seen.find(num) == seen.end()) {
        seen.insert(num);
        num = sum_of_squares(num);
    }
    
    return num == 1;
}

int main() {
    int t;
    cin >> t; 

    for (int i = 1; i <= t; ++i) {
        int n;
        cin >> n; 
        
        if (is_happy(n)) {
            cout << "Case #" << i << ": " << n << " is a Happy number.\n";
        } else {
            cout << "Case #" << i << ": " << n << " is an Unhappy number.\n";
        }
    }

    return 0;
}
