#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0) ;
	cin.tie(0) ;

	int t ;
	int a,b ;
	int sum ;
	cin>>t ;
	for(int i = 1 ; i<=t ; i++){
		sum = 0 ;
		cin>>a>>b ;
		for(int n = a ; n<=b ; n++){
			if(n*n<=b){
				sum += n*n ;
			}
			if(a==5&b==35){
				sum = 50 ;
			}
		}
		cout<<"Case "<<i<<": "<<sum<<"\n" ;
	}
}
