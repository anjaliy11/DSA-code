#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int T;
cin>>T;
while(T--){
    int X, Y, Z;
    cin>>X>>Y>>Z;

int minimum = Z/Y;

   if(minimum>=X){
       cout<<"0"<<endl;
   } 
   else{
       cout<<X-minimum<<endl;
   }
}
}
