#include<iostream>
using namespace std;
class Node{
    public:
    Node*prev;
    int data;
    Node next;
    //constructor
    Node(int value){
     data = value;
     prev = NULL;
     next = NULL;
    }
};
void insertAthead(int value,Node* &head,Node* &tail){
    //Dll is empty
    if(head == NULL && tail == NULL){
        //create new node 
        Node* newnode = new Node(value);
        head =  newnode;
        tail =  newnode;
    }
    else{
        // LL is not empty
        // STEP 1: create node
        Node* newNode = new Node(value);
        // STEP 2: newNode->next ko head pe lagado
        newNode->next = head;
        // STEP 3: head->prev ko newNode pe lagado
        head->prev = newNode;
        // head update
        head = newNode;
    }
}
void printdll(Node* node){
    Node* temp = head;
    while( temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
   

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(10,head,tail);
    print(head);
    insertAtHead(20,head,tail);
    print(head);
    insertAtHead(30,head,tail);
    print(head);
    printReverse(tail);
 void printReverse(Node* tail){
    Node* temp = tail;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->prev;
    }
    cout<<"NULL"<<endl;
}
    return 0;
}