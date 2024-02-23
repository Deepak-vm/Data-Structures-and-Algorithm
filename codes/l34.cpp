//string reversing using recursion
// #include<iostream>
// using namespace std ;
// string rev(string x , int i , int j){
//     if(i>j){
//         return x ;
//     }
//     swap(x[i], x[j]);
//     i++ ; j--;

//     return rev( x , i , j);
    
// }
// int main(){
//     string name = "Hello";
//     string ans =rev(name, 0 , name.length()-1 );
//     cout<<ans<<endl;

//     return 0 ;
// }




// power of a ki b 
// #include <iostream>
// using namespace std;
// int power(int a , int b ){
//     if(b==0){return 1;}
//     if(b==1){return a;}

//     int ans = power(a, b/2);

//     if(b%2==0){
//         return ans*ans;
//     }
//     else{
//         return (ans*ans)*a;
//     }

// }
// int main(){
//     int a , b ;
//     cout<< "Enter a"<<endl;
//     cin>>a;
//     cout<<"Enter b "<<endl;
//     cin>>b;
//     int ans = power(a , b);
//     cout<<ans<<endl;
// }



//bubble sort using recurssion 
// #include <iostream>
// using namespace std ; 
// void sortarray(int *arr , int n){
//     if(n==0|| n==1){
//         return ;
//     }
//     for(int i =0 ;i<n-1 ; i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i] , arr[i+1]);
//         }

//     }
//     sortarray(arr , n-1);

// }
// int main(){
//     int arr[5] ={4,7,2,6,8 };
//     sortarray(arr , 5);
//     for(int i =0 ; i<5 ; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0 ;
// }








