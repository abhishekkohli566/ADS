#include <iostream>
#include <iomanip> 
using namespace std;
class Time {
private:
    int hours;
    int minutes;
public:
    Time(int h = 0, int m = 0) {
        if (h < 0 || h > 23 || m < 0 || m > 59) {
            cout << "Invalid time values. Setting to 00:00.\n";
            hours = 0;
            minutes = 0;
        } else {
            hours = h;
            minutes = m;
        }
    }
        void display() const {
        cout << "Time: " 
             << setw(2) << setfill('0') << hours << ":" 
             << setw(2) << setfill('0') << minutes << "\n";
    }

     friend void addMinutes(Time &t, int extraMinutes);
};

void addMinutes(Time &t, int extraMinutes) {
    if (extraMinutes < 0) {
        cout << "Cannot add negative minutes.\n";
        return;
    }
    int totalMinutes = t.hours * 60 + t.minutes + extraMinutes;
    t.hours = (totalMinutes / 60) % 24; // wrap around 24 hours
    t.minutes = totalMinutes % 60;
}
int main() {
    Time t1(10, 45); 
    t1.display();
    addMinutes(t1, 80); 
    cout << "After adding 80 minutes:\n";
    t1.display();
    return 0;
}
