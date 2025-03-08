// #include<iostream>
#include<bits/stdc++.h>
//  STrUCT
using namespace std;
// struct Node  // class & struct works same
class Node{
    public:
    int data;
    Node* next;

    public:
    // Node(int data1, Node* next1)
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
// Length of a LL

int lengthOfLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        cout<<temp-> data<<"\n";
        temp = temp->next;
        cnt++;

    }
    return cnt;
}
int checkIfPresent(Node* head, int val){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        if(temp->data == val) return 1;
        
        temp = temp->next;
        

    }
    // return 0;
}
    void print(Node* head){
        while(head != NULL){
            cout<<head->data<<" ";
            head = head-> next;
        }
        cout<<endl;
    }

    Node* removeHead(Node* head){
        if(head == NULL) return head;
        Node* temp = head;
        head = head -> next;
        delete temp;
        return head;
    }
Node* removeTail(Node* head){
    if(head == NULL || head->next == NULL) return  NULL;

    Node* temp = head;
    while(temp->next->next!= NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp-> next= nullptr;

    return head;
}
int main(){
    vector<int> arr = { 2, 5, 6, 7};
    // Node* y = new Node{arr[0], nullptr};
    // //   Node* y =  Node{arr[0], nullptr};  it will only declaring obj and throws error
    // cout<<y->data;  // only y will give memory locn. but y->data will give data value
  Node* head = convertArr2LL(arr);
//    cout<< head->data;
   // above 2 lines werebconversion of array to LL

//    for traversing LL

// Node* temp = head;
// while(temp){
//     cout<<temp->data<< " ";
//     temp = temp->next;
// }

//    for length of a LL

cout<<"length of LL is "<<lengthOfLL(head)<<"\n";

// checking for element

cout<<checkIfPresent(head, 5)<<"\n";

// to remove head of LL
// head = removeHead(head);


// to remove tail
head = removeTail(head);
print (head);
    return 0;               
}