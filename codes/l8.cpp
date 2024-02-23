
//calculator

/*#include <iostream>

using namespace std;
int main(){
    int a, b;
    cout<<"enter value of a"<< endl;
    cin>>a;
    cout<<"enter value of b"<< endl;
    cin>>b;
    char n;
    cout<<"enter type of operation"<< endl;
    cin >>n;
    switch(n){
        case '+': cout <<(a+b)<<endl; break;
        case '-': cout <<(a-b)<<endl;break;
        case '*': cout <<(a*b)<<endl;break;
        case '/': cout <<(a/b)<<endl;break;


    }

}*/

// currency notes
/*#include<iostream>

using namespace std;
int main(){
    int n ;
    cout<<"Enter amount" << endl;
    cin>>n;
    int rs100 , rs50 , rs10 ;
    switch(1){
        case 1 :
            rs100=n/100;
            n=n-rs100*100;
            cout<<"100 rs notes :"<<rs100<< endl;
        case 2 :
            rs50=n/50;
            n=n-rs50*50;
            cout<<"50 rs notes :"<<rs50<< endl;
        case 3 :
            rs10=n/10;
            n=n-rs10*10;
            cout<<"10 rs notes :"<<rs10<< endl;
    
}}*/

// function 
// #include <iostream>
// using namespace std;
// int power(int a , int b){
//     int ans = 1; 
//     for (int i = 1; i<= b;i++){
//         ans = ans *a;

//     }
//     return ans;}
// int main(){
//     int a , b;
//     cin>>a>>b;
//     int answer = power(a, b); 
//     cout<<answer<< endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;
// bool num(int n){
//     if(n%2==0){
//         return true;
//     }
//     else return false;
// }
// int main(){
//     int n; 
//     cin>>n;
//     bool ans = num(n);
//     cout<< ans;

// }

//  ncr 
// #include <iostream>
// using namespace std;

// int factorial(int n){
//     int fact = 1;
//     for(int i =1; i<=n ;i++){
//         fact = fact *i;

//     } 
//     return fact ;
// }

// int ncr(int n , int r){
//     int num = factorial(n);
//     int denom = factorial(r)*factorial(n-r);
//     return  num/denom;


// }
// int main(){
//     int n , r;
//     cout<<"enter n and r"<< endl;
//     cin>>n>> r;
//     int ans = ncr(n, r);
//     cout<<ans<<endl;


// }


// prime number 
// #include <iostream>
// using namespace std;
// void prime(int n ){
//     int count =0;
//     for (int i =1 ; i<=n ; i++){
//         if (n%i==0){
//             count++;
//         }
//     }
//     if (count==2){ cout << "prime"<< endl;}
//     else cout<< "not prime" << endl;
// }
// int main(){
//     int n ;
//     cout<< "enter number" <<endl;
//     cin>> n;
//     prime(n);
// }





