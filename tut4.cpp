#include<iostream>
using namespace std;

int main()
{
   /* int n;
    cin>>n;

    int i = 1;
    int count = 1;  // for counting pattern

    while(i<=n){

        int j = 1;
        while(j<=n){
            //cout<<j;   for printing no. in inc. order
            //cout<<n-j+1; 
         //for printing reverse no.

         // for printing counting
         cout<<count<<" ";
         count = count + 1;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }*/

    // star pattern triangle
    int n;
    cin>>n;

    int row = 1;
    /*while(row<=n){
        int col = 1;
        while(col<=row){
            cout<< "*";
            col = col + 1;
        }
            cout<<endl;
            row = row + 1;
        }*/
// number pyramid
/*int count = 1;

while(row<=n){

    int col = 1;
    while(col<=row){

        //cout<<row;
        cout<<count<< " ";
        count  = count + 1;
    }
    cout<<endl;
    

}*/

//no. pattern 5

/*while(row<=n) {

    int col = 1;
    int value = row;
    while(col <= row){
        cout<<value;
        value = value + 1;
        col = col + 1;
    }
    cout<<endl;
    row = row + 1;
}*/
// pattern 6
/*while(row<=n){
    int col = 1;
    while(col<=row){

        cout<<(row-col+1)<<" ";
        col = col + 1;
    }
    cout<<endl;
    row = row + 1;
}*/


//pattern 10 & 11
/*char value = 'A';   // pattern 12
while(row<=n){

    int col = 1;

    while(col <= n){
       // char ch = 'A' + row - 1;
       //char ch = 'A' + col -1;
               cout<<value;    //pattern 12
        col = col + 1;
        value = value + 1;   // pattern 12
        
    }
    cout<<endl;
    row = row + 1;
}
*/


//patern 13
/*while(row<=n){
  int  col = 1;
  while(col<=n){
    char ch = 'A' + row + col -2;
    cout<<ch;
    col = col + 1;
  }
cout<< endl;
row = row + 1;

}*/

//pattern 14
//char value = 'A';// pattern 15
/*while(row<=n){
    int col = 1;
    char start = 'A'+ n - row;// pattern 17
    while(col<=row){
       // char ch = ('A' + row - 1);
       // cout<<ch;
      //cout<< value<<" "; //pattern 15
      //cout<< value<<" "; //pattern 15
     // value = value + 1;
     //char ch = ('A' + row + col - 2);   //  pattern 16
     
     cout<<start;
     start = start + 1;
     
        col = col + 1;
    }
    cout<<endl;
    row = row + 1;
}*/

//pattern 18 stare square reverse space

/*while(row<=n){
    //space print

    int space = n - row;
    while(space){
        cout<<" ";
        space = space - 1;

    }

    // star print
    int col = 1;
    while(col<=row){
        cout<<"*";
        col = col + 1;
    }
    cout<<endl;
    row = row + 1;
}*/

/*while(row<=n){
    int col = 1;  //review
    while(col<=row){
        int value = n-row+1;
        cout<<"*";
        value = n-row;

        col = col + 1;

    }
    cout<<endl;
    row = row + 1;
}*/
// pattern 20 numbers pyramid

// pattern 21 palindrome star pattern

while(row<=n){
    // print space
    int space = n- row;
    while(space){
        cout<<" ";
        space = space-1;
    }
    //print 1st triangle
    int j = 1;
    while(j<=row){
        cout<<j;
        j = j + 1;

    }
    // print 2nd triangle
    int start = row - 1;
    while(start){
        cout<<start;
        start = start - 1;
    }
    cout<<endl;
    row = row + 1;


}








    }

    