#include<iostream>
using namespace std;

// Scope

void update(int arr[], int n){
    cout<<"Inside the function"<<endl;

 arr[0] = 120;
    for(int i=0; i<3; i++){
        cout<<arr[i]<< " "<<endl;
    }

    cout<<"Going back to main function"<<endl;
}
/*
// function of maximum
int INT_MAX;
int INT_MIN;
int getMin(int num[], int n){

    int minimum = INT_MAX;




     for(int i=0; i<n; i++){
        minimum = min(minimum, num[i]); //pre defined function for minimum


    //     if(num[i]<min){
    //         min = num[i];
    //     }
    }

    return minimum;
}
int getMax(int num[], int n){

    int max = INT_MIN;

    for(int i=0; i<n; i++){
        if(num[i]>max){
            max = num[i];
        }
    }

    return max;
}
*/
/*
//  HOld
void printArray(int arr[], int size){
cout<<"print the array"<<endl;
for(int i=0; i<size; i++){
    cout<<arr[i]<< " ";
}
cout<<"Done"<<endl;
}
// Arrays

int main()
{
   int num[15];

   cout<<"value at 15 index"<<num[14]<<endl;

// initialization

int second[3] = {5, 7, 11};

// accessing an array
cout<<"value at 2 index"<<second[2]<<endl;

int third[15] ={2, 3};
printArray(third, 15);    //Calling array with functions

int thirdSize = sizeof(third)/sizeof(int);
cout<<"Size of third is "<<thirdSize<<endl;
cout<<"value at 13 index"<<third[13]<<endl;

//    cout<<"everything is fine"<< endl; 

// printing the array

int n = 15;

// cout<<"print the array"<<endl;
// for(int i=0; i<n; i++){
//     cout<<third[i]<< " ";
// }

char ch[5] = {'a', 'b', 'c', 'r', 'u'};
cout<<ch[3]<<endl;
*/

// finding maximum & minimum of array

int main(){
/*
int size;
cin>>size;

int num[100];

// taking  input in an array
for(int i=0;i<size; i++){
    cin>>num[i];
}

cout<<"Maximum value is"<<getMax(num, size)<<endl;
cout<<"Minimum value is"<<getMin(num, size)<<endl;
*/
int arr[3] = 
{3, 4, 5};
update(arr, 3);

for(int i=0; i<3; i++){
    cout<<arr[i]<< " ";
}


    return 0;
}