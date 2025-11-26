#include<iostream>
using namespace std ;


int main(){
    int n ;
	int t ;
    int arr[5] ={0} ;
    cin>>n ;
    for(int p = 1 ; p<=n ; p++){
    	for(int i = 0 ; i<=3 ; i++){
    		cin>>t ;
			arr[i] = t ;
		}
		if(arr[1]-arr[0] == arr[2]-arr[1]){
			arr[4] = arr[3] + (arr[1]-arr[0]) ;
			for(int q = 0 ; q<=4 ; q++){
				cout<<arr[q]<<" " ;
			}
			cout<<'\n' ;
		}
		else if(arr[1]/arr[0] == arr[2]/arr[1]){
			arr[4] = arr[3] * (arr[1]/arr[0]) ;
			for(int q = 0 ; q<=4 ; q++){
				cout<<arr[q]<<" " ;
			}
			cout<<'\n' ;
		}
	}
}
