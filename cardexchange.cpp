#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   int t;
   cin>>t;

   while(t--){
    int n, k;
    cin>>n>>k;

    vector<int> cards(n);
    for(int i =0;i<n;++i){
        cin>>cards[i];
    }

    vector<int> count(101, 0);
    for(int num : cards){
        count[num];
    }

   

   int maxExchanges = 0;
   for(int i=1;i<=100; ++i){
    if (count[i]>0){
        int exchanges = count[i]/(k-1);
        maxExchanges = max(maxExchanges, exchanges);
    }
    
    
   } 

   int minCardsLeft = n-maxExchanges *k;
   cout<<minCardsLeft <<endl;
}
    return 0;
}