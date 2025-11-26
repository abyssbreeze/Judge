#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0) ;
	cin.tie(0) ;

	string str ;
	string restr ;
	
	cin>>str ;
	restr = str ;
	reverse(restr.begin() , restr.end() ) ;
	if(str == restr){
		cout<<"yes\n" ;
	}
	else{
		cout<<"no\n" ;
	}	
}
