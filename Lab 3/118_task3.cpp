#include <iostream>

using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    Time() : hour(0), minute(0), second(0)
    {
    }

    int hours()
    {
        return hour;
    }
    int minutes()
    {
        return minute;
    }
    int seconds()
    {
        return second;
    }
    void reset(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    void advance(int h, int m, int s)
    {
        second += s;
        second %= 60;
        minute += m + s / 60;
        minute %= 60;
        hour += h + (m + s / 60) / 60;
        hour %= 24;
    }
    void print()
    {
        cout << "Current time is " << hours() << " hour(s) " << minutes() << " minute(s) " << seconds() << " second(s)" << endl;
    }
};

int main()
{
    Time t1;

    t1.reset(0, 0, 0);
    t1.print();

    t1.advance(0, 100, 100);
    t1.print();


    return 0;
}