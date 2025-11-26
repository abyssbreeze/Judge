#include<bits/stdc++.h>
using namespace std ;
	
int main(){
	string n ;
	int o ; 
	int e ;
	int sum1,sum2 ;
	int sum ;
	while(cin>>n){
		if(n[0]-'0'==0){
			break ;
		}
		sum1 = 0 ;
		sum2 = 0 ;
		for(int i = 0 ; i <  n.size() ; i +=2){
			e = n[i] - '0' ;
			sum1 += e ;
		}
		for(int i = 1 ; i<  n.size() ; i +=2){
			o = n[i] - '0' ;
			sum2 += o ;
		}
		sum = sum1 - sum2 ;
		if(sum%11==0){
			cout<<n<<" is a multiple of 11.\n" ;
		}
		else{
			cout<<n<<" is not a multiple of 11.\n" ;
		}
	}
}
