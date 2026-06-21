#include<bits/stdc++.h>
using namespace std;

class Student {
    private:
        string name;
        int marks;
    public:
        Student(string name, int marks) {
            this->name = name;
            this->marks = marks;
        }
        friend void display(Student s);
        friend bool compare(Student a, Student b);
};

void display(Student s) {
    cout << s.name << " -> " << s.marks << endl;
}

bool compare(Student a, Student b) {
    return a.marks > b.marks;
}

class Salary;

class Employee {
    private:
        string name;
        int basePay;
    public:
        Employee(string n, int b) : name(n), basePay(b) {}
        friend void printTotal(Employee e, Salary s);
};

class Salary {
    private:
        int bonus;
    public:
        Salary(int bonus) { this->bonus = bonus; }
        friend void printTotal(Employee e, Salary s);
};

void printTotal(Employee e, Salary s) {
    cout << e.name << "'s Total: " << e.basePay + s.bonus << endl;
}

int main() {
    Student s1("Arijit", 95), s2("Rahul", 89);
    display(s1);
    display(s2);
    cout << (compare(s1, s2) ? "Arijit" : "Rahul") << " scored higher" << endl;

    Employee emp("Raj", 50000);
    Salary sal(10000);
    printTotal(emp, sal);

    return 0;
}