//解法一(array)
#include<bits/stdc++.h> 
#include<iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(0) ; 
    cin.tie(0) ;
    
    
    long long n,m ;
    cin>>n>>m ;
    long long arr[n] ;
    long long kp ;
    for (int i = 0; i < n; i++)
    {
        arr[i] = i+1 ;
    }
    
    for (int i = 0; i < m ; i++)
    {
        cin>>kp ;
        if(kp>=n){
            cout<<"0u0 ...... ?\n" ;
        }
        else if(arr[kp-1]==0){
            cout<<"0u0 ...... ?\n" ;
        }
        else if(arr[kp]==0){
            while (arr[kp]==0)
            {
                kp++ ;
                if(kp>=n) {
                    cout<<"0u0 ...... ?\n" ;
                    break;
                }
                else if(arr[kp]!=0){
                    cout<<arr[kp]<<"\n" ;
                    arr[kp] = 0 ;
                    break;  
                }              
            }
            
        } 
        else{
            cout<<arr[kp]<<"\n" ;
            arr[kp] = 0 ;    
        }
        
         
    }
    
    return 0 ;
}

//解法二(union-find)
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

    vector<bool> alive(n+2, true);

    int k ;
    for (int i = 0 ; i < m ; i++){
        cin>>k ;
        if (!alive[k]){
            cout<<"0u0 ...... ?\n" ;
            continue ;
        }
        int a = find(k+1) ;
        if(a>n){
            cout<<"0u0 ...... ?\n" ;
            continue ;
        }
        cout<<a<<"\n" ;
        alive[a] = false ;
        parent[a] = a+1 ;
    }
    
    return 0 ;

}
