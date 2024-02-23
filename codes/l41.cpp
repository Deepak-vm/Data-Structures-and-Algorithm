    #include <iostream>
    using namespace std ; 

    class  a{
        public:
        int he=2;
        int she =8;
        int it=6;

    a(){
        cout<<"default Constructor called "<<endl;
    }
    // parameterised constructor
    a(int he){
        this->he = he ;
    }
    };
    int main(){
        // statically 
        
        a a1; 
        // //dynamically
        a b(a1);





        // cout<<(*b).he<<endl;
        // cout<< b->he<<" ";
    

        // cout<<a1.he<<" ";
        // cout<<a1.she<<" ";
        // cout<<a1.it<<" ";
        
    }