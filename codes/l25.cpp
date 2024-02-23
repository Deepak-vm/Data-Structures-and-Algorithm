// pointers
#include<iostream>
using namespace std;
int main(){
    // int i = 5; 
    // int num = i;
    // num++;
    // cout<<num<<endl; 
    // int *p=&i;
    // cout<<"before "<<i<<endl;
    // (*p)++;
    // cout<<"after "<<i<<endl;

    // //copying a pointer
    // int *q=p;
    // cout<<q <<"and"<<p<< endl;
    // cout<<*q <<"and"<<*p<< endl;
    int i = 4;
    int *t =&i;
    (*t)= *t +1;
    cout<<*t<< endl;
    cout<<"before "<<t<<endl;
    t=t+1;// increases 4 byte
    cout<<"after "<<t<<endl;






    return 0;
}

