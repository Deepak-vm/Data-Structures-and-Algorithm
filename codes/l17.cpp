//buuble sort 

#include <iostream>
using namespace std ;
void bubbleSort (int arr[] , int n){
    for (int i =1 ; i<n ;i++){
        for(int j =0 ; j<n-i ; j++){
            if (arr[j]<arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }

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
    bubbleSort(arr , n);
    print(arr , n);
}