//  insertion sort
#include <iostream>
using namespace std;
void insertionsort(int arr[] , int n ){
    for(int i =0 ; i< n ; i++){
        int temp = arr[i];
        int j = i-1 ;
        for ( ; j>= 0 ; j--){
            if(arr[j]> temp){
                arr[j+1] = arr[j];
            }
            else break;

        }
        arr[j+1] = temp;   
         }
}
void print(int arr[] , int n) {
    cout<<"Sorted array :"<< endl;
    for (int i =0 ;  i< n ;i++){
        cout<< arr[i]<<" " ;
    }
}

int main(){
    int n ; 
    cout<< "Enter size :"<< endl ;
    cin>> n ;
    cout<<"Enter elemets of array "<< endl;
    int arr[100];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    insertionsort(arr , n);
    print(arr , n);
} 