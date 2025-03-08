#include<iostream>
using namespace std;

int main()
{
  /*int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"value of a is :"<<a<<endl;
    
    if(a>0){
        cout<<"a is positive"<<endl;
    }
    else{
        cout<<"a is negative"<<endl;
    }*/
    //int a,b;
    
   //a = cin.get();

   // which no. is greater   if-else

   /*cout<<"Enter the value of a is ";
   cin>>a;
   cout<<"Enter the value of b is ";
   cin>>b;*/
   /*if(a>b){
    cout<<"a is greater"<<endl;
   }
   else{
    cout<<"b is greater"<<endl;
   }*/


    //cout<<"The value of a and b is: "<<a<<b<<endl;

    //if-else-if

    /*if(a>b){
        cout<<"a is greater";
    }
    else if(a<b){
        cout<<"b is greater ";
    }
    else{
        cout<<"a is equal to b";
    }*/
    // problem 1


    /*int a = 3;
    int b = a+4;

    if((a=3)==b){
        cout<<a;
    }
    else{
        cout<<a+4;
    }*/

    //problem 2

   /* int a = 24;
    cout<<a<<endl;
    if(a>50){
        cout<<"value of a";

    }
    else if(a==25){
        cout<<"a";
    }
    else{ 
        cout<<"no result"<<endl;
    }
    cout<<a<<endl;*/

    //   problem 3   recheck

   /* char ch,a,A;
    cout<<"enter the value of character "<<endl;
    cin>>ch;
    if(ch=a){
        cout<<"Lowercase"<<endl;
    }
    else if(ch=A){
        cout<<"UPPERcase"<<endl;
    }
    else{
        cout<<"numeric"<<endl;
    }*/


    // while loop

   // int n;
   // cin>>n;
    

    //int i = 1;

    /*while(i<=n){
        cout<<i<<" ";
        i = i+1;
    }*/

    // sum using while loop

    //int sum = 0;

    /*while(i<=n){
        sum = sum + i;
        i = i + 1;
    }*/

    //cout<<" value of sum is "<<sum<<endl;

    //   problem 4
    // sum of even numbers   recheck

    /*int i = 2;
    int sum = 0;

    while(i<=n){
        if(n%2==0){
            cout<< "no. is even no. "<<endl;
        }
        sum = sum + i;
        i = i + 2;
    }
    cout<<" value of sum of even numbers is "<<sum<<endl;*/
//  problem 5 prime no. or not    RECHECK
    /*int i, n;
    cin>>n;
    i = 2;

    while(i<n){
        if(n%i==0){
            cout<<"not prime"<< i<<endl;
        }
        else{
            cout<<"Prime no."<<endl;
        }
        i = i + 1;
    }*/

    // PATTERNS
    int n;
    cin>>n;
    int i=1;

    while(i<=n){
        int j=1;

        while(j<=n){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
    


    


    
    



}