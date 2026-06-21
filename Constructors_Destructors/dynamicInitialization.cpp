#include <bits/stdc++.h>
using namespace std;

class FixedDeposit {
    long int principal;
    int years;
    float rate;
    float returnValue;

public:
    FixedDeposit() {}

    // Constructor for fractional rate (e.g. 0.12 = 12%)
    FixedDeposit(long int principal, int years, float rate = 0.12);

    // Constructor for integer rate (e.g. 12 = 12%)
    FixedDeposit(long int principal, int years, int rate);

    void display() {
        cout << "Principal Amount : " << principal << endl;
        cout << "Return Value     : " << returnValue << endl;
        cout << endl;
    }
};

FixedDeposit::FixedDeposit(long int principal, int years, float rate) {
    this->principal = principal;
    this->years = years;
    this->rate = rate;

    returnValue = principal;

    for (int i = 1; i <= years; i++) {
        returnValue *= (1.0 + rate);
    }
}

FixedDeposit::FixedDeposit(long int principal, int years, int rate) {
    this->principal = principal;
    this->years = years;
    this->rate = rate;

    returnValue = principal;

    for (int i = 1; i <= years; i++) {
        returnValue *= (1.0 + float(rate) / 100);
    }
}

int main() {
    FixedDeposit fd1, fd2, fd3;

    long int p;
    int y;
    float r;
    int R;

    // Case 1: float interest rate
    cout << "Enter principal, years and float rate (e.g. 0.12): ";
    cin >> p >> y >> r;

    fd1 = FixedDeposit(p, y, r);
    fd1.display();

    // Case 2: integer interest rate
    cout << "Enter principal, years and integer rate (e.g. 12): ";
    cin >> p >> y >> R;

    fd2 = FixedDeposit(p, y, R);
    fd2.display();

    // Case 3: default rate = 12%
    cout << "Enter principal and years: ";
    cin >> p >> y;

    fd3 = FixedDeposit(p, y);
    fd3.display();

    return 0;
}