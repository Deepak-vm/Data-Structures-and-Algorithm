//to find wheter the input is a lower case b/w ato z or Upper case a to z or a numerical 1 to 9

/*
#include <iostream>
using namespace std;
int main(){
    char n;
    cin>> n;
    int ascii = n;
    if( ascii>=65 && n<=90){
        cout<<"Upper case"<<endl;
    }
    else if(ascii>=97 && n<=122){
        cout<<"LOwer case"<<endl;
    }
    else if(ascii>=48 && n<=57){
        cout<<"Numerical "<< n;
    }
}*/
// 
// #include <iostream>
// using namespace std;
// int main(){
//     char n;
//     cin>> n;
//     if(isupper(n)){
//         cout<<"Upper case"<<endl;
//     }
//     else if(islower(n)){
//         cout<<"LOwer case"<<endl;
//     }
//     else if(isdigit(n)){
//         cout<<"Numerical "<< n;
//     }
// }


/* Sum of even numbers
#include<iostream>
using namespace std;
int main(){
    int n ; 
    cin>>n;
    int sum =0;
    int i=0;
    while(i<n){
        if (i%2==0){
            sum+=i;
        }
        i++;
    }
    cout<<(sum)<<endl;
} */

// /*Print all prime number between 1 to n;
#include<iostream>
using namespace std;

bool prime(int num) {
    int count = 0;
    for(int i = 1; i <= num; i++) {
        if(num % i == 0) {
            count++;
        }
    }
    if(count == 2) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int n;
    cout << "Enter the last number: ";
    cin >> n;

    for(int i = 2; i <= n; i++) {
        if(prime(i) == true) {
            cout << i << " ";
        }
    }

    return 0;
}


