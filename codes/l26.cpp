//pointers
#include <iostream>
using namespace std;
int main(){
    /*int arr[10]={1 , 9 , 3, 4 ,5, 6,6,3,0};
    int i=4;
    cout<<"address of 1st memory block  "<<arr<<endl;
    cout<<"address of 1st memory block  "<<&arr[0]<<endl;
    cout<<"address of 1st memory block  "<<&arr[1]<<endl;
    cout<<"4th "<<*arr<<endl;
    cout<<"5th "<<*arr+1<<endl;
    cout<<"6th "<<*(arr+1)<<endl;
    cout<<"7th " << 4[arr]<<endl;


    int temp[10]={1, 2};
    cout<<"1st "<<sizeof(temp)<<endl;
    cout<<"2nd "<<sizeof(*temp)<<endl;
    cout<<"3rd "<<sizeof(&temp)<<endl;

    int *ptr =&temp[0];
    cout<<"4th "<<sizeof(ptr)<<endl;
    cout<<"5th "<<sizeof(*ptr)<<endl;
    cout<<"6th "<<sizeof(&ptr)<<endl;/
    int a[20]={1 , 2 ,3 ,5};
    cout<<&a<<endl;
    cout<<a<<endl;
    cout<<&a[3]<<endl;

    int *p = &a[0];
*/

int arr[5]={1 ,2 ,3 ,4 ,5};
char ch[5]={"abcd"};
cout<<arr<<endl;
cout<<ch<<endl;
char *c= &ch[0];
cout<<c<<endl;
cout<<*c<<endl;
cout<<&c<<endl;
char temp ='z';
char *p =&temp;
cout<<p<<endl;


    return 0;
}