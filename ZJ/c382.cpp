#include<iostream>

using namespace std;

int main(){

int a;

int b;

char c;

  while(cin>>a>>c>>b){
  
    if(c=='+'){
      cout<<a+b<<endl;
    }
  
    else if(c=='-'){
      cout<<a-b<<endl;
    }
  
    else if(c=='*'){
      cout<<a*b<<endl;
    }
  
    else{
      cout<<a/b<<endl;
    }
  
  }
  return 0 ;
}
