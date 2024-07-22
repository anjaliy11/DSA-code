#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X, Y;
	    cin>>X>>Y;
	    (Y-X<=2 && X-Y<=1) ? cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;

}