// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][4];
//     // taking input row wise
//     for(int row =0 ; row<3 ; row++){
//         for(int col = 0 ; col<4 ; col++){
//             cin>>arr[row][col];
//         }
//     }
//     // taking input column wise
//     // for(int col =0 ; col<3 ; col++){
//     //     for(int row = 0 ; row<4 ; row++){
//     //         cin>>arr[col][row];
//     //     }
//     // }
//     // printing input
//     // row 
    // for(int row =0 ; row<3 ; row++){
    //     for(int col = 0 ; col<4 ; col++){
    //         cout<<arr[row][col]<<" ";
    //     }
    // }
//     cout<< endl;
//     // column
//     // for(int col =0 ; col<3 ; col++){
//     //     for(int row = 0 ; row<4 ; row++){
//     //         cout<<arr[col][row]<<" ";
//     //     }
//     // } 
//     return 0 ;
// }


// linear search 
// #include <iostream>
// using namespace std;
// bool ispresent(int arr[3][4] ,int target , int row , int column){
//     for(int i = 0; i<3 ; i++ ){
//         for( int j=0 ; j<4 ; j++){
//             if(arr[i][j]==target){
//                 return 1;
//             }
//         } 
        
//     }
//     return 0 ;
// }
// int main(){
//     int arr[3][4];
//     cout<<"Enter input "<<endl;
//     for(int i =0 ; i<3 ; i++){
//         for(int j =0 ; j<4 ; j++){
//             cin>> arr[i][j];
//         }
//     }
//     int target ;
//     cout<<"enter target"<< endl;
//     cin>> target;
//     if(ispresent(arr , target , 3 , 4)){
//         cout<<"Found"<< endl;}
//     else{
//         cout<<"Not Found"<< endl;
//     }
//     return 0 ;

// }


//  row wise sum 
#include <iostream>
using namespace std;
void rowsum(int arr[][4]  , int row , int column){
    int sum =0 ;
    for(int i = 0; i<3 ; i++ ){
        for( int j=0 ; j<4 ; j++){
            sum+=arr[i][j];
        } 
        cout<<sum<<endl;}}

void largesrowsum(int arr[][4]  , int row , int column){
    int sum =0 ;
    int maxi = INT64_MIN;
    for(int i = 0; i<3 ; i++ ){
        for( int j=0 ; j<4 ; j++){
            sum+=arr[i][j];
        } 
        if(maxi<sum){
            maxi = sum;
        }
        cout<<sum<<endl;}}

void rowsum(int arr[][4], int row, int column) {
    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < column; j++) {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

int main() {
    int arr[3][4];
    cout << "Enter input" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
    }
    rowsum(arr, 3, 4);
    return 0;
}






