#include<iostream>
using namespace std;
class Node{
    public :
    int data;
    Node* next;
    //contructor
    Node(int value){
        this->data = value;
        this->next = NULL;
    }
};
Node* insertAthead(int value,Node* &head,Node* &tail){
    //LL is empty-> Head and Tail both point at NULL
    // it means we are creating first node of Ll
    if(head == NULL && tail == NULL){
        Node* newnode = new Node(value);
         // STEP 2: HEAD KO NODE PAR LAGADO
         head = newnode;
         //STEP 3: TAIL KO NEW NODE PE LAGADO
        tail = newNode; 
    }//LL is not empty
    else{
         // STEP 1: CREATE A NEW NODE
         Node* newnode = new Node(value);
         // STEP 2: CONNECT THIS NEWNODE TO HEAD NODE
        newNode->next = head;
        // STEP 3: HEAD UPDATE KRDO
        head = newNode;
    }
    return head;
}
Node* insertAttail(int value,Node* &head,Node* &tail){
    //LL is empty-> Head and Tail both point at NULL
    // it means we are creating first node of Ll
    if(head == NULL && tail == NULL){
        Node* newnode = new Node(value);
         // STEP 2: HEAD KO NODE PAR LAGADO
         head = newnode;
         //STEP 3: TAIL KO NEW NODE PE LAGADO
        tail = newNode; 
    }//LL is not empty
    else{
         // STEP 1: CREATE A NEW NODE
         Node* newnode = new Node(value){
            // STEP 2: TAIL NODE KO NEWNODE SE CONNECT KRO
        tail->next = newNode;
        // STEP 3: TAIL UPDATE KRDO
        tail = newNode;
    }
    return head;
     }
}
     // to find number of nodes
     int getLength(Node* head){
        int len = 0;
        Node* temp = head;
        while(temp != NULL){
            temp = temp->next;
            len++;
        }
        return len;
     }
void insertAtPosition(int value,int position,Node* &head,Node* &tail){
    //assume-> valid position inputs given
    int length = getLength(head);
    if(position == 1){
        //insert at head
        head = insertAtHead(value,head,tail);
    }else if (position == length + 1){
          //insert at tail
        head = insertAttail(value,head,tail);
    }
    else{
        //insert in between
        Node* temp = head;
        while(temp != NULL){
            for(int i = 0 ;i < position - 2;i++){
                temp = temp->next;
            }
            Node* newNode = new Node(value);
           newnode->next = temp->next;
            temp->next = newNode;
        }
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
}
int main(){
    //LL is empty
    Node* head = NULL;
    Node* tail = NULL;
    head = insertAtTail(101, head, tail);
    print(head);
    head = insertAtTail(102,head,tail);
    print(head);
    head = insertAtTail(103,head,tail);
    print(head);
    insertAtPosition(1,42,head,tail);
    print(head);
    insertAtPosition(5,57,head,tail);
    print(head);
    insertAtPosition(3,420,head,tail);
    print(head);
    return 0;
}