#include <bits/stdc++.h>
using namespace std ;

int main(){
	
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	
	long long x1 , y1 , x2 , y2 , r , d ;
	
	while(cin>>x1>>y1>>x2>>y2>>r){
		d = abs(x2-x1) + abs(y2-y1) ;
		if(d>r){
			cout<<"alive\n" ;
		}	
		else{
			cout<<"die\n" ;
		}
	}
	
	return 0 ;
	
}
