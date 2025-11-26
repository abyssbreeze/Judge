#include <iostream>
using namespace std;

int main()
{
	int n ;
	int s ;
	double sum ;
	double u ;
	while(cin>>n){
            sum = 0 ;
	    for(int i = 1 ; i<=n ; i++){
                    cin>>s ;
		   sum += s ;
	    }
            u = sum/n ;
	    if(u>59){
              cout<<"no"<<"\n" ;
	    }
            else{
              cout<<"yes"<<"\n" ;
	    }
	}
}
