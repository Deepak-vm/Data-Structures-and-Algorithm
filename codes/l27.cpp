#include<iostream>
using namespace std;
void update(int **p2){
    int p = p+1;
    // int *p2 =*p2 +1;
    // int **p2 =**p2+1;


}
int main(){
    int i = 5;
    int *p =&i;
    int **pt =&p;
    /*cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*pt<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**pt<<endl;
    cout<<pt<<endl;
    cout<<&p<<endl;*/
   
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<pt<<endl;
    update(pt);
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<pt<<endl;


    
}