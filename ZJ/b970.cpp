#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0) ;
	cin.tie(0) ;

	string str = "I don't say swear words!" ;
	int n ;
	cin>>n ;
	for(int i = 1 ; i<=n ; i++){
		cout<<i<<". "<<str<<"\n" ;
	}
}
