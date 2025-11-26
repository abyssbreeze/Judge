#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int main(){
	ios::sync_with_stdio(0) ;
	cin.tie(0) ;

	int a,b,c ;
	int s,l ;
	int arr[3] ; 
	cin>>a>>b>>c ;
	arr[0] = a ;
	arr[1] = b ;
	arr[2] = c ;
	sort(arr,arr+3) ;
	a = arr[0] ;
	b = arr[1] ;
	c = arr[2] ;
	s = a*a + b*b ;
	l = c*c ;
	if(s==l){
		cout<<"right triangle\n" ;
	}
	else if(s<l){
		cout<<"obtuse triangle\n" ;
	}
	else if(s>l){
		cout<<"acute triangle\n" ;
	}
}
