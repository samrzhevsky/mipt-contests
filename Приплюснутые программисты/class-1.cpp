#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

class Time
{
public:
    int hour;
    int min;
};

Time add(Time a, int min)
{
    a.hour += (a.min + min >= 60) ? ((a.min + min) / 60) : 0;
    a.min = (a.min + min) % 60;
    a.hour = a.hour % 24;

    return a;
}

int main()
{
    Time a, newtime;
    int min;

    // Получить a  из консоли
    cin >> a.hour >> a.min;

    // Получить min  из консоли
    cin >> min;

    newtime = add(a, min);
    cout << newtime.hour << ":" << newtime.min << endl;
}