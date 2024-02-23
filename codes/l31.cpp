//recurssion

//to find factorial

/*#include <iostream>
using namespace std ; 
int factorial(int n){
    if(n==0){return 1;}
    int s = factorial(n-1);
    int b = n*s;
    return b ;
    
} 
int main(){
    int n ;
    cin>>n ;
    int ans = factorial(n);
    cout<< ans << endl;
}*/



// find 2 ki power n using recursion 
// #include <iostream>
// using namespace std ;
// int power (int n){
//     if(n==0){
//         return 1;
//     }
//     int s = power(n -1);
//     int b = 2* power(n -1);
//     return b ;
// }
// int main(){
//     int n ; 
//     cin>> n ;
//     int ans = power(n);
//     cout<<ans <<endl;
//     return 0 ;
// }




//printing counting 
// #include<iostream>
// using namespace std ;
// void count(int n){
//     if(n ==0 ){
//         return ;
//     }
//     cout<<n<<endl;
//     count(n-1);
// }
// int main(){
//     int n ; 
//     cin>> n;
//     count(n);
//     return 0;
// }


//Fibonacci series 
//0 , 1 ,2 ,3 ,5 , 8 , 13 , 21 ....
    // #include <iostream>
    // using namespace std ; 
    // int fib(int n){
    //     if(n ==0){ return 0 ;}
    //     if(n ==1){ return 1;}
    //     int s = fib(n-1) +fib(n-2);
    //     return s ;
    // }
    // int main(){
    //     int n ;
    //     cin>>n ;
    //     int ans = fib(n);
    //     cout<<ans<<endl;
    // }



// say digit  i/p - 43 o/p - four three 
// #include <iostream>
// using namespace std;
// void saydigit(int n , string arr[] ){
//     if (n ==0){return ;}
//     int digit = n%10;
//     n =n/10;

//     saydigit(n , arr);
//     cout<<arr[digit]<<" ";



// }
// int main(){
//     string arr[10] ={"Zero", "One" , "Two" , 
//                          "Three" , "Four" , "Five" , "Six" ,
//                              "Seven" , "Eight" , "Nine" };
//     int n ; cin>>n ; 
//     saydigit( n , arr );

//     return 0 ; 
// }

// Sorting array using recursion
// #include<iostream>
// using namespace std ; 
// bool isSort(int arr[], int n){
//     if (n==0|| n==1){
//         return true ;
//     }
//     if(arr[0]>arr[1]){
//         return false ;
//     }
//     else{
//         int ans = isSort(arr+1 , n-1);
//         return ans ;
//     }
    
// }
// int main(){
//     int n ;
//     cout<<"Enter n "<<endl;
//     cin>> n;
//     int arr[100];
//     cout<<"Enter elements "<<endl;
//     for(int i=0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     cout<<isSort(arr , n)<<endl;
//     return 0 ; 

// }


// adding elements of array
// #include<iostream>
// using namespace std ; 
// int findSum(int arr[], int n){
//     if(n==0){
//         return 0 ;
//     }
//     if(n==1){
//         return arr[0];
//     }
//     int sum = arr[0]+arr[1];
//     int aSum = sum + findSum(arr+2 , n-2);
//     return aSum;
    
// }
// int main(){
//     int n ;
//     cout<<"Enter n "<<endl;
//     cin>> n;
//     int arr[5000] ;
//     cout<<"Enter elements "<<endl;
//     for(int i=0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     int sum = findSum(arr , n);
//     cout<<sum<<endl;
//     return 0 ; 
// }


// linear search using recursion 
// #include <iostream>
// using namespace std;
// bool LinearSearch(int arr[] , int n , int k){
//     if (n==0){ return false;}
//     if (arr[0]==k){
//         return true ;
//     }else{
//         bool remainingpart = LinearSearch(arr+1 , n-1 , k);
//         return remainingpart;

//     }

// }
// int main(){
    // int n = 5;
    // int arr[5]={2 , 4, 5, 3 , 6};
    // int k = 2;
//     bool ans = LinearSearch(arr , n , k);
//     if (ans==true){cout<<"Present"<<endl;}
//     else{ cout<<"Absent"<<endl;}
//     return 0 ; 
// }



// binary search using recursion 
#include<iostream>
using namespace std ;
bool binarySearch(int arr[] , int s , int e , int k){
    if(s>e){
        return false ;
    }
    int mid = s+(e-s)/2;
    if(arr[mid]==k){
        return true ;
    }
    
    if(arr[mid]<k){
        return binarySearch(arr , mid+1 , e , k);
    }
    else{
        return binarySearch(arr , s , mid-1 , k);
    }
}
int main(){
    int n = 6;
    int arr[6]={2 , 4, 5, 3 , 6 , 12 };
    int k = 12;
    cout<<binarySearch(arr , 0 , 5 , k);
    return 0 ;

}


int min = INT64_MIN