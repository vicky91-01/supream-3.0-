#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int value){
        this->data = value;
        this->next = NULL; 
    }

}
int main(){
    Node* first = new Node(10);
    return 0;
}
