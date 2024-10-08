#include <iostream>
#include "Counter.h"

using namespace std;


int main()
{
    Counter c1(7,-2),c2,c3;
    cout << c1.getCount()<<endl;

    c1++;
    cout << c1.getCount() << endl;

    c2+=c1;
    // cout << c1.getCount() << endl;
    cout << c2.getCount() << endl;

    

    return 0;
}