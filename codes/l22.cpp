// // character array and string
// #include<iostream>
// using namespace std;

// char tolowercase(char ch){
//     if(ch>='a'&& ch<='z'){
//         return ch;
//     }
//     else {
//         return ch-'A'+'a';
//     }
// }

// void reverse(char arr[] , int n){
//     int s=0 ;
//     int e = n-1;
//     while(s<e){
//         swap(arr[s] , arr[e]);
//         s++ ; e--;
//     }
// }

// bool checkpalindrome(char arr[] , int n){
//     int s= 0 ;
//     int e =n-1;
//     while(s<=e){
//         if(tolowercase(arr[s])!=tolowercase(arr[e])){ return 0 ;}
//         else{
//             s++; e--;
//         }
//     }
//     return 1;
// }


// int getlength(char name[]){
//     int count=0;
//     for(int i =0 ; name[i]!='\0'; i++){
//         count++;
//     }
//     return count;

// }



// char getmax(string s){
//     int ar[26]={0};
//     for(int i =0 ; i<s.length(); i++){
//         char ch = s[i];
//         if()
//     }
// }
// int main(){
//     char name[20];
//     cout<<"Enter name "<< endl;
//     cin>> name;
//     cout<<"Your name is "<<name;
//     cout<< endl;

//     int len = getlength(name);
//     cout<< "length  " << len<< endl;
//     reverse(name , len);
//     cout<< "Reverse Name " << name<< endl;

//     cout<< "Check palindrome or not "<< checkpalindrome(name , len)<< endl;

//     cout<<"to lower case "<< tolowercase('A');












//     return 0;
// }