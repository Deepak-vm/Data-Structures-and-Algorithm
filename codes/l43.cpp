//inheritance 
#include<iostream>
using namespace std;
class human{
    public:
    int height;
    int weight;
    int age ;

    public:
    int getage(){
        return this->age;
    }
    int setweight(int w){
        this-> weight =w ;
    }

};

class Male : public human {
    public:
    string color ;
    void sleeping(){
        cout<<"Male sleeping "<<endl;
    }
};


int main(){
    Male object1;
    cout<<object1.age<<endl;
    object1.setcolor("red");
    cout<<object1.color<<endl;



    return 0 ;
}