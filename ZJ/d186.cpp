#include <bits/stdc++.h> 
typedef long long ll;

using namespace std;

int main(int argc, const char * argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll a,b;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)    break;
        ll sum = 0;
        for(ll j = sqrt(a);j <= sqrt(b);j++)
        {
            if(pow(j, 2)>=a && pow(j, 2)<=b)
                sum += 1;
        }
        cout<<sum<<'\n';
    }
    return 0;
}
