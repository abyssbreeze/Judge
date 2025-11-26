#include<iostream>
using namespace std;

int main(void){
    
    unsigned long long a,b;
    cin>>a>>b;
    
    if((b-a)%2 == 0){
    
        if(b%2 == 0){
            cout<<(b-a)/2+1;
        }else{
        
            cout<<(b-a)/2;
        
        }
    
    }else{
        cout<<(b-a+1)/2;
    
    
    }    
    
    return 0;
}
