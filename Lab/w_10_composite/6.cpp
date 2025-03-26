#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Time
{
private:
    int hour, minute, second;
public:
    // @Overide
    Time(int hr, int min, int sec) {
        this->hour = hr;
        this->minute = min;
        this->second = sec;
    }
    Time(int duration) {
        this->hour = duration / 3600;
        duration %= 3600;
        this->minute = duration / 60;
        this->second = duration % 60;
    }

    int getHour()   { return this->hour; }
    void setHour(int h)   { this->hour = h; }
    
    int getMinute() { return this->minute; }
    void setMinute(int m) { this->minute = m; }

    int getSecond() { return this->second; }
    void setSecond(int s) { this->second = s; }
    
    int getDuration() {
        return (this->hour * 3600) + (this->minute * 60) + this->second;
    }

    Time add(Time other) {
        int total = (this->getDuration() + other.getDuration()) % 86400;
        return Time(total);
    }
    int subtract(Time other) {
        int t1 = this->getDuration();
        int t2 = other.getDuration();

        if(t1 >= t2) {
            return t1 - t2;
        } else {
            return (86400 - t2) + t1; // (24*3600)
        }
        // return abs(other.getDuration() - this->getDuration());
    }
    int equals(Time other) {
        return this->getDuration() == other.getDuration();
    }
    string toString() const {
        return (hour < 10 ? "0" + to_string(hour) : to_string(hour)) + ":" +
               (minute < 10 ? "0" + to_string(minute) : to_string(minute)) + ":" +
               (second < 10 ? "0" + to_string(second) : to_string(second));
    }
};

int main() {
    // implement program to test class Time
    Time t1(3661); //1:1:1
    Time t2(3700);
    cout << "Duration: " << t1.toString() << " seconds" << endl;
    return 0;
}
