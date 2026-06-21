#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

class Test {
public:
    Test() {
        cnt++;
        cout << "Constructor Msg: Object Number: "
             << cnt << " created.." << endl;
    }

    ~Test() {
        cout << "Destructor Msg: Object Number: "
             << cnt << " destroyed.." << endl;
        cnt--;
    }
};

int main() {
    cout << "Entering main function" << endl;

    Test t1;

    {
        cout << "Entering block 1" << endl;

        Test t2, t3;

        cout << "Exiting block 1" << endl;
    }

    cout << "Exiting main function" << endl;

    return 0;
}