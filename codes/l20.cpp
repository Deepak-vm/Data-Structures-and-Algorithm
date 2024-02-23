// reversing array
/*#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int >v){
    int s = 0 ;
    int e = v.size()-1;
    while(s<=e){
        swap(v[s] ,v[e]);
        s++; e--;
    }
    return v;

}
vector<int> print(vector<int>v){
    for(int i =0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
};

int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    vector<int> ans = reverse(v);
    print(ans);
    return 0 ;
    
    
}*/

// merge sorted array
#include<iostream>
#include<vector>
using namespace std;

int merge(int a[] , int m , int b[] , int n , int c[] ){
    int i =0 , j =0 , k = 0;
    while(i<m && j<n){
        if (a[i]< b[j]){
            c[k]=a[i];
            k++;
            i++;
        }
        else{
            c[k]=b[j];
            k++ ; 
            j++;
        }
    }
    while(i<m){
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<n){
        c[k]=b[j];
        k++;
        j++;
    }

}
void print(int ans[] , int n){
    for(int i =0 ; i<n ; i++){
        cout<<ans[i]<< " ";
    }
    cout<< endl;
}
int main(){
    int a[5]={1 ,3 , 5 ,7 ,9};
    int b[4]={2  , 4, 6 , 8};
    int c[9]={0};
    merge(a , 5 , b, 4, c);
    print(c , 9);
}