#include<bits/stdc++.h>
using namespace std;

class Time {
    private:
        int hour;
        int minutes;
    public:
        void setTime(int hour, int minutes) {
            this->hour = hour;
            this->minutes = minutes;
        }
        void getData() {
            cout << hour << " hours and " << minutes << " minutes.";
        }
        void sum(Time t1, Time t2) {
            minutes = t1.minutes + t2.minutes;
            hour = minutes / 60;
            minutes = minutes % 60;
            hour += t1.hour + t2.hour;
        }
};

int main() {
    Time t1, t2, t3;
    t1.setTime(2, 45);
    t2.setTime(3, 30);
    t3.sum(t1, t2);

    cout << "Time1: "; t1.getData(); cout << endl; 
    cout << "Time2: " ; t2.getData(); cout<< endl; 
    cout << "Time3: " ; t3.getData(); cout << endl; 
}