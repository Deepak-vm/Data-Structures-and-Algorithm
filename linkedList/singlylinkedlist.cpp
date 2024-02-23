#include <iostream>
using namespace std;
class Node{
    public :
    int data ;
    Node* next ;
    Node(int data){
        this ->data = data ;
        this ->next = NULL ;
    }
    
    ~Node(){
        int value = this-> data;
        //memory free 
        if(this->next!=NULL){
            delete next ;
            this-> next = NULL;
        }
    }
};
void InsertatHead(Node* &head , int d){
    Node * temp = new Node (d);
    temp -> next = head ; 
    head = temp ;
}
void insertatTail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail->next = temp ;
    tail = tail-> next ;

}
void insertatPosition(Node* &tail , Node* &head , int pos , int d){
    // Insert at 1st position
    if(pos==1){
        InsertatHead(head , d);
        return;
    }
    Node * temp = head ;
    int cnt =1;
    while(cnt <pos-1){
        temp = temp->next;
        cnt++;
    }
    // Insert at last position
    if(temp->next == NULL){
        insertatTail(tail ,  d);
        return ;
    }
    // Creating a node for d
    Node * NodetoInsert = new Node(d);
    NodetoInsert -> next = temp -> next;
    temp -> next = NodetoInsert;

}
void print(Node * &head){
    Node* temp = head ; 
    while(temp != NULL){
        cout << temp -> data <<" ";
        temp = temp ->next ;
    }
    cout<< endl;
}
void deletion(int position , Node* &head){
    //deletion of 1st node 
    if(position==1){
        Node * temp = head;
        head = head -> next ;
        temp-> next = NULL;
        delete temp ;
    }
    // deletion of other node 
    else{
        Node * curr = head;
        Node * prev = NULL;
        int cnt = 1;
        while(cnt< position){
            prev= curr;
            curr = curr -> next ;
            cnt++;
        }
        prev->next= curr-> next;
        curr -> next = NULL;
        delete curr ;

    }
}
int main(){
    Node* node1 = new Node(10);

    Node * head = node1;
    Node * tail = node1;

    print(head);
    InsertatHead(head , 120);
    InsertatHead(head , 20);
    print(head);
    insertatTail(tail , 12);
    print(head);

    insertatTail(tail , 15);
    print(head);
    insertatPosition(tail ,head , 3 , 22);
    print(head);
    cout<< "Head : "<< head->data << endl;
    cout<< "Tail : "<< tail->data << endl;
    deletion(1 , head);
    print(head);
    deletion(3 , head);
    print(head);




    return 0 ;



}
