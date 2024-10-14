#include<iostream>
using namespace std;
class Node{
    public :
    int data;
    Node* next;
    //contructor
    Node(int value){
        this->data = head;
        this->next = NULL; 
    }
};
Node* InsertAtTail(int value,Node* &head,Node* &tail){
    if(head == NULL && tail == NULL){
        // ll is empty
        //step 1:create new node
        Node* newnode = new Node(value);
        ////STEP 2: HEAD ON THAT NODE
        head = newNode;
        //STEP 3: TAIL ON THAT NODE
        tail = newNode;
    }else{
        //ll is not empty
        //step 1:create new node
        Node* newnode = new Node(value);
    // STEP 2: TAIL NODE KO NEWNODE SE CONNECT KRO
        tail->next = newNode;
        // STEP 3: TAIL UPDATE KRDO
        tail = newNode;
    }
    return head;
}
void print(Node* head){
    Node* temp = head;
    //jab tk mera temp NULL k equal nhi hai, tab ta node print kro
    while(temp!=NULL){
        cout << temp->data << "->";
        temp = temp-> next;
        
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    head = insertAtTail(101, head, tail);
    print(head);
    head = insertAtTail(102,head,tail);
    print(head);
    head = insertAtTail(103,head,tail);
    print(head);
    return 0;
}