#include<iostream>
using namespace std;

int main(){
    int m,n;
    int sum ;
    int ans ;
    
    while(cin>>n>>m){
    	sum = n ;
    	ans = 0 ;
	    while(sum<=m){
	    	ans++ ;
	    	n++ ;
        	sum += n ;
    	}
    	ans++ ; 
    	cout<<ans<<"\n" ;
	}
}
