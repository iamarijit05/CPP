#include<bits/stdc++.h>
using namespace std;

class Test {
    private: 
        int roll;
        string name;
    public:
        Test(int roll, string name) {
            this->name = name;
            this->roll = roll;
        }
        void getData() {
            cout << "Student's Name: " << name << " Roll: " << roll << endl;
        }
};

int main() {
    Test t1(1, "Arijit");
    Test t2(2, "Smita");
    t1.getData();
    t2.getData();
}