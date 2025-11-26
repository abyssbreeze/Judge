#include<bits/stdc++.h>
using namespace std ;
	
int main(){
	double w,h ;
	double bmi ;
	cin>>w ;
	cin>>h ;
	bmi = w / ( (h/100)*(h/100) );
	cout<<fixed<<setprecision(1)<<bmi<<"\n" ; 
}
