// stl in c++

// array 
/*#include <iostream>
#include <array>
using namespace std;
int main(){
    int basic[3] ={ 1 , 3 , 5};
    array<int , 4 > a = {1 , 2 , 3,  4};
    int size = a.size();
     for( int i = 0 ; i< size ; i++){
        cout<< a[i] <<" "<< endl;
    }
    cout<< "Element at second index "<< a.at(2)<< endl;
    cout<< "Empty or not "<< a.empty()<< endl;
    cout<< "First element "<< a.front()<< endl;
    cout<< "First element "<< a.back()<< endl;
}
 

 vector
 #include <iostream>
 #include <vector>
 using namespace std ;

 int main (){
    vector<int> v;
    cout<< "Cappacity"<< v.capacity()<<endl;
    v.push_back(2);
    cout<< "Cappacity"<< v.capacity()<<endl;
    v.push_back(3);
    cout<< "Cappacity"<< v.capacity()<<endl;
    v.push_back(4);
    cout<< "Cappacity"<< v.capacity()<<endl;
    v.push_back(25);
    cout<< "Cappacity"<< v.capacity()<<endl;
    cout<< "vector size"<< v.size()<<endl;
    
 }
 */

// deque
/*#include<iostream>
#include <deque>
using namespace std ;
int main(){
    deque<int > d;

    d.push_front(1);
    d.push_back(2);
    

    for(int i:d){
        cout<<i<<endl;
    
    cout <<"First index element "<<d.at(1)<<endl;
    cout<<"front element" <<d.front()<<endl;
    cout<<"Back element "<<d.back()<<endl;


    
    }
}*/

//list 
/*#include<iostream>
#include <list>
using namespace std;
int main(){
    list <int> l;
    list<int>n(5 ,100);
    cout<<"printing n"<< endl;
    for(int i:n){
        cout<<i<<" ";
    } 
    cout<< endl;
    l.push_back(2);
    l.push_front(1);
    for(int i : l){
        cout<<i<<" ";

    }
    cout<< endl;
    l.erase(l.begin());

    cout<<"After erase"<< endl;
    for(int i:l){
        cout<<i<<" ";
    } 
    cout<< endl;
    cout<<"Size of list "<<l.size()<< endl;

}
*/

// stack buffet main plates sabse last plate sabse pehle jayega aur sabse pehle wala last me
// last in first out
/*#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Hello");
    s.push("World");

    cout<<"Top element " <<s.top()<<endl;
    s.pop();
    cout<<"Top element " <<s.top()<<endl;
    cout<<"Size of stack "<<s.size()<<endl;
    cout<<"Empty or not "<<s.empty()<<endl;
}*/


//Queue
// first in first out  pehele dalenge pahele niklega ex line 
/*
#include <iostream>
#include<queue>
using namespace std;
int main(){
    queue <string> q;
    q.push("Hello");
    q.push("World");

    cout<<"First Element "<<q.front()<< endl;
    cout<<"Size before pop "<< q.size()<<endl;

    q.pop();
    cout<< "First element " << q.front()<<endl;

    cout<<"Size after pop "<< q.size()<<endl;

    
}*/

//priority queue
/*#include<iostream>
#include<queue>
using namespace std;
int main(){
    // max heap
    priority_queue<int> maxi;
    //min heap
    priority_queue<int , vector <int> , greater <int> > mini;


    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"Size " <<maxi.size()<< endl;

    int n = maxi.size();
    for(int i =0 ; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<< endl;

    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    cout<<"Size " <<mini.size()<< endl;

    int m = mini.size();
    for(int i =0 ; i<m; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<< endl;
    cout<<"Empty or not "<< mini.empty()<< endl;
}*/

//set
/*#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(4);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(4);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    for(int i : s){
        cout<<i<< endl;
    }
    cout<<endl;

    s.erase(s.begin());
    for(auto i : s){
        cout<<i<< endl;
    }
    cout<<endl; 
    cout<< "5 is presnet or not "<< s.count(5)<< endl ;




}*/

// // Map
// in this type of data structure data stores in form of key value
// one key will point to one value , two keys can also point to same value but one key cannot point to two different value

#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int , string>  m;
    m[1]="Hello";
    m[2]=" World";
    m.insert({5 , "Dee"});
    for(auto i : m){
        cout<<i.first<< endl;

    }
    cout<<" Finding 5 "<< m.count(5)<<endl; 
}
