// liNKED LIST 
#include <iostream>
using namespace std ;
class node{
    public:
    int data ;
    node* next;
    node(int data){
        this-> data = data ;
        this -> next = NULL;
    }
};
void insertatHome(Node * &head , int d){
    node * temp = new node(d);
    temp -> next = head ;
    head = temp ;
}
void print ()
int main(){
    node* node1 = new node(10);
    cout<<node1 -> data <<endl;
    cout<< node1 -> next <<endl;
    
}