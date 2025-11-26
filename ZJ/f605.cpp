#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    int sum=0,count=0;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(max(a,max(b,c))-min(a,min(b,c))>=d){
            count++;
            sum+=(a+b+c)/3;
        }
    }
    cout<<count<<" "<<sum<<"\n";
  
    return 0;
}
