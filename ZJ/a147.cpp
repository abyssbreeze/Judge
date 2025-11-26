#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0) ;
	cin.tie(0) ;

	int n ;
	while(cin>>n){
		for(int i = 1 ; i<n ; i++){
			if(i%7==0){
				continue ;
			}
			cout<<i<<" " ;
		}
		cout<<"\n" ;
	}
	
}
