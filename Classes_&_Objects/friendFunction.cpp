#include<bits/stdc++.h>
using namespace std;

class Sample {
    int a;
    int b;
    public:
        void setValue() {
            a = 25;
            b = 40;
        }
        friend float mean(Sample s);
};

float mean(Sample S) {
    return float(S.a + S.b) / 2;
}

int main() {
    Sample x;
    x.setValue();
    cout << "Mean Value: " << mean(x);
}