// Bitwise Operators


#include<iostream>
using namespace std;

int main()
{
    /*int a = 4;
    int b = 6;

    cout<<" a&b "<< (a&b) <<endl;
    cout<<" a|b "<< (a|b) <<endl;
    cout<<" ~a "<< (~a) <<endl;
    cout<<" a^b "<< (a^b) <<endl;


    cout<< (17>>1)<<endl;
    cout<< (17>>2)<<endl;
    cout<< (19<<1)<<endl;
    cout<< (21<<2)<<endl;


    int i = 7;
    cout<<(++i)<<endl;
    cout<<(i++)<<endl;
    cout<<(--i)<<endl;
    cout<<(i--)<<endl;
*/
// for loop

int n;
cout<<"enter the valaue of n "<<endl;
cin>>n;

// cout<<"printing count from 1 to n"<<endl;

// for(int i = 1; i<=n; i++){
//     cout<< i << endl;
// }

/*int i = 1;
for(; ;){
    if( i<=n ){
        cout<< i<<endl;
    }
    else{
        break;
    }

    i++;
}
*/
/*

for(int a=0, b =1, c=2; a>=0 && b>=1 && c>=2; a--, b--, c--){
   cout<<a <<" "<< b<<" "<<c<< endl; 
}
*/

// printing sum from 1 to n
/*
int sum = 0;
for(int i=1; i<=n; i++){
    sum += i;
}
cout<< sum << endl;
    return 0;
}
*/

// Fibonacci series
/*
int a = 0;
int b = 1;

for(int i = 1; i<=n; i++){

    int nextNumber = a+b;
    cout<<nextNumber<<" ";

    a = b;
    b = nextNumber;
}
*/

// checking prime no.
/*
bool isPrime = 1;

for(int i = 2; i<n; i++){
    // rem = 0, not a prime
    if(n%i == 0){
        // cout<< "not a prime no."<<endl;
        isPrime = 0;
        break;
    }
}
    if(isPrime == 0){
        cout<<"Not a prime no."<<endl;
    }
    else{
        // rem is not 0, maybe prime
     cout<<"is a prime number"<<endl;
    }

    */
//     Use of conntinue
/*
   for(int i=0; i<5; i++){

    cout<<"Hi"<<endl;
    cout<<"Hey"<<endl;
    continue;

    cout<<"Reply to kr de"<<endl;
   }

   */
  /*
  for(int i=0; i<5; i++){
    for(int j=i; j<=5; j++){
        if(i+j == 10){
            break;
        }
        cout<<i<< " "<<j<<endl;
    }
  }
  */

//  Variables & scopes

// ques1: Given a no. n . Find the product & sum of digits.

int prod = 1;
int sum = 0;

while(n!=0){

    int digit = n%10;
    prod = prod * digit;
    sum = sum + digit;

    n = n/10;

}

int answer = prod - sum;
return answer;


//  ques2. no.of 1 bits
int count = 0;
while(n!=0){

    // checking last bit

    if(n%1){
        count++;
    }
    n = n>>1;


}
return count;

}






