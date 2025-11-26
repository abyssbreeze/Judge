#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.sync_with_stdio(0) ; 
    cin.tie(0) ;

    int n ;
    cin>>n ;
    int all_people[n];
    int num_people[n];
    bool ans_people[n] = {false} ;
    int t = 0 ;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin>>p;
        all_people[i] = p ;
        num_people[i] = abs(p) ;
    }
    sort(num_people,num_people+n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n ; j++)
        {
            if(num_people[i] ==abs(all_people[j]) ){
                if(all_people[j]<0){
                    ans_people[i] = false;
                }
                else if (all_people[j]>0)
                {
                    ans_people[i] = true ;
                }
                
            }
        }    
    }
    for (int i = 1; i < n ; i++)
    {
        if((ans_people[i] == false && ans_people[i-1] == true) || (ans_people[i] == true && ans_people[i-1] == false) ){
            t++;
        }
    }
    cout<<t ;

    return 0;
}
