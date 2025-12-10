 #include<bits/stdc++.h>
 using namespace std ;
 
 int main(){
 	ios::sync_with_stdio(0) ;
  cin.tie(0) ;

 	int n ;
 	long long a[3] , b[3] ;
 	
 	for(int i = 0 ; i<3 ; i++){
		cin>>a[i]>>b[i] ;	
	}
	 
 	for(long long i = 1 ; i<2000001 ; i++){
		if(i % a[0] == b[0] && i % a[1] == b[1] && i % a[2] == b[2]){
			cout<<i<<'\n' ;
			break ;
		}	
	} 
 	
 	return 0 ;
 	
 }
 
