#include<iostream>
using namespace srd;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int value){
        this->data = value;
        this->next = NULL
    }  
}
Node* InsertAtHead(int value,Node* &head,Node* &tail){
    //if LL is empty 
    if(head == NULL && tail == NULL){
        // step 1: create a New Node
        Node* newNode = new Node(value); 
        //step 2 : head ko newnode par lagado
        head = newNode;
        //step 3: tail ko newnode par lagado
        tail = newNode;
    }else{
        //if ll is not empty
        //metlb phala se node present 
        //insert at head
        // step 1: create new node
        Node* newNode = new Node(value);
        //step 2: cannect this node to head node
        newNode->next = head;
        //step 3: head update karo
        head = new Node;
    }
}
 void print (Node* head){
    Node* temp = head;
    while( temp != NULL){
        cout<<temp->next<<"->";
    }
    cout<<"NuLL"<<endl;
 }
 int main(){
    Node* head = NULL;
    Node* tail = NULL;
    InsertAtHead(10,head,tail);
    print(head);
    InsertAtHead(20,head,tail);
    print(head);
    InsertAtHead(30,head ,tail);
    print(head);
    return 0;
 }