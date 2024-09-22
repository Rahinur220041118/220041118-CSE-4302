#include <iostream>

using namespace std;

class Time
{
private:
    int hour;
    int minute;

public:
    Time() : hour(0)
    {
    }
    void setIncrementStep(int step)
    {
        minute = step;
    }
    int getCount()
    {
        return hour;
    }

    void increment()
    {
        hour += minute;
    }

    void resetCount()
    {
        hour = 0;
    }
};

int main()
{
    Time c1;

    cout << "Count is equal to " << c1.getCount() << endl;

    c1.setIncrementStep(5);
    c1.increment();
    cout << "Count is equal to " << c1.getCount() << endl;

    c1.setIncrementStep(-3);
    c1.increment();
    cout << "Count is equal to " << c1.getCount() << endl;

    c1.resetCount();

    c1.setIncrementStep(15);
    c1.increment();
    cout << "Count is equal to " << c1.getCount() << endl;

    c1.setIncrementStep(-10);
    c1.increment();
    cout << "Count is equal to " << c1.getCount() << endl;

    c1.resetCount();

    c1.setIncrementStep(32);
    c1.increment();
    cout << "Count is equal to " << c1.getCount() << endl;

    return 0;
}