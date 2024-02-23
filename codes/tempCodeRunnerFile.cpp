int main(){
    int n; 
    cin>>n;
    int a =0 ;
    int b =1;
    cout <<a<<" "<<b<<" ";
    for(int i =0 ; i<=n; i++){
        int c = a+b;
        a=b;
        b=c;
        cout<<c<<" ";

    }