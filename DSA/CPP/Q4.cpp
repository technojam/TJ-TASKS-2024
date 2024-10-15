#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char>& chars) {
   //write your code here
}

int main() {
    vector<char> chars = {'a','a','b','b','c','c','c'};
    int newSize = compress(chars);
    cout << "New length: " << newSize << endl;
    for (int i = 0; i < newSize; i++) {
        cout << chars[i] << " ";
    }
    cout << endl;
    return 0;
}
