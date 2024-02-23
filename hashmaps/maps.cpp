#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main() {

    // creation 
    unordered_map<string, int> m;

    // insertion in 3 ways  :
    // 1
    pair<string, int> p = make_pair("Hello", 3);
    m.insert(p);

    // 2 
    pair<string, int> pair2("World", 1);

    // 3 
    m["deepak"] = 4;
    // if we again write the same, it will be updated to the new value 
    // e.g., m["deepak"] = 2; 
    // it will be updated to 2 

    // search 
    cout << m["deepak"] << endl;
    cout << m.at("Hello") << endl;

    // cout<<m.at("unkown key")<<endl; // this will give error
    cout<<m["unknown key"]<<endl; // this will create entry and will give by default value 0

    // size 
    cout<<m.size()<<endl;

    // erase 
    m.erase();
    cout<<m.size()<<endl;

    // Iteratror traversal 
    unordered_map<string , int>::iterator it = m.begin();
    while(it!=m.end()){
        cout<<it->first<<""<<it->second<<endl;
        it++;    
    }

    return 0;
}
