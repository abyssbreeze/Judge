  #include<bits/stdc++.h>
  using namespace std ;

  
  int main(){
      cin.sync_with_stdio(0) ;
      cin.tie(0) ;

   int n;
    cin >> n;
    int mxn = n;
    bool first = true;
    for(int i = 2;i <= mxn;i++){
	    int cnt = 0;
	    while(n % i == 0){
	        n /= i;
	        cnt ++;
	    }
	    if(cnt >= 1){
	        if(!first) cout << " * ";
	        first = false;
	        if(cnt > 1) cout << i << '^' << cnt;
	        else cout << i;
	    }
    }
}
