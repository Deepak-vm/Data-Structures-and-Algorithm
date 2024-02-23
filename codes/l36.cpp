// quick sort algorithm 
#include<iostream>
using namespace std ;

int partition(int arr[] , int s , int e){
    int pivot = arr[s];
    int count =0 ;
    for(int i = s+1 ; i<= e ; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotindex = s+count ;
    swap(arr[pivotindex] , arr[s]);

    int i=s , j=e ;
    while( i<= pivotindex && j >= pivotindex){
        while(arr[i]< pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<= pivotindex && j >= pivotindex){
            swap(arr[i++] , arr[j--]);
        }

    }
    return pivotindex;



}
void QuickSort(int arr[] , int s , int e){
    if(s>=e){
        return ;
    }
    int p = partition(arr , s ,e);
    QuickSort(arr , s , p-1);
    QuickSort(arr , p+1 , e);


}
int main(){
    int n =22 ;
    int arr[22]={43 , 595 ,348, 857, 684, 94, 108 ,542, 732, 655, 563, 434, 964,
     92, 680 ,434 ,321, 966, 835 ,774 ,65 ,984};
    QuickSort(arr , 0 , n-1);
    for(int i =0 ; i<n ; i++){
        cout<<arr[i]<< " " ;
    }

    return 0;

}