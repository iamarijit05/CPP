//Swapping private data of classes

#include<bits/stdc++.h>
using namespace std;


class class_2; //forward dec.

class class_1 {
    int value1;
    public:
        void setData(int a) {
            value1 = a;
        }
        void display() {
            cout << "Value 1: " << value1 << endl;
        }
        friend void exchange(class_1 &, class_2 &);
};

class class_2 {
    int value2;
    public:
        void setData(int a) {
            value2 = a;
        }
        void display() {
            cout << "Value 2: " << value2 << endl;
        }
        friend void exchange(class_1 &, class_2 &);
};

void exchange(class_1 &x, class_2 &y) {
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}

int main() {
    class_1 c1;
    class_2 c2;
    c1.setData(10);
    c2.setData(5);

    c1.display();
    c2.display();

    exchange(c1, c2);

    c1.display();
    c2.display();
}