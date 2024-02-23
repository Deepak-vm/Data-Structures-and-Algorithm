// binary search 

#include <iostream>
using namespace std;

int binarysearch(int arr[] , int size , int key){
    int start =0 ; 
    int end = size-1;
    int mid = (start + end)/2;
    while(start<= end){
        if (arr[mid]== key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            start = mid-1;
        }
        mid = (start + end)/2;

    }
    return -1;

}

int main(){
    int arr[5]={ 1 , 2 , 8 , 4, 9};
    int binarysea = binarysearch(arr , 5 , 9);
    cout<<"Binary index "<<binarysea<<endl;
    return 0 ;
}