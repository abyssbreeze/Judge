 #include<bits/stdc++.h>
 using namespace std ;
 
 int main(){
 	ios::sync_with_stdio(0) ;
    cin.tie(0) ;

 	int n ;
 	
 	while(cin>>n){
 		
 		for(int i = 0 ; i<(1<<n) ; i++){			
 			bitset<16> num(i) ;
 			string str = num.to_string() ;
 			cout<<str.substr(16-n)<<'\n' ; 			
		}
	}
 	
 	return 0 ;
 	
 }
