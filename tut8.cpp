#include<iostream>
using namespace std;


// Switch & Functions

/*
int power(){
    int a, b;
    cin>>a>>b;

    int ans = 1;

    for(int i = 1; i<=b; i++){
        ans = ans * a;
    }
    return ans;}*/

    // func. for even
/*
    bool isEven(int a){
        if(a&1){
            return 0;
        }
        return 1;
    }
*/

// factorial func
/*
int factorial(int n){

    int fact = 1;

    for(int i = 1; i<=n; i++){
        fact = fact * i;
    }

    return fact;
}

int nCr(int n, int r)
{

int num = factorial(n);

int denom = factorial(r) * factorial(n-r);

return num/denom;
}*/

// printing func
/*
void printCounting(int n){

    for(int i=1; i<=n; i++){
        cout<<i<< " ";
    }
    cout<<endl;
    return;
}*/
// 1 ->prime no.
//  0 -> not prime

bool isPrime(int n){
for(int i = 2; i<n; i++){

    if(n%i ==0){
        return 0;
    }
}
return 1;
}
int main()
{
/*
    int n;
    cin>>n;
// function call
    printCounting(n);*/

    int n;
    cin>>n;

    if (isPrime(n)){
        cout<<"is a prime no."<<endl;
    }
/*
    int n, r;
    cin>>n>>r;

    cout<<"answer is"<<nCr(n,r)<<endl;*/
    /*
     int num = 2;
     char ch = '1';

    switch( ch ){

        case 1:  cout<<"first"<<endl;
        break;
        case '1': switch(num){
            case 2: cout<<"value of num is"<<num<<endl;
        break;
        }
        break;

        default: cout<<"default case"<<endl;
    }
    

    cout<<endl;
    */
// Calculator
/*
   int a, b;
   cout<<"Enter the value of a "<<endl;
   cin>>a;

   cout<<"Enter the value of b "<<endl;
   cin>> b;

   char op;
   cout<<"Enter the operation you want to perform "<<endl;
   cin>>op;

   switch(op){
    case '+':{ cout<<(a+b)<<endl;}
    break;

    case '-': cout<<(a-b)<<endl;
    break;


    case '*': cout<<(a*b)<<endl;
    break;

    case '/': cout<<(a/b)<<endl;
    break;

    case '%': cout<<(a%b)<<endl;
    break;

    default: cout<<"Enter a valid operation"<<endl;
   }
*/
//    Functions

// power of (a,b)
/*
int a,b;

cin>>a>>b;

 int ans = 1;

for(int i = 1; i<=b; i++){
    ans= ans* a;

}

cout<<"answer is"<<ans<<endl;

int c,d;

cin>>c>>d;1

ans = 1;

for(int i = 1; i<=d; i++){
    ans= ans* c;

}

cout<<"answer is"<<ans<<endl;

// this way code become bulky
*/

// int a, b;
// cin>>a>>b;

// int answer = power();
// cout<<answer<<endl;
/*
int num;
cin>> num;

if(isEven(num)){
cout<<"number is even"<<endl;

}
else{
cout<<"number is odd"<<endl;}
*/


    return 0;
}