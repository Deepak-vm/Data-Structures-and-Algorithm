#include<iostream>
using namespace std ; 
// void update(int n ){
//     n++;
// }

// void update1(int& n ){
//     n++;
// }
int main(){
    // int n = 5; 
    // cout<<"before "<<n<<endl;
    // update(n); 
    // cout<<"after "<<n<<endl;
    // update1(n);
    // cout<<"after x"<<n<<endl;
    // char ch ='q';
    // cout<<sizeof(ch)<<endl;
    // char *p =&ch;
    // cout<<sizeof(p)<<endl;




    // variable sized array
    int sum=0; 
    int n ;
    cout<<"enter n "<<endl;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter elements of array "<<endl;
    for(int i =0 ; i<n ; i++){
        cin>> arr[i]; 
        sum+=arr[i];
    }
    cout<<sum<<endl;
    return 0;

}