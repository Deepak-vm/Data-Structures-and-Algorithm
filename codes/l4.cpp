//patterns

#include <iostream>
using namespace std;

// // printing 1n to 4
int main(){
    int n;
    cin>>n;
    for(int i =1; i<=n;i+=1){
        int j;
        for(int j=1;j<=n;j+=1){
            cout<<j<<" ";

        }
    
    cout<<endl;}
}

// reverse 4 3 2 1
// int main(){
//     int n ;
//     cin>>n;
//     for(int i =1; i<=n; i++){
//         for (int j=1; j<=n;j++){
//             cout<<n-j+1<<" ";

//         }
//         cout<<endl;
//     }
// }



// printing 1 to 9
// int main(){
//     int n;
//     cin>>n;
//     int count=1;
//     for(int i=1; i<=n;i++){
//         for(int j =1;j<=n;j++){
//             cout<<count <<" ";
//             count++;
//         }
//         cout<<endl;
//     }
// }

// printing stars  in triangle pattern
// int main(){
//     int n; cin >>n;
//     for (int i=1; i<=n;i++){
//         for(int j=1; j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// }

// printing 1  2222  3333 to n in triangle pattern
// int main(){
//     int n;
//     cin>>n;
//     for(int i =1 ; i<=n ; i++){
//         for(int j =1; j<=i;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }



// printing 1 2 3 to n in triangle pattern
// int main(){
//     int n ;
//     cin>>n;
//     int count =1;
//     for(int i=1; i<=n; i++){
//         for (int j=1; j<=i;j++){
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
// }



// printing 1 21 321 4321 in triangle pattern 
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n;i++){
//         int count =i;
//         for(int j =1; j<=i; j++){
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
// }



// printing  1 21 321 4321 
// int main(){
//     int n;
//     cin>>n;
//     for (int i=1; i<=n; i++){
//         // int count=i-j+1;
//         for(int j=1;j<=i;j++){
//             cout<<i-j+1<<" ";
//         }
//         cout<<endl;
//     }
// }


// print aaa bbb ccc upto nnnn
// int main(){
//     int n;
//     cin>>n;
//     for(int i =1;i<=n; i++){
//         char ch ='A'+i-1;
//         for(int j=1; j<=n;j++){
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
// }

// print abc abc abc
// int main(){
//     int n ;
//     cin>>n;
//     for(int i =1 ; i<=n; i++){
//         char ch ='A';
//         for(int j =1;j<=n ; j++){
//             cout<<ch<<" ";
//             ch+=1;
//             ;
//         }
//         cout<<endl;
//     }
// }


// printing abcde abcde abcde 
// int main(){
//     int n ; 
//     cin>>n;
//     for(int i=1; i<+n; i++){
//         char ch = 'A';
//         for(int  j =1; j<=n; j++){
//             cout<<ch<<" ";
//             ch+=1;

//         }
//         cout<<endl;
//     }
// }

// printing abcd bcde cdef defg 
// int main(){
//     int n ; 
//     cin>>n;
//     for(int i =1; i<=n; i++){
//         char ch ='A'+i-1;
//         for(int j =1; j<=n; j++){
//             cout<<ch<<" ";
//             ch+=1;

//         }
//         cout<<endl;
//     }
// }

// print a bb ccc dddd in traingular pattern 
// int main(){
//     int n ; 
//     cin>>n;
//     for(int i=1; i<=n;i++){
//         char ch = 'A'+i-1;
//         for(int j=1; j<=i;j++){
//             cout<<ch<<" "; 
//         }
//         cout<<endl;
//     }
// }

// print  a bc def ghij in triangular pattern 
// int main(){
//     int n;
//     cin >>n;
//     char ch ='A';
//     for(int i=1; i<=n;i++){
//         for(int j =1; j<=i;j++){
//             cout<<ch<<" ";
//             ch++;

//         }
//         cout<<endl;
//     }

// }


// print abcdefgh 

// int main(){
//     int n ;
//     cin>>n;
//     char ch ='A';
//     for(int i =1; i<=n;i++){
//         for(int j=1; j<=i; j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
// }


//  print  A bc cde ;
// int main(){
//     int  n;
//     cin>>n;
//     for(int i =1; i<=n;i++){
//         char ch ='A'+i-1;
//         for(int j =1; j<=i;j++){
//             cout<< ch << " ";
//             ch+=1;

//         }
//         cout<<endl;
//     }
// }

// printing d cd bcd abcd 
// int main(){
//     int n ;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         char ch ='A'+n-i;
//         for (int j =1 ; j<=i; j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
// }

// printing star 
// int main(){
//     int n;
//     cin>>n;
//     for(int i =0; i<=n; i++){
//         for (int j =0 ; j<=i; j++){
//             char ch ='*'-n-1;
//             cout<<"*"<<" ";
//             ch--;


            
//         }
//         cout<<endl;
//     }
// }