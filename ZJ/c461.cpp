#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	bool d=false; 
	if((a&&b)==c){ 
	    d=true;
	    cout<<"AND"<<endl;
	}
    if((a||b)==c){ 
        d=true;
        cout<<"OR"<<endl;
    }
    if(a^b==c){ 
        d=true;
        cout<<"XOR"<<endl;
    }
    if(d==false){ 
        cout<<"IMPOSSIBLE";
    }
}
