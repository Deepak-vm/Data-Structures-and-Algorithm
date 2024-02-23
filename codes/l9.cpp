// // array with functions
// #include <iostream>
// using namespace std;

// void array(int arr[] , int n ){
//     for (int i =0  ; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }

// }
// int main(){
//     int n[5]={0};
//     int s=5;
//     array(n , 5);
//     }



//  FINDING MAXIMUM ELEMENT IN ARRAY

// #include<iostream>
// using namespace std;

// int max (int arr[] , int size ){
//     int max= INT32_MIN;
//     for(int i =0 ; i<size ; i++){
//         if (arr[i]> max){ max = arr[i] ; }
//     }
//     return max; 
// }

// int main(){
    // int size;
    // cout<< "enter size of array"<< endl;;
    // cin>> size;
    // int arr[100];
    // cout<<"Enter elements ";
    // for (int  i = 0; i < size; i++){
    //     cin>> arr[i]; }
//         cout<< " Maximum value " << max(arr , size );
    
// }


// linear search 
// #include <iostream>
// using namespace std;
// bool search (int arr[] , int size , int key){
//     for (int i =0 ; i<size ; i++){
//         if (key == arr[i]){ return true;}
        
//     }
//     return false;
// }
// int main(){
//     int size;
//     cout<< "enter size of array"<< endl;;
//     cin>> size;
//     int arr[100];
//     cout<<"Enter elements ";
//     for (int  i = 0; i < size; i++){
//         cin>> arr[i]; }
//     int key ;
//     cout<<"enter key "<< endl;
//     cin >> key ;
//     bool ans = search(arr, size , key);
//     cout<< ans << endl;
//     return 0;

// }


//  array reverse
#include <iostream>
using namespace std ;
void reverse(int arr[] ,int n ){
    int start = 0;
    int end = n-1;
    while(start <= end){
        swap(arr[start] , arr[end]);
        start ++;
        end--;
    }}
void print(int arr[]  , int n ){
    for(int i =0 ; i<n ; i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
}
int main(){
    int n ; 
    cout<<"Enter size " << endl;
    cin>>n;
    int a[50];
    cout<<"Enter elements :";
    for(int i =0 ; i<n ; i++){
        cin>> a[i];
    }
    reverse(a , n);
    print(a , n);
}

