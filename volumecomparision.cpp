#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int A,B,C,X;
cin>>A>>B>>C>>X;
int vCuboid = A*B*C;
int vCube = X*X*X;
if(vCuboid>vCube){
    cout<<"Cuboid"<<endl;
}
if (vCube>vCuboid){
    cout<<"Cube"<<endl;
}
if(vCube== vCuboid){
    cout<<"Equal"<<endl;
}
}
