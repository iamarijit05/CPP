#include<bits/stdc++.h>
using namespace std;

class Test {
    int *a;
    public:
        Test(int size) {
            a = new int[size];
            cout << "Constructor MSG: Array Created of size" << size << endl;
        }
        ~Test() {
            delete a;
            cout << "Destructor MSG: Memory Freed up.." << endl;
        }  
};

int main() {
    int size;
    cout << "Enter Size: " ;
    cin >> size;
    Test t(size);
    cout << "Back To main" << endl;
}