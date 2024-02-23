#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    vector<char> arr = {'a', 'b', 'c', 'a', 'b', 'a', 'd', 'e', 'a', 'b', 'c'};
    unordered_map<char, int> freqMap;

    for (char ch : arr) {
        freqMap[ch]++;
    }

    cout << "Frequency of each alphabet:" << endl;
    for (const auto& pair : freqMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
