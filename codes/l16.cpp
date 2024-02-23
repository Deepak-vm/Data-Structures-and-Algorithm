// array selection sorting 



#include <iostream>
using namespace std ;
void sort(int  arr[] , int size ){
    for ( int i =0 ; i<(size-1); i++){
        int minindex = i;
        for(int j = i+1; j<size; j++){
            if(arr[j]<arr[minindex])
            minindex=j;
        }
    swap(arr[minindex] ,arr[i] );
    }  
}
void print(int arr[] , int size){
    cout<<"Sorted array :"<< endl;
    for(int i =0 ; i<size; i++){
        cout<< arr[i] << " ";
    }  
}
int main(){
    int n =5 ;
    int arr[5]={4,9,6,3,2};
    sort(arr , 5);
    print(arr,5);
}









