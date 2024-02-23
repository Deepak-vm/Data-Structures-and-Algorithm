// 2d array dynamic memory location
#include <iostream>
using namespace std ;
int main(){
    //creating 2 d array  
    int row ;
    cout<<"Enter row"<<endl;
    cin>>row;
    int col; 
    cout<<"Enter column "<<endl;
    cin>>col;
    int ** arr = new int* [row];
    for(int i =0 ; i<row ; i++){
        arr[i]= new int [col];   
    }
    //taking input
    cout<<"Enter input "<<endl;
    for(int i =0 ; i< row ; i++){
        for(int j = 0 ; j<col ; j++){
            cin>>arr[i][j];
                
        }
    }
    //print input
    for(int i =0 ; i<row ; i++){
        for(int j =0 ; j< col ; j++){
            cout<<arr[i][j]<<" ";

        }
        cout <<endl;
    }
    // releasing memory
    for(int i =0 ; i<row ; i++){
        delete [] arr[i];  
    }
    delete[] arr;

}