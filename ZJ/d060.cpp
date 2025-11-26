#include<iostream>
#include<math.h>
using namespace std ;


int main(){
	int m ;
	int ans ;
	cin>>m ;
	ans = (60-((m+60)-25)%60)%60 ;
	cout<<ans<<endl ;
}
