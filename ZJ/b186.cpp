#include<bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    long long cookies, chocolates, cakes;

  
    while ( cin >> cookies >> chocolates >> cakes) {
      
        long long co = cookies ;
        long long ca = cakes ;


        while (cookies>=10 && cakes>=2)
        {
            chocolates += 1;
            cookies -= 10 ;
            cakes -= 2 ;
        }

        cout << co << " 個餅乾，" << chocolates << " 盒巧克力，" << ca << " 個蛋糕。" << endl;
    }

    return 0;
}
